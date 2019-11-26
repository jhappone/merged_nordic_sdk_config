<?php
/**

https://github.com/jhappone/merged_nordic_sdk_config

Nordic sdk_config.h merger script

usage: php config_merger.php <initial config file> <path to other config files> <unchecked all checkmarks (true/false)>

*/

if ($argc < 3)
{
	echo "\nusage: php config_merger.php <initial config file> <path to other config files> <unchecked all checkmarks (true/false)>\n\n";
	exit();
}

$initialConfigFileName = $argv[1];
$path = $argv[2];
$uncheckAll = $argv[3];

if ($uncheckAll != null)
{
	if (stristr($uncheckAll, "false"))
		$uncheckAll = null;
	else
		$uncheckAll = true;
}
else
	$uncheckAll = true;

$sdkFile = fopen($initialConfigFileName, "r");

$initialSdkConfig = [];

function parse($sdkFile, &$sdkConfig, &$parentSdkConfig = null)
{
	while($line = fgets($sdkFile))
	{
		$exploded = explode(" ", trim($line));

		if ($exploded[0] == "//")
		{
			$exploded = array_filter($exploded);

			$tag = $exploded[1];

			preg_match('#\<(.*?)\>#', $tag, $foo);

			$tag = $foo[1];
			
			$define = $exploded[2];

			unset($exploded[0]);
			unset($exploded[1]);
			
			if (!stristr($tag, "i"))
				unset($exploded[2]);
			
			$text = implode(" ", $exploded);
			
			// Remove < and > from text
			$text = str_replace("<", "", $text);
			$text = str_replace(">", "", $text);

			// If endtag
			if (strstr($tag, "/"))
			{
				//echo "$tag Endtag\n";			
				return;
			}

			if (in_array($tag, ["h", "e"]))
			{
				$key = /*$tag . " " . */$define;

				if(!array_key_exists($key, $sdkConfig))
				{
					$sdkConfig[$key] = ["tag"=>$tag, "descr"=>$text, "define"=>$define, "childs"=>[]];
				}

				parse($sdkFile, $sdkConfig[$key]["childs"], $sdkConfig[$key]);
			}			
			else if (in_array($tag, ["o", "q"]))
			{
				$key = /*$tag . " " . */$define;
				
				$sdkConfig[$key] = ["tag"=>$tag, "descr"=>$text, "define"=>$define];
				//echo "$key : $text\n";
			}
			else if (stristr($tag, "="))
			{
				$sdkConfig[$key]['options'][] = ["tag"=>$tag, "define"=>$define];
			}
			else if (stristr($tag, "i"))
			{
				$sdkConfig[$key]['info'] = $text;
			}
		}
		else if ($exploded[0] == "#define")
		{
			if ($key)
				$sdkConfig[$key]['value'] = $exploded[2];
			else
			{
				$parentSdkConfig['value'] = $exploded[2];
			}
		}
	};
}

// Initial config
parse($sdkFile, $initialSdkConfig);

$di = new RecursiveDirectoryIterator($path);
foreach (new RecursiveIteratorIterator($di) as $filename => $file)
{
    if (stristr($filename, "sdk_config.h"))
	{
		$sdkConfig = [];

		$sdkFile = fopen($filename, "r");

		// Read rest
		parse($sdkFile, $sdkConfig);
		
		merge($initialSdkConfig, $sdkConfig);

		if (isset($initialSdkConfig['Application']) == false && false)
		{
			echo "Application gone!!\n";
			echo "$filename\n";
			exit();
		}
		
		//break;
	}
}
/*

*/

function merge(&$originalSdk, $newSdkConfig)
{
	// Compare
	if (!is_array($newSdkConfig))
		return;
	
	foreach($newSdkConfig as $key => $value)
	{
		if (!$key)
		{
			continue;
		}
		
		// Do we have a key
		if ($originalSdk[$key])
		{
			if ($originalSdk[$key]['childs'])
				merge($originalSdk[$key]['childs'], $value['childs']);
		}
		else
		{
			// Add All
			echo "Merging: <" . $value['tag'] . "> $key\n";
			$originalSdk[$key] = $value;
		}
	}
}


//print_r($sdkConfig);


function writeback($fOut, $sdkConfig)
{
	global $uncheckAll;
	
	if (!is_array($sdkConfig))
		return;
	
	ksort($sdkConfig, SORT_STRING | SORT_FLAG_CASE);
	
	// write $sdkConfig back to file
	foreach($sdkConfig as $key => $value)
	{
		if ($key == "")
			continue;
		else
		{
			if (in_array($value['tag'], ["h", "e"]))
			{
				fputs($fOut, "// <" . $value['tag'] . "> " . $key . "\n");
				fputs($fOut, "//==========================================================\n");

				// Comment this, if you want to disable/change default setting
				if ($value['tag'] == "e" && $uncheckAll != null)
				{
					$value['value'] = "0";
				}

				fputs($fOut, "#ifndef " . $value['define'] . "\n");
				fputs($fOut, "#define " . $value['define'] . " " . $value['value'] . "\n");
				fputs($fOut, "#endif\n\n");

				writeback($fOut, $value['childs']);
				
				fputs($fOut, "// </" . $value['tag'] . ">\n");
			}
			else if (in_array($value['tag'], ["o", "q"]))
			{
				fputs($fOut, "// <" . $value['tag'] . "> " . $value['define'] . " " . $value['descr'] . "\n\n");
				
				if ($value['info'])
					fputs($fOut, "// <i> " . $value['info'] . "\n");
				
				if ($value['options'])
				{
					foreach($value['options'] as $option)
					{
						fputs($fOut, "// <" . $option['tag'] . "> " . $option['define'] . "\n");
					}
				}

				// Comment this, if you want to disable/change default setting
				if ($value['tag'] == "q" && $uncheckAll != null)
				{
					$value['value'] = "0";
				}
				
				fputs($fOut, "#ifndef " . $value['define'] . "\n");
				fputs($fOut, "#define " . $value['define'] . " " . $value['value'] . "\n");
				fputs($fOut, "#endif\n\n");
			}
		}
	}
}

$fOut = fopen("sdk_config_merged.h", "w");

fputs($fOut, "#ifndef SDK_CONFIG_H\n");
fputs($fOut, "#define SDK_CONFIG_H\n");
fputs($fOut, "// <<< Use Configuration Wizard in Context Menu >>>\n");
fputs($fOut, "#ifdef USE_APP_CONFIG\n");
fputs($fOut, "#include \"app_config.h\"\n");
fputs($fOut, "#endif\n");

writeback($fOut, $initialSdkConfig);

fputs($fOut, "// <<< end of configuration section >>>\n");
fputs($fOut, "#endif //SDK_CONFIG_H\n");
