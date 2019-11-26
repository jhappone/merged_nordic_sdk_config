#ifndef SDK_CONFIG_H
#define SDK_CONFIG_H
// <<< Use Configuration Wizard in Context Menu >>>
#ifdef USE_APP_CONFIG
#include "app_config.h"
#endif
// <h> Application
//==========================================================
#ifndef Application
#define Application 
#endif

// <q> ADAFRUIT_SHIELD_ENABLE - Adafruit shield enabled.

#ifndef ADAFRUIT_SHIELD_ENABLE
#define ADAFRUIT_SHIELD_ENABLE 0
#endif

// <o> ADV_INTERVAL - Advertising interval (in units of 0.625 ms)

#ifndef ADV_INTERVAL
#define ADV_INTERVAL "Nordic_ATT_MTU"
#endif

// <o> ANT_BS_CHANNEL_NUMBER - BS channel number.

#ifndef ANT_BS_CHANNEL_NUMBER
#define ANT_BS_CHANNEL_NUMBER 0
#endif

// <o> ANT_CHANNEL_NUM - Used ANT channel number.

#ifndef ANT_CHANNEL_NUM
#define ANT_CHANNEL_NUM 0
#endif

// <o> ANT_MS_CHANNEL_NUMBER - MS channel number.

#ifndef ANT_MS_CHANNEL_NUMBER
#define ANT_MS_CHANNEL_NUMBER 1
#endif

// <o> ANT_NETWORK_NUM - Network number.

#ifndef ANT_NETWORK_NUM
#define ANT_NETWORK_NUM 0
#endif

// <o> ANT_RESPONSE_CHANNEL_NUMBER - ANT response channel number.

#ifndef ANT_RESPONSE_CHANNEL_NUMBER
#define ANT_RESPONSE_CHANNEL_NUMBER 1
#endif

// <o> ANT_SCAN_CHANNEL_NUMBER - ANT scan channel number.

#ifndef ANT_SCAN_CHANNEL_NUMBER
#define ANT_SCAN_CHANNEL_NUMBER 0
#endif

// <o> ANTPLUS_NETWORK_NUM - ANT PLUS network number.

#ifndef ANTPLUS_NETWORK_NUM
#define ANTPLUS_NETWORK_NUM 0
#endif

// <o> APDU_BUFF_SIZE - APDU buffer size.

#ifndef APDU_BUFF_SIZE
#define APDU_BUFF_SIZE 256
#endif

// <o> APP_ANT_OBSERVER_PRIO - Application ANT event observer priority.

#ifndef APP_ANT_OBSERVER_PRIO
#define APP_ANT_OBSERVER_PRIO 0
#endif

// <o> APP_BLE_OBSERVER_PRIO - Application BLE event observer priority.

#ifndef APP_BLE_OBSERVER_PRIO
#define APP_BLE_OBSERVER_PRIO 0
#endif

// <o> APP_SHUTDOWN_HANDLER_PRIORITY - Application shutdown observer priority.

#ifndef APP_SHUTDOWN_HANDLER_PRIORITY
#define APP_SHUTDOWN_HANDLER_PRIORITY 1
#endif

// <o> APP_VAR_MEMORY_SIZE - Size of the memory for CLI variables storage

#ifndef APP_VAR_MEMORY_SIZE
#define APP_VAR_MEMORY_SIZE 16384
#endif

// <h> application_info
//==========================================================
#ifndef application_info
#define application_info "ble-connectivity"
#endif

// <o> APP_ID - Application ID

#ifndef APP_ID
#define APP_ID 0
#endif

// <h> APP_VERSION
//==========================================================
#ifndef APP_VERSION
#define APP_VERSION 
#endif

// <o> APP_VERSION_MAJOR - Major version 0-1000

#ifndef APP_VERSION_MAJOR
#define APP_VERSION_MAJOR 0
#endif

// <o> APP_VERSION_MINOR - Minor version 0-1000

#ifndef APP_VERSION_MINOR
#define APP_VERSION_MINOR 1
#endif

// <o> APP_VERSION_PATCH - Patch version 0-1000

// <i> illegal in Semantic Versioning.
#ifndef APP_VERSION_PATCH
#define APP_VERSION_PATCH "+"
#endif

// </h>
// </h>
// <o> BLE_DIS_C_STRING_MAX_LEN - Maximal length of the string retrieved from the Device Information Client module.

#ifndef BLE_DIS_C_STRING_MAX_LEN
#define BLE_DIS_C_STRING_MAX_LEN 30
#endif

// <o> BLE_GATT_DB_MAX_CHARS - The maximum number of characteristics present in a service record.

#ifndef BLE_GATT_DB_MAX_CHARS
#define BLE_GATT_DB_MAX_CHARS 9
#endif

// <h> BLE_PAIR_SECURITY_PARAMETERS
//==========================================================
#ifndef BLE_PAIR_SECURITY_PARAMETERS
#define BLE_PAIR_SECURITY_PARAMETERS 
#endif

// <e> BLE_SEC_PARAM_BOND
//==========================================================
#ifndef BLE_SEC_PARAM_BOND
#define BLE_SEC_PARAM_BOND 0
#endif

// <q> BLE_SEC_PARAM_KDIST_OWN_ENC - Enables Long Term Key and Master Identification distribution by device.

#ifndef BLE_SEC_PARAM_KDIST_OWN_ENC
#define BLE_SEC_PARAM_KDIST_OWN_ENC 0
#endif

// <q> BLE_SEC_PARAM_KDIST_OWN_ID - Enables Identity Resolving Key and Identity Address Information distribution by device.

#ifndef BLE_SEC_PARAM_KDIST_OWN_ID
#define BLE_SEC_PARAM_KDIST_OWN_ID 0
#endif

// <q> BLE_SEC_PARAM_KDIST_PEER_ENC - Enables Long Term Key and Master Identification distribution by peer.

#ifndef BLE_SEC_PARAM_KDIST_PEER_ENC
#define BLE_SEC_PARAM_KDIST_PEER_ENC 0
#endif

// <q> BLE_SEC_PARAM_KDIST_PEER_ID - Enables Identity Resolving Key and Identity Address Information distribution by peer.

#ifndef BLE_SEC_PARAM_KDIST_PEER_ID
#define BLE_SEC_PARAM_KDIST_PEER_ID 0
#endif

// </e>
// <o> BLE_SEC_PARAM_IO_CAPS - IO Capabilities settings.

// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
#ifndef BLE_SEC_PARAM_IO_CAPS
#define BLE_SEC_PARAM_IO_CAPS 1
#endif

// <q> BLE_SEC_PARAM_KEYPRESS - Enable keypress notifications.

#ifndef BLE_SEC_PARAM_KEYPRESS
#define BLE_SEC_PARAM_KEYPRESS 0
#endif

// <q> BLE_SEC_PARAM_LESC - Enable LE Secure Connection.

#ifndef BLE_SEC_PARAM_LESC
#define BLE_SEC_PARAM_LESC 0
#endif

// <o> BLE_SEC_PARAM_MAX_KEY_SIZE - Maximum size of a security key.

// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
#ifndef BLE_SEC_PARAM_MAX_KEY_SIZE
#define BLE_SEC_PARAM_MAX_KEY_SIZE 16
#endif

// <o> BLE_SEC_PARAM_MIN_KEY_SIZE - Minimum size of a security key.

// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
#ifndef BLE_SEC_PARAM_MIN_KEY_SIZE
#define BLE_SEC_PARAM_MIN_KEY_SIZE 7
#endif

// <q> BLE_SEC_PARAM_MITM - Enable Man In The Middle protection.

#ifndef BLE_SEC_PARAM_MITM
#define BLE_SEC_PARAM_MITM 0
#endif

// <q> BLE_SEC_PARAM_OOB - Enable OOB.

#ifndef BLE_SEC_PARAM_OOB
#define BLE_SEC_PARAM_OOB 0
#endif

// </h>
// <o> BOND_DEVICE_MAX - Maximum number of paired devices.

#ifndef BOND_DEVICE_MAX
#define BOND_DEVICE_MAX 10
#endif

// <h> Bootloader
//==========================================================
#ifndef Bootloader
#define Bootloader 
#endif

// <o> DFU_LED_CONFIG_PROGRESS_BLINK_MS - Active and Inactive period of LED blinking when DFU progress is ongoing.

#ifndef DFU_LED_CONFIG_PROGRESS_BLINK_MS
#define DFU_LED_CONFIG_PROGRESS_BLINK_MS 100
#endif

// <o> DFU_LED_CONFIG_TRANSPORT_ACTIVE_BREATH_MS - Active and Inactive period (in milliseconds) of LED breathing when DFU transport is active (e.g. BLE connected).

#ifndef DFU_LED_CONFIG_TRANSPORT_ACTIVE_BREATH_MS
#define DFU_LED_CONFIG_TRANSPORT_ACTIVE_BREATH_MS 300
#endif

// <o> DFU_LED_CONFIG_TRANSPORT_INACTIVE_BREATH_MS - Active and Inactive period (in milliseconds) of LED breathing when DFU transport is inactive (e.g. BLE disconnected).

#ifndef DFU_LED_CONFIG_TRANSPORT_INACTIVE_BREATH_MS
#define DFU_LED_CONFIG_TRANSPORT_INACTIVE_BREATH_MS 600
#endif

// </h>
// <o> BPWR_CHANNEL_NUM - Channel number assigned to BPWR profile.

#ifndef BPWR_CHANNEL_NUM
#define BPWR_CHANNEL_NUM 0
#endif

// <o> BROADCAST_CHANNEL_NUMBER - Broadcast channel number.

#ifndef BROADCAST_CHANNEL_NUMBER
#define BROADCAST_CHANNEL_NUMBER 0
#endif

// <o> BSC_CHANNEL_NUM - Channel number assigned to BSC profile.

#ifndef BSC_CHANNEL_NUM
#define BSC_CHANNEL_NUM 0
#endif

// <o> CACHE_TIMEOUT_S - Max duration cached messages will be saved.

#ifndef CACHE_TIMEOUT_S
#define CACHE_TIMEOUT_S 10
#endif

// <o> CALIBRATION_DATA - Calibration data.

#ifndef CALIBRATION_DATA
#define CALIBRATION_DATA 21930
#endif

// <o> CHAN_ID_DEV_NUM - Channel ID: Device Number.

#ifndef CHAN_ID_DEV_NUM
#define CHAN_ID_DEV_NUM 0
#endif

// <o> CHAN_ID_DEV_TYPE - Channel ID: Device Type.

#ifndef CHAN_ID_DEV_TYPE
#define CHAN_ID_DEV_TYPE 2
#endif

// <o> CHAN_ID_TRANS_TYPE - Channel ID: Transmission type.

#ifndef CHAN_ID_TRANS_TYPE
#define CHAN_ID_TRANS_TYPE 1
#endif

// <o> CHAN_PERIOD - Channel Period (in 32 kHz counts).

#ifndef CHAN_PERIOD
#define CHAN_PERIOD 8192
#endif

// <h> CHANNEL
//==========================================================
#ifndef CHANNEL
#define CHANNEL 
#endif

// <o> CH0_CHAN_ID_DEV_TYPE - Channel ID: Device Type.

#ifndef CH0_CHAN_ID_DEV_TYPE
#define CH0_CHAN_ID_DEV_TYPE 2
#endif

// <o> CH0_CHAN_ID_TRANS_TYPE - Channel ID: Transmission type.

#ifndef CH0_CHAN_ID_TRANS_TYPE
#define CH0_CHAN_ID_TRANS_TYPE 1
#endif

// <o> CH0_CHAN_PERIOD - Channel Period (in 32 kHz counts).

#ifndef CH0_CHAN_PERIOD
#define CH0_CHAN_PERIOD 8192
#endif

// <o> CH0_RF_FREQ - Channel RF Frequency.

#ifndef CH0_RF_FREQ
#define CH0_RF_FREQ 50
#endif

// <o> CH1_CHAN_ID_DEV_TYPE - Channel 1 ID: Device Type.

#ifndef CH1_CHAN_ID_DEV_TYPE
#define CH1_CHAN_ID_DEV_TYPE 3
#endif

// <o> CH1_CHAN_ID_TRANS_TYPE - Channel 1 ID: Transmission type.

#ifndef CH1_CHAN_ID_TRANS_TYPE
#define CH1_CHAN_ID_TRANS_TYPE 1
#endif

// <o> CH1_CHAN_PERIOD - Channel 1 Period (in 32 kHz counts).

#ifndef CH1_CHAN_PERIOD
#define CH1_CHAN_PERIOD 8192
#endif

// <o> CH1_RF_FREQ - Channel 1 RF Frequency.

#ifndef CH1_RF_FREQ
#define CH1_RF_FREQ 70
#endif

// </h>
// <o> CLI_EXAMPLE_LOG_QUEUE_SIZE - CLI log queue size

#ifndef CLI_EXAMPLE_LOG_QUEUE_SIZE
#define CLI_EXAMPLE_LOG_QUEUE_SIZE 20
#endif

// <o> CLI_LOG_QUEUE_SIZE - Command line interface log queue size.

#ifndef CLI_LOG_QUEUE_SIZE
#define CLI_LOG_QUEUE_SIZE 6
#endif

// <o> CLI_MAX_CMD_LEN - Command max length.

#ifndef CLI_MAX_CMD_LEN
#define CLI_MAX_CMD_LEN 21
#endif

// <q> CLI_RTT_ENABLE - Enable CLI RTT backend.

#ifndef CLI_RTT_ENABLE
#define CLI_RTT_ENABLE 0
#endif

// <o> CLIENT_DEV_TYPE - Beacon device type.

#ifndef CLIENT_DEV_TYPE
#define CLIENT_DEV_TYPE 416
#endif

// <o> CLIENT_MANUF_ID - Beacon manufacturer ID.

#ifndef CLIENT_MANUF_ID
#define CLIENT_MANUF_ID 2
#endif

// <o> CLIENT_SERIAL_NUMBER - Serial number of client device.

#ifndef CLIENT_SERIAL_NUMBER
#define CLIENT_SERIAL_NUMBER 12345
#endif

// <o> CONFIG_DEVICE_SHORT_ADDRESS - Device short address

#ifndef CONFIG_DEVICE_SHORT_ADDRESS
#define CONFIG_DEVICE_SHORT_ADDRESS 10
#endif

// <o> CONFIG_OTHER_ADDRESS - Peer device short address

#ifndef CONFIG_OTHER_ADDRESS
#define CONFIG_OTHER_ADDRESS 11
#endif

// <q> CONFIGURE_AS_SLAVE - Configure channel as a slave.

#ifndef CONFIGURE_AS_SLAVE
#define CONFIGURE_AS_SLAVE 0
#endif

// <o> CONN_SUP_TIMEOUT_MSEC - Connection supervisory time-out in milliseconds

#ifndef CONN_SUP_TIMEOUT_MSEC
#define CONN_SUP_TIMEOUT_MSEC "Nordic_GATTS"
#endif

// <o> CONNECTION_SLAVE_LATENCY - Slave latency in terms of connection events.

#ifndef CONNECTION_SLAVE_LATENCY
#define CONNECTION_SLAVE_LATENCY 5
#endif

// <o> CONNECTION_SUPERVISION_TIMEOUT - Supervision timeout in units of 10 milliseconds.

#ifndef CONNECTION_SUPERVISION_TIMEOUT
#define CONNECTION_SUPERVISION_TIMEOUT "Nordic_ble_interactive"
#endif

// <e> DEBUG_CHANNEL_INCLUDED
//==========================================================
#ifndef DEBUG_CHANNEL_INCLUDED
#define DEBUG_CHANNEL_INCLUDED 0
#endif

// <o> DEBUG_ANT_OBSERVER_PRIO - Application debug event observer priority.

#ifndef DEBUG_ANT_OBSERVER_PRIO
#define DEBUG_ANT_OBSERVER_PRIO 1
#endif

// <o> DEBUG_CHAN_ID_DEV_TYPE - Channel ID: Device Type.

#ifndef DEBUG_CHAN_ID_DEV_TYPE
#define DEBUG_CHAN_ID_DEV_TYPE 8
#endif

// <o> DEBUG_CHAN_ID_TRANS_TYPE - Channel ID: Transmission type.

#ifndef DEBUG_CHAN_ID_TRANS_TYPE
#define DEBUG_CHAN_ID_TRANS_TYPE 1
#endif

// <o> DEBUG_CHAN_PERIOD - Channel Period (in 32 kHz counts).

#ifndef DEBUG_CHAN_PERIOD
#define DEBUG_CHAN_PERIOD 8192
#endif

// <o> DEBUG_CHANNEL_NUMBER - Used debug channel number.

#ifndef DEBUG_CHANNEL_NUMBER
#define DEBUG_CHANNEL_NUMBER 1
#endif

// <o> DEBUG_RF_FREQ - RF Frequency.

#ifndef DEBUG_RF_FREQ
#define DEBUG_RF_FREQ 66
#endif

// </e>
// <o> DEVICE_NAME_MAX_SIZE - Max device name length.

#ifndef DEVICE_NAME_MAX_SIZE
#define DEVICE_NAME_MAX_SIZE 20
#endif

// <o> DEVICE_TO_FIND_MAX - Maximum number of devices that will be found during the scan.

#ifndef DEVICE_TO_FIND_MAX
#define DEVICE_TO_FIND_MAX 20
#endif

// <o> DISPLAY_TYPE - Type of received data

// <121=> Combined
// <122=> Cadence
// <123=> Speed
#ifndef DISPLAY_TYPE
#define DISPLAY_TYPE 121
#endif

// <o> GATT_DATA_WRITE_SIZE - Maximum size of GATT data to write.

#ifndef GATT_DATA_WRITE_SIZE
#define GATT_DATA_WRITE_SIZE 20
#endif

// <e> GZLL_PA_LNA_CONTROL
//==========================================================
#ifndef GZLL_PA_LNA_CONTROL
#define GZLL_PA_LNA_CONTROL 0
#endif

// <h> pa_lna_control_pins
//==========================================================
#ifndef pa_lna_control_pins
#define pa_lna_control_pins 
#endif

// <o> GZLL_PA_LNA_ANT_SEL_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef GZLL_PA_LNA_ANT_SEL_PIN
#define GZLL_PA_LNA_ANT_SEL_PIN 23
#endif

// <o> GZLL_PA_LNA_CHL_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef GZLL_PA_LNA_CHL_PIN
#define GZLL_PA_LNA_CHL_PIN 21
#endif

// <o> GZLL_PA_LNA_CPS_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef GZLL_PA_LNA_CPS_PIN
#define GZLL_PA_LNA_CPS_PIN 22
#endif

// <o> GZLL_PA_LNA_CRX_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef GZLL_PA_LNA_CRX_PIN
#define GZLL_PA_LNA_CRX_PIN 2
#endif

// <o> GZLL_PA_LNA_CSD_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef GZLL_PA_LNA_CSD_PIN
#define GZLL_PA_LNA_CSD_PIN 24
#endif

// <o> GZLL_PA_LNA_CTX_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef GZLL_PA_LNA_CTX_PIN
#define GZLL_PA_LNA_CTX_PIN 27
#endif

// </h>
// <h> pa_lna_hw_resources
//==========================================================
#ifndef pa_lna_hw_resources
#define pa_lna_hw_resources 
#endif

// <o> GZLL_PA_LNA_PPI_CHAN_1 - PPI channel used for PA/LNA control.

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
#ifndef GZLL_PA_LNA_PPI_CHAN_1
#define GZLL_PA_LNA_PPI_CHAN_1 12
#endif

// <o> GZLL_PA_LNA_PPI_CHAN_2 - PPI channel used for PA/LNA control.

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
#ifndef GZLL_PA_LNA_PPI_CHAN_2
#define GZLL_PA_LNA_PPI_CHAN_2 13
#endif

// <o> GZLL_PA_LNA_PPI_CHAN_3 - PPI channel used for PA/LNA control.

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
#ifndef GZLL_PA_LNA_PPI_CHAN_3
#define GZLL_PA_LNA_PPI_CHAN_3 14
#endif

// <o> GZLL_PA_LNA_PPI_CHAN_4 - PPI channel used for PA/LNA control.

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
#ifndef GZLL_PA_LNA_PPI_CHAN_4
#define GZLL_PA_LNA_PPI_CHAN_4 15
#endif

// <o> GZLL_PA_LNA_RX_GPIOTE_CHAN - GPIOTE channel used to control RX pin.

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef GZLL_PA_LNA_RX_GPIOTE_CHAN
#define GZLL_PA_LNA_RX_GPIOTE_CHAN 1
#endif

// <o> GZLL_PA_LNA_TIMER_NUM - Timer used for PA/LNA control.

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
#ifndef GZLL_PA_LNA_TIMER_NUM
#define GZLL_PA_LNA_TIMER_NUM 3
#endif

// <o> GZLL_PA_LNA_TX_GPIOTE_CHAN - GPIOTE channel used to control TX pin.

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef GZLL_PA_LNA_TX_GPIOTE_CHAN
#define GZLL_PA_LNA_TX_GPIOTE_CHAN 0
#endif

// </h>
// <h> pa_lna_settings
//==========================================================
#ifndef pa_lna_settings
#define pa_lna_settings 
#endif

// <q> GZLL_LNA_ACTIVE_HIGH - Flag indicating if LNA is active on high pin state.

#ifndef GZLL_LNA_ACTIVE_HIGH
#define GZLL_LNA_ACTIVE_HIGH 0
#endif

// <q> GZLL_LNA_ENABLED - Flag indicating if LNA control pin is used.

#ifndef GZLL_LNA_ENABLED
#define GZLL_LNA_ENABLED 0
#endif

// <q> GZLL_PA_ACTIVE_HIGH - Flag indicating if PA is active on high pin state.

#ifndef GZLL_PA_ACTIVE_HIGH
#define GZLL_PA_ACTIVE_HIGH 0
#endif

// <q> GZLL_PA_ENABLED - Flag indicating if PA control pin is used.

#ifndef GZLL_PA_ENABLED
#define GZLL_PA_ENABLED 0
#endif

// <o> GZLL_PA_LNA_RAMP_UP_TIME - Front End Module ramp up time [us]. 0-129

#ifndef GZLL_PA_LNA_RAMP_UP_TIME
#define GZLL_PA_LNA_RAMP_UP_TIME 1
#endif

// </h>
// </e>
// <q> GZLL_TX_STATISTICS - Turns on transmission statistics gathering.

#ifndef GZLL_TX_STATISTICS
#define GZLL_TX_STATISTICS 0
#endif

// <o> HOME_ID - Unique ID for the entire network.

#ifndef HOME_ID
#define HOME_ID 4660
#endif

// <o> HRM_CHANNEL_NUM - Channel number assigned to HRM profile.

#ifndef HRM_CHANNEL_NUM
#define HRM_CHANNEL_NUM 0
#endif

// <o> I2S_SDIN_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef I2S_SDIN_PIN
#define I2S_SDIN_PIN 26
#endif

// <o> I2S_SDOUT_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef I2S_SDOUT_PIN
#define I2S_SDOUT_PIN 27
#endif

// <o> LED_INVERT_PERIOD - Time between LED changes (in 32 kHz counts).

#ifndef LED_INVERT_PERIOD
#define LED_INVERT_PERIOD 21845
#endif

// <o> LESC_DEBUG_MODE - Set to 1 to use LESC debug keys, allows you to use a sniffer to inspect traffic.

#ifndef LESC_DEBUG_MODE
#define LESC_DEBUG_MODE 0
#endif

// <h> MANUFACTURER_IDENTIFICATION_COMMON_PAGE
//==========================================================
#ifndef MANUFACTURER_IDENTIFICATION_COMMON_PAGE
#define MANUFACTURER_IDENTIFICATION_COMMON_PAGE 
#endif

// <o> BPWR_HW_REVISION - Hardware revision for manufacturer's identification common page

#ifndef BPWR_HW_REVISION
#define BPWR_HW_REVISION 127
#endif

// <o> BPWR_MANUFACTURER_ID - Manufacturer ID for manufacturer's identification common page

#ifndef BPWR_MANUFACTURER_ID
#define BPWR_MANUFACTURER_ID 43690
#endif

// <o> BPWR_MODEL_NUMBER - Model number for manufacturer's identification common page

#ifndef BPWR_MODEL_NUMBER
#define BPWR_MODEL_NUMBER 21845
#endif

// <o> SDM_HW_REVISION - Hardware revision for manufacturer's identification common page

#ifndef SDM_HW_REVISION
#define SDM_HW_REVISION 127
#endif

// <o> SDM_MANUFACTURER_ID - Manufacturer ID for manufacturer's identification common page

#ifndef SDM_MANUFACTURER_ID
#define SDM_MANUFACTURER_ID 43690
#endif

// <o> SDM_MODEL_NUMBER - Model number for manufacturer's identification common page

#ifndef SDM_MODEL_NUMBER
#define SDM_MODEL_NUMBER 21845
#endif

// </h>
// <o> MAX_CACHE_SIZE - Max size of the received message buffer.

#ifndef MAX_CACHE_SIZE
#define MAX_CACHE_SIZE 255
#endif

// <o> MAX_CHARACTERISTIC_COUNT - Maximum count of characteristics to find.

#ifndef MAX_CHARACTERISTIC_COUNT
#define MAX_CHARACTERISTIC_COUNT 6
#endif

// <o> MAX_CONN_INTERVAL_MSEC - Maximum connection interval in milliseconds

#ifndef MAX_CONN_INTERVAL_MSEC
#define MAX_CONN_INTERVAL_MSEC 200
#endif

// <o> MAX_NDEF_RECORDS - Maximal number of NDEF records that can be stored in NDEF message descriptor.

#ifndef MAX_NDEF_RECORDS
#define MAX_NDEF_RECORDS 10
#endif

// <o> MAX_SERVICE_COUNT - Maximum count of services to find.

#ifndef MAX_SERVICE_COUNT
#define MAX_SERVICE_COUNT 6
#endif

// <o> MAX_TLV_BLOCKS - Maximal number of TLV blocks that can be stored in Type 2/4 Tag descriptor.

#ifndef MAX_TLV_BLOCKS
#define MAX_TLV_BLOCKS 10
#endif

// <o> MAXIMUM_CONNECTION_INTERVAL - Maximum connection interval in milliseconds.

#ifndef MAXIMUM_CONNECTION_INTERVAL
#define MAXIMUM_CONNECTION_INTERVAL 500
#endif

// <e> MEM_WRITE_LOG_ENABLED
//==========================================================
#ifndef MEM_WRITE_LOG_ENABLED
#define MEM_WRITE_LOG_ENABLED 0
#endif

// <o> MEM_WRITE_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef MEM_WRITE_DEBUG_COLOR
#define MEM_WRITE_DEBUG_COLOR 0
#endif

// <o> MEM_WRITE_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef MEM_WRITE_INFO_COLOR
#define MEM_WRITE_INFO_COLOR 0
#endif

// <o> MEM_WRITE_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef MEM_WRITE_LOG_LEVEL
#define MEM_WRITE_LOG_LEVEL 3
#endif

// </e>
// <o> MIN_CONN_INTERVAL_MSEC - Minimum connection interval in milliseconds

#ifndef MIN_CONN_INTERVAL_MSEC
#define MIN_CONN_INTERVAL_MSEC 100
#endif

// <o> MINIMUM_CONNECTION_INTERVAL - Minimum connection interval in milliseconds.

#ifndef MINIMUM_CONNECTION_INTERVAL
#define MINIMUM_CONNECTION_INTERVAL 100
#endif

// <h> MOBILE
//==========================================================
#ifndef MOBILE
#define MOBILE 
#endif

// <o> ANT_MOBILE_CHANNEL_NUMBER - Mobile ANT channel number.

#ifndef ANT_MOBILE_CHANNEL_NUMBER
#define ANT_MOBILE_CHANNEL_NUMBER 0
#endif

// <o> MOBILE_CHAN_ID_DEV_TYPE - Mobile Channel ID: Device Type.

#ifndef MOBILE_CHAN_ID_DEV_TYPE
#define MOBILE_CHAN_ID_DEV_TYPE 2
#endif

// <o> MOBILE_CHAN_ID_TRANS_TYPE - Mobile Channel ID: Transmission type.

#ifndef MOBILE_CHAN_ID_TRANS_TYPE
#define MOBILE_CHAN_ID_TRANS_TYPE 5
#endif

// <o> MOBILE_CHAN_PERIOD - Mobile Channel Period (in 32 kHz counts).

#ifndef MOBILE_CHAN_PERIOD
#define MOBILE_CHAN_PERIOD 8192
#endif

// <o> MOBILE_RF_FREQ - Mobile RF Frequency.

#ifndef MOBILE_RF_FREQ
#define MOBILE_RF_FREQ 77
#endif

// </h>
// <o> MODIFICATION_TYPE - Type of sensor values update

// <i> It can be updated by buttons or periodically rise and fall in auto mode
// <0=> MODIFICATION_TYPE_BUTTON
// <1=> MODIFICATION_TYPE_AUTO
#ifndef MODIFICATION_TYPE
#define MODIFICATION_TYPE 0
#endif

// <o> MODULATED_TRANSMISSION_TEST_MODE - Modulated transmission test mode type.

#ifndef MODULATED_TRANSMISSION_TEST_MODE
#define MODULATED_TRANSMISSION_TEST_MODE 1
#endif

// <o> NDEF_FILE_SIZE - NDEF file maximal size.

#ifndef NDEF_FILE_SIZE
#define NDEF_FILE_SIZE 1024
#endif

// <h> NFC_BLE_PAIR_LIB_SECURITY_PARAMETERS
//==========================================================
#ifndef NFC_BLE_PAIR_LIB_SECURITY_PARAMETERS
#define NFC_BLE_PAIR_LIB_SECURITY_PARAMETERS 
#endif

// <e> BLE_NFC_SEC_PARAM_BOND
//==========================================================
#ifndef BLE_NFC_SEC_PARAM_BOND
#define BLE_NFC_SEC_PARAM_BOND 0
#endif

// <q> BLE_NFC_SEC_PARAM_KDIST_OWN_ENC - Enables Long Term Key and Master Identification distribution by device.

#ifndef BLE_NFC_SEC_PARAM_KDIST_OWN_ENC
#define BLE_NFC_SEC_PARAM_KDIST_OWN_ENC 0
#endif

// <q> BLE_NFC_SEC_PARAM_KDIST_OWN_ID - Enables Identity Resolving Key and Identity Address Information distribution by device.

#ifndef BLE_NFC_SEC_PARAM_KDIST_OWN_ID
#define BLE_NFC_SEC_PARAM_KDIST_OWN_ID 0
#endif

// <q> BLE_NFC_SEC_PARAM_KDIST_PEER_ENC - Enables Long Term Key and Master Identification distribution by peer.

#ifndef BLE_NFC_SEC_PARAM_KDIST_PEER_ENC
#define BLE_NFC_SEC_PARAM_KDIST_PEER_ENC 0
#endif

// <q> BLE_NFC_SEC_PARAM_KDIST_PEER_ID - Enables Identity Resolving Key and Identity Address Information distribution by peer.

#ifndef BLE_NFC_SEC_PARAM_KDIST_PEER_ID
#define BLE_NFC_SEC_PARAM_KDIST_PEER_ID 0
#endif

// </e>
// <o> BLE_NFC_SEC_PARAM_IO_CAPABILITIES - No I/O capabilities.

// <3=> BLE_GAP_IO_CAPS_NONE
#ifndef BLE_NFC_SEC_PARAM_IO_CAPABILITIES
#define BLE_NFC_SEC_PARAM_IO_CAPABILITIES 3
#endif

// <o> BLE_NFC_SEC_PARAM_KEYPRESS - Keypress notifications not enabled.

// <0=> 
#ifndef BLE_NFC_SEC_PARAM_KEYPRESS
#define BLE_NFC_SEC_PARAM_KEYPRESS 0
#endif

// <q> BLE_NFC_SEC_PARAM_LESC - Enables LE Secure Connections.

#ifndef BLE_NFC_SEC_PARAM_LESC
#define BLE_NFC_SEC_PARAM_LESC 0
#endif

// <o> BLE_NFC_SEC_PARAM_MAX_KEY_SIZE - Maximal size of a security key.

// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
#ifndef BLE_NFC_SEC_PARAM_MAX_KEY_SIZE
#define BLE_NFC_SEC_PARAM_MAX_KEY_SIZE 16
#endif

// <o> BLE_NFC_SEC_PARAM_MIN_KEY_SIZE - Minimal size of a security key.

// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
#ifndef BLE_NFC_SEC_PARAM_MIN_KEY_SIZE
#define BLE_NFC_SEC_PARAM_MIN_KEY_SIZE 7
#endif

// <q> BLE_NFC_SEC_PARAM_MITM - Enables Man In The Middle protection.

#ifndef BLE_NFC_SEC_PARAM_MITM
#define BLE_NFC_SEC_PARAM_MITM 0
#endif

// <q> BLE_NFC_SEC_PARAM_OOB - Enables Out Of Band pairing data.

#ifndef BLE_NFC_SEC_PARAM_OOB
#define BLE_NFC_SEC_PARAM_OOB 0
#endif

// </h>
// <e> NFC_PAIR_LIB_M_LOG_ENABLED
//==========================================================
#ifndef NFC_PAIR_LIB_M_LOG_ENABLED
#define NFC_PAIR_LIB_M_LOG_ENABLED 0
#endif

// <o> NFC_PAIR_LIB_M_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_PAIR_LIB_M_DEBUG_COLOR
#define NFC_PAIR_LIB_M_DEBUG_COLOR 0
#endif

// <o> NFC_PAIR_LIB_M_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_PAIR_LIB_M_INFO_COLOR
#define NFC_PAIR_LIB_M_INFO_COLOR 0
#endif

// <o> NFC_PAIR_LIB_M_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NFC_PAIR_LIB_M_LOG_LEVEL
#define NFC_PAIR_LIB_M_LOG_LEVEL 3
#endif

// </e>
// <o> NFC_PAIRING_MODE - Type of NFC pairing

// <0=> NFC_PAIRING_MODE_JUST_WORKS
// <1=> NFC_PAIRING_MODE_OOB
// <2=> NFC_PAIRING_MODE_LESC_JUST_WORKS
// <3=> NFC_PAIRING_MODE_LESC_OOB
// <4=> NFC_PAIRING_MODE_GENERIC_OOB
#ifndef NFC_PAIRING_MODE
#define NFC_PAIRING_MODE 4
#endif

// <o> NFC_RX_BUFF_SIZE - NFC RX buffer size.

#ifndef NFC_RX_BUFF_SIZE
#define NFC_RX_BUFF_SIZE 1024
#endif

// <o> NFC_TX_BUFF_SIZE - NFC TX buffer size.

#ifndef NFC_TX_BUFF_SIZE
#define NFC_TX_BUFF_SIZE 1024
#endif

// <o> NRF_BLE_GQ_QUEUE_SIZE - Queue size for BLE GATT Queue module.

#ifndef NRF_BLE_GQ_QUEUE_SIZE
#define NRF_BLE_GQ_QUEUE_SIZE 4
#endif

// <o> PRIVATE_ADDRESS_INTERVAL - Time in seconds after which the device address is changed if privacy is used.

#ifndef PRIVATE_ADDRESS_INTERVAL
#define PRIVATE_ADDRESS_INTERVAL 30
#endif

// <h> PRODUCT_INFORMATION
//==========================================================
#ifndef PRODUCT_INFORMATION
#define PRODUCT_INFORMATION 
#endif

// <o> BSC_HW_VERSION - Hardware revision

#ifndef BSC_HW_VERSION
#define BSC_HW_VERSION 5
#endif

// <o> BSC_MF_ID - Manufacturer ID

#ifndef BSC_MF_ID
#define BSC_MF_ID 2
#endif

// <o> BSC_MODEL_NUMBER - Model number

#ifndef BSC_MODEL_NUMBER
#define BSC_MODEL_NUMBER 2
#endif

// <o> BSC_SERIAL_NUMBER - Serial number

#ifndef BSC_SERIAL_NUMBER
#define BSC_SERIAL_NUMBER 43981
#endif

// <o> BSC_SW_VERSION - Software version number

#ifndef BSC_SW_VERSION
#define BSC_SW_VERSION 0
#endif

// <o> HRM_HW_VERSION - Hardware revision

#ifndef HRM_HW_VERSION
#define HRM_HW_VERSION 5
#endif

// <o> HRM_MFG_ID - Manufacturer ID

#ifndef HRM_MFG_ID
#define HRM_MFG_ID 2
#endif

// <o> HRM_MODEL_NUMBER - Model number

#ifndef HRM_MODEL_NUMBER
#define HRM_MODEL_NUMBER 2
#endif

// <o> HRM_SERIAL_NUMBER - Serial number

#ifndef HRM_SERIAL_NUMBER
#define HRM_SERIAL_NUMBER 43981
#endif

// <o> HRM_SW_VERSION - Software version number

#ifndef HRM_SW_VERSION
#define HRM_SW_VERSION 0
#endif

// </h>
// <h> PRODUCT_INFORMATION_COMMON_PAGE
//==========================================================
#ifndef PRODUCT_INFORMATION_COMMON_PAGE
#define PRODUCT_INFORMATION_COMMON_PAGE 
#endif

// <o> BPWR_SERIAL_NUMBER - Serial number for product information common page

#ifndef BPWR_SERIAL_NUMBER
#define BPWR_SERIAL_NUMBER 12345678
#endif

// <o> BPWR_SW_REVISION_MAJOR - Software revision major number for product information common page

#ifndef BPWR_SW_REVISION_MAJOR
#define BPWR_SW_REVISION_MAJOR 170
#endif

// <o> BPWR_SW_REVISION_MINOR - Software revision minor number for product information common page, unused value

#ifndef BPWR_SW_REVISION_MINOR
#define BPWR_SW_REVISION_MINOR 255
#endif

// <o> SDM_SERIAL_NUMBER - Serial number for product information common page

#ifndef SDM_SERIAL_NUMBER
#define SDM_SERIAL_NUMBER 1234567
#endif

// <o> SDM_SW_REVISION_MAJOR - Software revision major number for product information common page

#ifndef SDM_SW_REVISION_MAJOR
#define SDM_SW_REVISION_MAJOR 170
#endif

// <o> SDM_SW_REVISION_MINOR - Software revision minor number for product information common page, unused value

#ifndef SDM_SW_REVISION_MINOR
#define SDM_SW_REVISION_MINOR 255
#endif

// </h>
// <o> RADIO_FREQ_OFFSET - Radio frequency offset from 2400MHz for continuous wave mode.

#ifndef RADIO_FREQ_OFFSET
#define RADIO_FREQ_OFFSET 10
#endif

// <h> RELAY
//==========================================================
#ifndef RELAY
#define RELAY 
#endif

// <o> ANT_RELAY_MASTER_CHANNEL_NUMBER - Relay master ANT channel number.

#ifndef ANT_RELAY_MASTER_CHANNEL_NUMBER
#define ANT_RELAY_MASTER_CHANNEL_NUMBER 1
#endif

// <o> ANT_RELAY_SLAVE_CHANNEL_NUMBER - Relay slave ANT channel number.

#ifndef ANT_RELAY_SLAVE_CHANNEL_NUMBER
#define ANT_RELAY_SLAVE_CHANNEL_NUMBER 2
#endif

// <o> RELAY_CHAN_ID_DEV_TYPE - Relay Channel ID: Device Type.

#ifndef RELAY_CHAN_ID_DEV_TYPE
#define RELAY_CHAN_ID_DEV_TYPE 1
#endif

// <o> RELAY_CHAN_ID_TRANS_TYPE - Relay Channel ID: Transmission type.

#ifndef RELAY_CHAN_ID_TRANS_TYPE
#define RELAY_CHAN_ID_TRANS_TYPE 5
#endif

// <o> RELAY_CHAN_PERIOD - Relay Channel Period (in 32 kHz counts).

#ifndef RELAY_CHAN_PERIOD
#define RELAY_CHAN_PERIOD 8192
#endif

// <o> RELAY_RF_FREQ - Relay RF Frequency.

#ifndef RELAY_RF_FREQ
#define RELAY_RF_FREQ 72
#endif

// </h>
// <o> RELAY_PROXIMITY_BIN - Proximity bin for slave side of relay channel.

#ifndef RELAY_PROXIMITY_BIN
#define RELAY_PROXIMITY_BIN 1
#endif

// <o> RF_FREQ - RF Frequency.

#ifndef RF_FREQ
#define RF_FREQ 66
#endif

// <o> RF_FREQUENCY_A - RF Frequency.

#ifndef RF_FREQUENCY_A
#define RF_FREQUENCY_A 3
#endif

// <o> RF_FREQUENCY_B - RF Frequency.

#ifndef RF_FREQUENCY_B
#define RF_FREQUENCY_B 39
#endif

// <o> RF_FREQUENCY_C - RF Frequency.

#ifndef RF_FREQUENCY_C
#define RF_FREQUENCY_C 75
#endif

// <o> SCAN_INTERVAL - Scanning interval, determines scan interval in units of 0.625 millisecond.

#ifndef SCAN_INTERVAL
#define SCAN_INTERVAL 160
#endif

// <o> SCAN_LIST_REFRESH_INTERVAL - Time after which the device scan list will be cleaned and refreshed.

#ifndef SCAN_LIST_REFRESH_INTERVAL
#define SCAN_LIST_REFRESH_INTERVAL 10000
#endif

// <o> SCAN_WINDOW - Scanning window, determines scan window in units of 0.625 millisecond.

#ifndef SCAN_WINDOW
#define SCAN_WINDOW 80
#endif

// <o> SDM_CHANNEL_NUM - Channel number assigned to SDM profile.

#ifndef SDM_CHANNEL_NUM
#define SDM_CHANNEL_NUM 0
#endif

// <o> SEARCH_CYCLES - Search sharing cycles. Set to one to search across multiple frequencies.

#ifndef SEARCH_CYCLES
#define SEARCH_CYCLES 1
#endif

// <o> SEARCH_TIMEOUT - Search timeout.

#ifndef SEARCH_TIMEOUT
#define SEARCH_TIMEOUT 12
#endif

// <q> SEC_PARAM_BOND - Perform bonding

#ifndef SEC_PARAM_BOND
#define SEC_PARAM_BOND 0
#endif

// <o> SEC_PARAM_IO_CAPABILITIES - I/O capabilities

// <0=> BLE_GAP_IO_CAPS_DISPLAY_ONLY
// <1=> BLE_GAP_IO_CAPS_DISPLAY_YESNO
// <2=> BLE_GAP_IO_CAPS_KEYBOARD_ONLY
// <3=> BLE_GAP_IO_CAPS_NONE
// <4=> BLE_GAP_IO_CAPS_KEYBOARD_DISPLAY
#ifndef SEC_PARAM_IO_CAPABILITIES
#define SEC_PARAM_IO_CAPABILITIES 3
#endif

// <o> SEC_PARAM_MAX_KEY_SIZE - Maximum encryption key size in octets between SEC_PARAM_MIN_KEY_SIZE and 16. 0-16

#ifndef SEC_PARAM_MAX_KEY_SIZE
#define SEC_PARAM_MAX_KEY_SIZE 16
#endif

// <o> SEC_PARAM_MIN_KEY_SIZE - Minimum encryption key size in octets between 7 and 16. If then not applicable in this instance. 0-16

#ifndef SEC_PARAM_MIN_KEY_SIZE
#define SEC_PARAM_MIN_KEY_SIZE 7
#endif

// <q> SEC_PARAM_MITM - Man In The Middle protection required or not

#ifndef SEC_PARAM_MITM
#define SEC_PARAM_MITM 0
#endif

// <q> SEC_PARAM_OOB - Out Of Band data not available or not

#ifndef SEC_PARAM_OOB
#define SEC_PARAM_OOB 0
#endif

// <o> SECURITY_LEVEL_THR - Security level threshold to enable HRS notifications.

// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
#ifndef SECURITY_LEVEL_THR
#define SECURITY_LEVEL_THR 4
#endif

// <o> SENSOR_TYPE - Type of transmitted data

// <0=> Power
// <1=> Wheel
// <2=> Crank
#ifndef SENSOR_TYPE
#define SENSOR_TYPE 0
#endif

// <h> SIMULATOR
//==========================================================
#ifndef SIMULATOR
#define SIMULATOR 
#endif

// <o> SIMULATOR_BURN_RATE - Calories burn rate

#ifndef SIMULATOR_BURN_RATE
#define SIMULATOR_BURN_RATE 62
#endif

// <o> SIMULATOR_INCR - Heart rate increment

#ifndef SIMULATOR_INCR
#define SIMULATOR_INCR 2
#endif

// <o> SIMULATOR_MAX - Maximal heart rate

#ifndef SIMULATOR_MAX
#define SIMULATOR_MAX 200
#endif

// <o> SIMULATOR_MIN - Minimal heart rate

#ifndef SIMULATOR_MIN
#define SIMULATOR_MIN 60
#endif

// <o> SIMULATOR_STRIDE_LEN - Length of one stride

#ifndef SIMULATOR_STRIDE_LEN
#define SIMULATOR_STRIDE_LEN 75
#endif

// </h>
// <o> SLAVE_LATENCY - Slave Latency in number of connection intervals

#ifndef SLAVE_LATENCY
#define SLAVE_LATENCY 0
#endif

// <h> SPI_CONFIGURATION
//==========================================================
#ifndef SPI_CONFIGURATION
#define SPI_CONFIGURATION 
#endif

// <o> SPI_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef SPI_IRQ_PRIORITY
#define SPI_IRQ_PRIORITY 6
#endif

// <o> SPI_MISO_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef SPI_MISO_PIN
#define SPI_MISO_PIN 30
#endif

// <o> SPI_MOSI_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef SPI_MOSI_PIN
#define SPI_MOSI_PIN 29
#endif

// <o> SPI_SCK_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef SPI_SCK_PIN
#define SPI_SCK_PIN 26
#endif

// <o> SPI_SS_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef SPI_SS_PIN
#define SPI_SS_PIN 31
#endif

// </h>
// <h> SPIS_CONFIGURATION
//==========================================================
#ifndef SPIS_CONFIGURATION
#define SPIS_CONFIGURATION 
#endif

// <o> APP_SPIS_CS_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef APP_SPIS_CS_PIN
#define APP_SPIS_CS_PIN 31
#endif

// <o> APP_SPIS_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef APP_SPIS_IRQ_PRIORITY
#define APP_SPIS_IRQ_PRIORITY 6
#endif

// <o> APP_SPIS_MISO_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef APP_SPIS_MISO_PIN
#define APP_SPIS_MISO_PIN 30
#endif

// <o> APP_SPIS_MOSI_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef APP_SPIS_MOSI_PIN
#define APP_SPIS_MOSI_PIN 29
#endif

// <o> APP_SPIS_SCK_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef APP_SPIS_SCK_PIN
#define APP_SPIS_SCK_PIN 26
#endif

// </h>
// <o> TAG_AFTER_FIELD_OFF_DELAY - Time delay in ms after turning off NFC field.

#ifndef TAG_AFTER_FIELD_OFF_DELAY
#define TAG_AFTER_FIELD_OFF_DELAY 5000
#endif

// <o> TAG_AFTER_READ_DELAY - Delay (in ms) after Tag read.

#ifndef TAG_AFTER_READ_DELAY
#define TAG_AFTER_READ_DELAY 2000
#endif

// <o> TAG_DETECT_TIMEOUT - Timeout (in ms) for function which searches for a Tag.

#ifndef TAG_DETECT_TIMEOUT
#define TAG_DETECT_TIMEOUT 5000
#endif

// <o> TAG_TYPE_2_DATA_BUFFER_SIZE - Buffer size for data from a Type 2 Tag Platform.

#ifndef TAG_TYPE_2_DATA_BUFFER_SIZE
#define TAG_TYPE_2_DATA_BUFFER_SIZE 1024
#endif

// <o> TEST_SUITE_EXECUTION_COUNT - Number of times the all testvector should be run for this test.

#ifndef TEST_SUITE_EXECUTION_COUNT
#define TEST_SUITE_EXECUTION_COUNT 1
#endif

// <o> UART_RX_BUFF_SIZE - UART RX buffer size.

#ifndef UART_RX_BUFF_SIZE
#define UART_RX_BUFF_SIZE 1024
#endif

// <o> UART_TX_BUFF_SIZE - UART TX buffer size.

#ifndef UART_TX_BUFF_SIZE
#define UART_TX_BUFF_SIZE 1024
#endif

// </h>
// <h> Board
//==========================================================
#ifndef Board
#define Board 
#endif

// <e> BSP_BTN_ANT_ENABLED
//==========================================================
#ifndef BSP_BTN_ANT_ENABLED
#define BSP_BTN_ANT_ENABLED 0
#endif

// <o> BSP_BTN_ANT_CONFIG_SLEEP_BTN_ID - Sleep button ID.

#ifndef BSP_BTN_ANT_CONFIG_SLEEP_BTN_ID
#define BSP_BTN_ANT_CONFIG_SLEEP_BTN_ID 3
#endif

// <o> BSP_BTN_ANT_CONFIG_WAKEUP_BTN_ID - Wakeup button ID.

#ifndef BSP_BTN_ANT_CONFIG_WAKEUP_BTN_ID
#define BSP_BTN_ANT_CONFIG_WAKEUP_BTN_ID 3
#endif

// </e>
// <q> BSP_BTN_BLE_ENABLED - bsp_btn_ble - Button Control for BLE

#ifndef BSP_BTN_BLE_ENABLED
#define BSP_BTN_BLE_ENABLED 0
#endif

// <h> nrf_dfu_trigger_usb
//==========================================================
#ifndef nrf_dfu_trigger_usb
#define nrf_dfu_trigger_usb 
#endif

// <o> NRF_DFU_TRIGGER_USB_INTERFACE_NUM - The USB interface to use for the DFU Trigger library. 0-255

// <i> gaps. Tailor this value to adhere to this limitation.
#ifndef NRF_DFU_TRIGGER_USB_INTERFACE_NUM
#define NRF_DFU_TRIGGER_USB_INTERFACE_NUM 2
#endif

// <q> NRF_DFU_TRIGGER_USB_USB_SHARED - Flag indicating whether USB is used for other purposes in the application.

#ifndef NRF_DFU_TRIGGER_USB_USB_SHARED
#define NRF_DFU_TRIGGER_USB_USB_SHARED 0
#endif

// </h>
// </h>
// <h> lwIP
//==========================================================
#ifndef lwIP
#define lwIP 
#endif

// <e> NRF_LWIP_DRIVER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_LWIP_DRIVER_CONFIG_LOG_ENABLED
#define NRF_LWIP_DRIVER_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_LWIP_DRIVER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LWIP_DRIVER_CONFIG_DEBUG_COLOR
#define NRF_LWIP_DRIVER_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_LWIP_DRIVER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LWIP_DRIVER_CONFIG_INFO_COLOR
#define NRF_LWIP_DRIVER_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_LWIP_DRIVER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_LWIP_DRIVER_CONFIG_LOG_LEVEL
#define NRF_LWIP_DRIVER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </h>
// <h> nRF_ANT
//==========================================================
#ifndef nRF_ANT
#define nRF_ANT 
#endif

// <e> ANT_BPWR_ENABLED
//==========================================================
#ifndef ANT_BPWR_ENABLED
#define ANT_BPWR_ENABLED 0
#endif

// <e> ANT_BPWR_COMMON_LOG_ENABLED
//==========================================================
#ifndef ANT_BPWR_COMMON_LOG_ENABLED
#define ANT_BPWR_COMMON_LOG_ENABLED 0
#endif

// <o> ANT_BPWR_COMMON_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BPWR_COMMON_INFO_COLOR
#define ANT_BPWR_COMMON_INFO_COLOR 0
#endif

// <o> ANT_BPWR_COMMON_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BPWR_COMMON_LOG_LEVEL
#define ANT_BPWR_COMMON_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BPWR_LOG_ENABLED
//==========================================================
#ifndef ANT_BPWR_LOG_ENABLED
#define ANT_BPWR_LOG_ENABLED 0
#endif

// <o> ANT_BPWR_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BPWR_INFO_COLOR
#define ANT_BPWR_INFO_COLOR 0
#endif

// <o> ANT_BPWR_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BPWR_LOG_LEVEL
#define ANT_BPWR_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BPWR_PAGE_16_LOG_ENABLED
//==========================================================
#ifndef ANT_BPWR_PAGE_16_LOG_ENABLED
#define ANT_BPWR_PAGE_16_LOG_ENABLED 0
#endif

// <o> ANT_BPWR_PAGE_16_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BPWR_PAGE_16_INFO_COLOR
#define ANT_BPWR_PAGE_16_INFO_COLOR 0
#endif

// <o> ANT_BPWR_PAGE_16_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BPWR_PAGE_16_LOG_LEVEL
#define ANT_BPWR_PAGE_16_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BPWR_PAGE_17_LOG_ENABLED
//==========================================================
#ifndef ANT_BPWR_PAGE_17_LOG_ENABLED
#define ANT_BPWR_PAGE_17_LOG_ENABLED 0
#endif

// <o> ANT_BPWR_PAGE_17_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BPWR_PAGE_17_INFO_COLOR
#define ANT_BPWR_PAGE_17_INFO_COLOR 0
#endif

// <o> ANT_BPWR_PAGE_17_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BPWR_PAGE_17_LOG_LEVEL
#define ANT_BPWR_PAGE_17_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BPWR_PAGE_18_LOG_ENABLED
//==========================================================
#ifndef ANT_BPWR_PAGE_18_LOG_ENABLED
#define ANT_BPWR_PAGE_18_LOG_ENABLED 0
#endif

// <o> ANT_BPWR_PAGE_18_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BPWR_PAGE_18_INFO_COLOR
#define ANT_BPWR_PAGE_18_INFO_COLOR 0
#endif

// <o> ANT_BPWR_PAGE_18_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BPWR_PAGE_18_LOG_LEVEL
#define ANT_BPWR_PAGE_18_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BPWR_PAGE_1_LOG_ENABLED
//==========================================================
#ifndef ANT_BPWR_PAGE_1_LOG_ENABLED
#define ANT_BPWR_PAGE_1_LOG_ENABLED 0
#endif

// <o> ANT_BPWR_PAGE_1_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BPWR_PAGE_1_INFO_COLOR
#define ANT_BPWR_PAGE_1_INFO_COLOR 0
#endif

// <o> ANT_BPWR_PAGE_1_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BPWR_PAGE_1_LOG_LEVEL
#define ANT_BPWR_PAGE_1_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BPWR_PAGE_TORQUE_LOG_ENABLED
//==========================================================
#ifndef ANT_BPWR_PAGE_TORQUE_LOG_ENABLED
#define ANT_BPWR_PAGE_TORQUE_LOG_ENABLED 0
#endif

// <o> ANT_BPWR_PAGE_TORQUE_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BPWR_PAGE_TORQUE_INFO_COLOR
#define ANT_BPWR_PAGE_TORQUE_INFO_COLOR 0
#endif

// <o> ANT_BPWR_PAGE_TORQUE_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BPWR_PAGE_TORQUE_LOG_LEVEL
#define ANT_BPWR_PAGE_TORQUE_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> ANT_BSC_ENABLED
//==========================================================
#ifndef ANT_BSC_ENABLED
#define ANT_BSC_ENABLED 0
#endif

// <e> ANT_BSC_COMBINED_PAGE_0_LOG_ENABLED
//==========================================================
#ifndef ANT_BSC_COMBINED_PAGE_0_LOG_ENABLED
#define ANT_BSC_COMBINED_PAGE_0_LOG_ENABLED 0
#endif

// <o> ANT_BSC_COMBINED_PAGE_0_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BSC_COMBINED_PAGE_0_INFO_COLOR
#define ANT_BSC_COMBINED_PAGE_0_INFO_COLOR 0
#endif

// <o> ANT_BSC_COMBINED_PAGE_0_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BSC_COMBINED_PAGE_0_LOG_LEVEL
#define ANT_BSC_COMBINED_PAGE_0_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BSC_LOG_ENABLED
//==========================================================
#ifndef ANT_BSC_LOG_ENABLED
#define ANT_BSC_LOG_ENABLED 0
#endif

// <o> ANT_BSC_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BSC_INFO_COLOR
#define ANT_BSC_INFO_COLOR 0
#endif

// <o> ANT_BSC_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BSC_LOG_LEVEL
#define ANT_BSC_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BSC_PAGE_0_LOG_ENABLED
//==========================================================
#ifndef ANT_BSC_PAGE_0_LOG_ENABLED
#define ANT_BSC_PAGE_0_LOG_ENABLED 0
#endif

// <o> ANT_BSC_PAGE_0_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BSC_PAGE_0_INFO_COLOR
#define ANT_BSC_PAGE_0_INFO_COLOR 0
#endif

// <o> ANT_BSC_PAGE_0_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BSC_PAGE_0_LOG_LEVEL
#define ANT_BSC_PAGE_0_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BSC_PAGE_1_LOG_ENABLED
//==========================================================
#ifndef ANT_BSC_PAGE_1_LOG_ENABLED
#define ANT_BSC_PAGE_1_LOG_ENABLED 0
#endif

// <o> ANT_BSC_PAGE_1_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BSC_PAGE_1_INFO_COLOR
#define ANT_BSC_PAGE_1_INFO_COLOR 0
#endif

// <o> ANT_BSC_PAGE_1_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BSC_PAGE_1_LOG_LEVEL
#define ANT_BSC_PAGE_1_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BSC_PAGE_2_LOG_ENABLED
//==========================================================
#ifndef ANT_BSC_PAGE_2_LOG_ENABLED
#define ANT_BSC_PAGE_2_LOG_ENABLED 0
#endif

// <o> ANT_BSC_PAGE_2_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BSC_PAGE_2_INFO_COLOR
#define ANT_BSC_PAGE_2_INFO_COLOR 0
#endif

// <o> ANT_BSC_PAGE_2_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BSC_PAGE_2_LOG_LEVEL
#define ANT_BSC_PAGE_2_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BSC_PAGE_3_LOG_ENABLED
//==========================================================
#ifndef ANT_BSC_PAGE_3_LOG_ENABLED
#define ANT_BSC_PAGE_3_LOG_ENABLED 0
#endif

// <o> ANT_BSC_PAGE_3_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BSC_PAGE_3_INFO_COLOR
#define ANT_BSC_PAGE_3_INFO_COLOR 0
#endif

// <o> ANT_BSC_PAGE_3_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BSC_PAGE_3_LOG_LEVEL
#define ANT_BSC_PAGE_3_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BSC_PAGE_4_LOG_ENABLED
//==========================================================
#ifndef ANT_BSC_PAGE_4_LOG_ENABLED
#define ANT_BSC_PAGE_4_LOG_ENABLED 0
#endif

// <o> ANT_BSC_PAGE_4_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BSC_PAGE_4_INFO_COLOR
#define ANT_BSC_PAGE_4_INFO_COLOR 0
#endif

// <o> ANT_BSC_PAGE_4_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BSC_PAGE_4_LOG_LEVEL
#define ANT_BSC_PAGE_4_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_BSC_PAGE_5_LOG_ENABLED
//==========================================================
#ifndef ANT_BSC_PAGE_5_LOG_ENABLED
#define ANT_BSC_PAGE_5_LOG_ENABLED 0
#endif

// <o> ANT_BSC_PAGE_5_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_BSC_PAGE_5_INFO_COLOR
#define ANT_BSC_PAGE_5_INFO_COLOR 0
#endif

// <o> ANT_BSC_PAGE_5_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_BSC_PAGE_5_LOG_LEVEL
#define ANT_BSC_PAGE_5_LOG_LEVEL 3
#endif

// </e>
// </e>
// <q> ANT_CHANNEL_CONFIG_ENABLED - ant_channel_config - ANT common channel configuration

#ifndef ANT_CHANNEL_CONFIG_ENABLED
#define ANT_CHANNEL_CONFIG_ENABLED 0
#endif

// <e> ANT_COMMON_PAGE_70_ENABLED
//==========================================================
#ifndef ANT_COMMON_PAGE_70_ENABLED
#define ANT_COMMON_PAGE_70_ENABLED 0
#endif

// <e> ANT_COMMON_PAGE_70_LOG_ENABLED
//==========================================================
#ifndef ANT_COMMON_PAGE_70_LOG_ENABLED
#define ANT_COMMON_PAGE_70_LOG_ENABLED 0
#endif

// <o> ANT_COMMON_PAGE_70_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_COMMON_PAGE_70_INFO_COLOR
#define ANT_COMMON_PAGE_70_INFO_COLOR 0
#endif

// <o> ANT_COMMON_PAGE_70_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_COMMON_PAGE_70_LOG_LEVEL
#define ANT_COMMON_PAGE_70_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> ANT_COMMON_PAGE_80_ENABLED
//==========================================================
#ifndef ANT_COMMON_PAGE_80_ENABLED
#define ANT_COMMON_PAGE_80_ENABLED 0
#endif

// <e> ANT_COMMON_PAGE_80_LOG_ENABLED
//==========================================================
#ifndef ANT_COMMON_PAGE_80_LOG_ENABLED
#define ANT_COMMON_PAGE_80_LOG_ENABLED 0
#endif

// <o> ANT_COMMON_PAGE_80_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_COMMON_PAGE_80_INFO_COLOR
#define ANT_COMMON_PAGE_80_INFO_COLOR 0
#endif

// <o> ANT_COMMON_PAGE_80_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_COMMON_PAGE_80_LOG_LEVEL
#define ANT_COMMON_PAGE_80_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> ANT_COMMON_PAGE_81_ENABLED
//==========================================================
#ifndef ANT_COMMON_PAGE_81_ENABLED
#define ANT_COMMON_PAGE_81_ENABLED 0
#endif

// <e> ANT_COMMON_PAGE_81_LOG_ENABLED
//==========================================================
#ifndef ANT_COMMON_PAGE_81_LOG_ENABLED
#define ANT_COMMON_PAGE_81_LOG_ENABLED 0
#endif

// <o> ANT_COMMON_PAGE_81_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_COMMON_PAGE_81_INFO_COLOR
#define ANT_COMMON_PAGE_81_INFO_COLOR 0
#endif

// <o> ANT_COMMON_PAGE_81_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_COMMON_PAGE_81_LOG_LEVEL
#define ANT_COMMON_PAGE_81_LOG_LEVEL 3
#endif

// </e>
// </e>
// <q> ANT_ENCRYPT_CONFIG_ENABLED - ant_encrypt_config - Cryptographic ANT stack configuration

#ifndef ANT_ENCRYPT_CONFIG_ENABLED
#define ANT_ENCRYPT_CONFIG_ENABLED 0
#endif

// <q> ANT_ENCRYPT_NEGOTIATION_SLAVE_ENABLED - ant_encrypt_negotiation_slave - Encryption negotiation for encrypted ANT slave channels

#ifndef ANT_ENCRYPT_NEGOTIATION_SLAVE_ENABLED
#define ANT_ENCRYPT_NEGOTIATION_SLAVE_ENABLED 0
#endif

// <e> ANT_HRM_ENABLED
//==========================================================
#ifndef ANT_HRM_ENABLED
#define ANT_HRM_ENABLED 0
#endif

// <e> ANT_HRM_LOG_ENABLED
//==========================================================
#ifndef ANT_HRM_LOG_ENABLED
#define ANT_HRM_LOG_ENABLED 0
#endif

// <o> ANT_HRM_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_HRM_INFO_COLOR
#define ANT_HRM_INFO_COLOR 0
#endif

// <o> ANT_HRM_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_HRM_LOG_LEVEL
#define ANT_HRM_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_HRM_PAGE_0_LOG_ENABLED
//==========================================================
#ifndef ANT_HRM_PAGE_0_LOG_ENABLED
#define ANT_HRM_PAGE_0_LOG_ENABLED 0
#endif

// <o> ANT_HRM_PAGE_0_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_HRM_PAGE_0_INFO_COLOR
#define ANT_HRM_PAGE_0_INFO_COLOR 0
#endif

// <o> ANT_HRM_PAGE_0_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_HRM_PAGE_0_LOG_LEVEL
#define ANT_HRM_PAGE_0_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_HRM_PAGE_1_LOG_ENABLED
//==========================================================
#ifndef ANT_HRM_PAGE_1_LOG_ENABLED
#define ANT_HRM_PAGE_1_LOG_ENABLED 0
#endif

// <o> ANT_HRM_PAGE_1_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_HRM_PAGE_1_INFO_COLOR
#define ANT_HRM_PAGE_1_INFO_COLOR 0
#endif

// <o> ANT_HRM_PAGE_1_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_HRM_PAGE_1_LOG_LEVEL
#define ANT_HRM_PAGE_1_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_HRM_PAGE_2_LOG_ENABLED
//==========================================================
#ifndef ANT_HRM_PAGE_2_LOG_ENABLED
#define ANT_HRM_PAGE_2_LOG_ENABLED 0
#endif

// <o> ANT_HRM_PAGE_2_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_HRM_PAGE_2_INFO_COLOR
#define ANT_HRM_PAGE_2_INFO_COLOR 0
#endif

// <o> ANT_HRM_PAGE_2_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_HRM_PAGE_2_LOG_LEVEL
#define ANT_HRM_PAGE_2_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_HRM_PAGE_3_LOG_ENABLED
//==========================================================
#ifndef ANT_HRM_PAGE_3_LOG_ENABLED
#define ANT_HRM_PAGE_3_LOG_ENABLED 0
#endif

// <o> ANT_HRM_PAGE_3_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_HRM_PAGE_3_INFO_COLOR
#define ANT_HRM_PAGE_3_INFO_COLOR 0
#endif

// <o> ANT_HRM_PAGE_3_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_HRM_PAGE_3_LOG_LEVEL
#define ANT_HRM_PAGE_3_LOG_LEVEL 3
#endif

// </e>
// <e> ANT_HRM_PAGE_4_LOG_ENABLED
//==========================================================
#ifndef ANT_HRM_PAGE_4_LOG_ENABLED
#define ANT_HRM_PAGE_4_LOG_ENABLED 0
#endif

// <o> ANT_HRM_PAGE_4_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_HRM_PAGE_4_INFO_COLOR
#define ANT_HRM_PAGE_4_INFO_COLOR 0
#endif

// <o> ANT_HRM_PAGE_4_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_HRM_PAGE_4_LOG_LEVEL
#define ANT_HRM_PAGE_4_LOG_LEVEL 3
#endif

// </e>
// </e>
// <q> ANT_KEY_MANAGER_ENABLED - ant_key_manager - Software Component

#ifndef ANT_KEY_MANAGER_ENABLED
#define ANT_KEY_MANAGER_ENABLED 0
#endif

// <q> ANT_REQUEST_CONTROLLER_ENABLED - ant_request_controller - ANT+ request controller

#ifndef ANT_REQUEST_CONTROLLER_ENABLED
#define ANT_REQUEST_CONTROLLER_ENABLED 0
#endif

// <e> ANT_SDM_ENABLED
//==========================================================
#ifndef ANT_SDM_ENABLED
#define ANT_SDM_ENABLED 0
#endif

// <e> ANT_SDM_LOG_ENABLED
//==========================================================
#ifndef ANT_SDM_LOG_ENABLED
#define ANT_SDM_LOG_ENABLED 0
#endif

// <o> ANT_SDM_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ANT_SDM_INFO_COLOR
#define ANT_SDM_INFO_COLOR 0
#endif

// <o> ANT_SDM_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ANT_SDM_LOG_LEVEL
#define ANT_SDM_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> ANT_SEARCH_CONFIG_ENABLED
//==========================================================
#ifndef ANT_SEARCH_CONFIG_ENABLED
#define ANT_SEARCH_CONFIG_ENABLED 0
#endif

// <o> ANT_DEFAULT_HIGH_PRIORITY_TIMEOUT - Default high priority search time-out. 0-255

#ifndef ANT_DEFAULT_HIGH_PRIORITY_TIMEOUT
#define ANT_DEFAULT_HIGH_PRIORITY_TIMEOUT 10
#endif

// <o> ANT_DEFAULT_LOW_PRIORITY_TIMEOUT - Default low priority search time-out. 0-255

#ifndef ANT_DEFAULT_LOW_PRIORITY_TIMEOUT
#define ANT_DEFAULT_LOW_PRIORITY_TIMEOUT 2
#endif

// </e>
// <e> ANT_STATE_INDICATOR_ENABLED
//==========================================================
#ifndef ANT_STATE_INDICATOR_ENABLED
#define ANT_STATE_INDICATOR_ENABLED 0
#endif

// <o> ANT_STATE_INDICATOR_CONFIG_SHUTDOWN_HANDLER_PRIORITY - Shutdown observer priority.

#ifndef ANT_STATE_INDICATOR_CONFIG_SHUTDOWN_HANDLER_PRIORITY
#define ANT_STATE_INDICATOR_CONFIG_SHUTDOWN_HANDLER_PRIORITY 1
#endif

// </e>
// <e> ANTFS_ENABLED
//==========================================================
#ifndef ANTFS_ENABLED
#define ANTFS_ENABLED 0
#endif

// <q> ANTFS_CONFIG_AUTH_TYPE_PAIRING_ENABLED - Use pairing and key exchange authentication.

#ifndef ANTFS_CONFIG_AUTH_TYPE_PAIRING_ENABLED
#define ANTFS_CONFIG_AUTH_TYPE_PAIRING_ENABLED 0
#endif

// <q> ANTFS_CONFIG_AUTH_TYPE_PASSKEY_ENABLED - Use passkey authentication.

#ifndef ANTFS_CONFIG_AUTH_TYPE_PASSKEY_ENABLED
#define ANTFS_CONFIG_AUTH_TYPE_PASSKEY_ENABLED 0
#endif

// <q> ANTFS_CONFIG_AUTH_TYPE_PASSTHROUGH_ENABLED - Allow host to bypass authentication.

#ifndef ANTFS_CONFIG_AUTH_TYPE_PASSTHROUGH_ENABLED
#define ANTFS_CONFIG_AUTH_TYPE_PASSTHROUGH_ENABLED 0
#endif

// <o> ANTFS_CONFIG_BEACON_STATUS_PERIOD - ANT-FS Beacon Message Period.

// <0=> 0.5
// <1=> 1
// <2=> 2
// <3=> 4
// <4=> 8
#ifndef ANTFS_CONFIG_BEACON_STATUS_PERIOD
#define ANTFS_CONFIG_BEACON_STATUS_PERIOD 3
#endif

// <o> ANTFS_CONFIG_CHANNEL_NUMBER - ANT-FS channel number.

#ifndef ANTFS_CONFIG_CHANNEL_NUMBER
#define ANTFS_CONFIG_CHANNEL_NUMBER 0
#endif

// <o> ANTFS_CONFIG_CUSTOM_TRANSMIT_POWER - ANT Custom Transmit Power.

#ifndef ANTFS_CONFIG_CUSTOM_TRANSMIT_POWER
#define ANTFS_CONFIG_CUSTOM_TRANSMIT_POWER 0
#endif

// <q> ANTFS_CONFIG_DEBUG_LED_ENABLED - Enables LED debug in the module.

#ifndef ANTFS_CONFIG_DEBUG_LED_ENABLED
#define ANTFS_CONFIG_DEBUG_LED_ENABLED 0
#endif

// <o> ANTFS_CONFIG_DEVICE_TYPE - ANT device type for channel configuration.

#ifndef ANTFS_CONFIG_DEVICE_TYPE
#define ANTFS_CONFIG_DEVICE_TYPE 1
#endif

// <o> ANTFS_CONFIG_LINK_COMMAND_TIMEOUT - Command timeout - how long the client will wait without receiving any commands before switching to the link layer, in seconds.

#ifndef ANTFS_CONFIG_LINK_COMMAND_TIMEOUT
#define ANTFS_CONFIG_LINK_COMMAND_TIMEOUT 10
#endif

// <o> ANTFS_CONFIG_NETWORK_NUMBER - ANT-FS network number.

#ifndef ANTFS_CONFIG_NETWORK_NUMBER
#define ANTFS_CONFIG_NETWORK_NUMBER 0
#endif

// <o> ANTFS_CONFIG_PAIRING_TIMEOUT - Pairing timeout - how long the UI will wait for a response to a pairing request before switching to the link layer, in seconds.

#ifndef ANTFS_CONFIG_PAIRING_TIMEOUT
#define ANTFS_CONFIG_PAIRING_TIMEOUT 120
#endif

// <o> ANTFS_CONFIG_TRANS_TYPE - ANT-FS Transmission Type.

#ifndef ANTFS_CONFIG_TRANS_TYPE
#define ANTFS_CONFIG_TRANS_TYPE 10
#endif

// <o> ANTFS_CONFIG_TRANSMIT_POWER - ANT Transmit Power.

// <0=> Lowest
// <1=> ANT
// <2=> ANT
// <3=> ANT
// <4=> ANT
// <128=> Custom
#ifndef ANTFS_CONFIG_TRANSMIT_POWER
#define ANTFS_CONFIG_TRANSMIT_POWER 3
#endif

// <q> ANTFS_CONFIG_UPLOAD_ENABLED - Support upload operation.

#ifndef ANTFS_CONFIG_UPLOAD_ENABLED
#define ANTFS_CONFIG_UPLOAD_ENABLED 0
#endif

// </e>
// </h>
// <h> nRF_BLE
//==========================================================
#ifndef nRF_BLE
#define nRF_BLE 
#endif

// <q> BLE_ADVERTISING_ENABLED - ble_advertising - Advertising module

#ifndef BLE_ADVERTISING_ENABLED
#define BLE_ADVERTISING_ENABLED 0
#endif

// <q> BLE_DB_DISCOVERY_ENABLED - ble_db_discovery - Database discovery module

#ifndef BLE_DB_DISCOVERY_ENABLED
#define BLE_DB_DISCOVERY_ENABLED 0
#endif

// <q> BLE_DTM_ENABLED - ble_dtm - Module for testing RF/PHY using DTM commands

#ifndef BLE_DTM_ENABLED
#define BLE_DTM_ENABLED 0
#endif

// <q> BLE_RACP_ENABLED - ble_racp - Record Access Control Point library

#ifndef BLE_RACP_ENABLED
#define BLE_RACP_ENABLED 0
#endif

// <e> NRF_BLE_CONN_PARAMS_ENABLED
//==========================================================
#ifndef NRF_BLE_CONN_PARAMS_ENABLED
#define NRF_BLE_CONN_PARAMS_ENABLED 0
#endif

// <o> NRF_BLE_CONN_PARAMS_MAX_SLAVE_LATENCY_DEVIATION - The largest acceptable deviation in slave latency.

// <i> The largest deviation (+ or -) from the requested slave latency that will not be renegotiated.
#ifndef NRF_BLE_CONN_PARAMS_MAX_SLAVE_LATENCY_DEVIATION
#define NRF_BLE_CONN_PARAMS_MAX_SLAVE_LATENCY_DEVIATION 499
#endif

// <o> NRF_BLE_CONN_PARAMS_MAX_SUPERVISION_TIMEOUT_DEVIATION - The largest acceptable deviation (in 10 ms units) in supervision timeout.

// <i> The largest deviation (+ or -, in 10 ms units) from the requested supervision timeout that will not be renegotiated.
#ifndef NRF_BLE_CONN_PARAMS_MAX_SUPERVISION_TIMEOUT_DEVIATION
#define NRF_BLE_CONN_PARAMS_MAX_SUPERVISION_TIMEOUT_DEVIATION 65535
#endif

// </e>
// <q> NRF_BLE_GATT_ENABLED - nrf_ble_gatt - GATT module

#ifndef NRF_BLE_GATT_ENABLED
#define NRF_BLE_GATT_ENABLED 0
#endif

// <e> NRF_BLE_GQ_ENABLED
//==========================================================
#ifndef NRF_BLE_GQ_ENABLED
#define NRF_BLE_GQ_ENABLED 0
#endif

// <o> NRF_BLE_GQ_DATAPOOL_ELEMENT_COUNT - Default number of elements in the pool of memory objects.

#ifndef NRF_BLE_GQ_DATAPOOL_ELEMENT_COUNT
#define NRF_BLE_GQ_DATAPOOL_ELEMENT_COUNT 8
#endif

// <o> NRF_BLE_GQ_DATAPOOL_ELEMENT_SIZE - Default size of a single element in the pool of memory objects.

#ifndef NRF_BLE_GQ_DATAPOOL_ELEMENT_SIZE
#define NRF_BLE_GQ_DATAPOOL_ELEMENT_SIZE 20
#endif

// <o> NRF_BLE_GQ_GATTC_WRITE_MAX_DATA_LEN - Maximal size of the data inside GATTC write request (in bytes).

#ifndef NRF_BLE_GQ_GATTC_WRITE_MAX_DATA_LEN
#define NRF_BLE_GQ_GATTC_WRITE_MAX_DATA_LEN 16
#endif

// <o> NRF_BLE_GQ_GATTS_HVX_MAX_DATA_LEN - Maximal size of the data inside GATTC notification or indication request (in bytes).

#ifndef NRF_BLE_GQ_GATTS_HVX_MAX_DATA_LEN
#define NRF_BLE_GQ_GATTS_HVX_MAX_DATA_LEN 16
#endif

// </e>
// <q> NRF_BLE_LESC_ENABLED - nrf_ble_lesc - Le Secure Connection

#ifndef NRF_BLE_LESC_ENABLED
#define NRF_BLE_LESC_ENABLED 0
#endif

// <e> NRF_BLE_QWR_ENABLED
//==========================================================
#ifndef NRF_BLE_QWR_ENABLED
#define NRF_BLE_QWR_ENABLED 0
#endif

// <o> NRF_BLE_QWR_MAX_ATTR - Maximum number of attribute handles that can be registered. This number must be adjusted according to the number of attributes for which Queued Writes will be enabled. If it is zero, the module will reject all Queued Write requests.

#ifndef NRF_BLE_QWR_MAX_ATTR
#define NRF_BLE_QWR_MAX_ATTR 0
#endif

// </e>
// <e> NRF_BLE_SCAN_ENABLED
//==========================================================
#ifndef NRF_BLE_SCAN_ENABLED
#define NRF_BLE_SCAN_ENABLED 0
#endif

// <o> NRF_BLE_SCAN_BUFFER - Data length for an advertising set.

#ifndef NRF_BLE_SCAN_BUFFER
#define NRF_BLE_SCAN_BUFFER 31
#endif

// <e> NRF_BLE_SCAN_FILTER_ENABLE
//==========================================================
#ifndef NRF_BLE_SCAN_FILTER_ENABLE
#define NRF_BLE_SCAN_FILTER_ENABLE 0
#endif

// <o> NRF_BLE_SCAN_ADDRESS_CNT - Number of address filters.

#ifndef NRF_BLE_SCAN_ADDRESS_CNT
#define NRF_BLE_SCAN_ADDRESS_CNT 0
#endif

// <o> NRF_BLE_SCAN_APPEARANCE_CNT - Number of appearance filters.

#ifndef NRF_BLE_SCAN_APPEARANCE_CNT
#define NRF_BLE_SCAN_APPEARANCE_CNT 0
#endif

// <o> NRF_BLE_SCAN_NAME_CNT - Number of name filters.

#ifndef NRF_BLE_SCAN_NAME_CNT
#define NRF_BLE_SCAN_NAME_CNT 1
#endif

// <o> NRF_BLE_SCAN_SHORT_NAME_CNT - Number of short name filters.

#ifndef NRF_BLE_SCAN_SHORT_NAME_CNT
#define NRF_BLE_SCAN_SHORT_NAME_CNT 0
#endif

// <o> NRF_BLE_SCAN_UUID_CNT - Number of filters for UUIDs.

#ifndef NRF_BLE_SCAN_UUID_CNT
#define NRF_BLE_SCAN_UUID_CNT 0
#endif

// </e>
// <o> NRF_BLE_SCAN_MAX_CONNECTION_INTERVAL - Determines maximum connection interval in milliseconds.

#ifndef NRF_BLE_SCAN_MAX_CONNECTION_INTERVAL
#define NRF_BLE_SCAN_MAX_CONNECTION_INTERVAL 30
#endif

// <o> NRF_BLE_SCAN_MIN_CONNECTION_INTERVAL - Determines minimum connection interval in milliseconds.

#ifndef NRF_BLE_SCAN_MIN_CONNECTION_INTERVAL
#define NRF_BLE_SCAN_MIN_CONNECTION_INTERVAL 7.5
#endif

// <o> NRF_BLE_SCAN_NAME_MAX_LEN - Maximum size for the name to search in the advertisement report.

#ifndef NRF_BLE_SCAN_NAME_MAX_LEN
#define NRF_BLE_SCAN_NAME_MAX_LEN 32
#endif

// <o> NRF_BLE_SCAN_SCAN_DURATION - Duration of a scanning session in units of 10 ms. Range: 0x0001 - 0xFFFF (10 ms to 10.9225 ms). If set to 0x0000, the scanning continues until it is explicitly disabled.

#ifndef NRF_BLE_SCAN_SCAN_DURATION
#define NRF_BLE_SCAN_SCAN_DURATION 0
#endif

// <o> NRF_BLE_SCAN_SCAN_INTERVAL - Scanning interval. Determines the scan interval in units of 0.625 millisecond.

#ifndef NRF_BLE_SCAN_SCAN_INTERVAL
#define NRF_BLE_SCAN_SCAN_INTERVAL 160
#endif

// <o> NRF_BLE_SCAN_SCAN_PHY - PHY to scan on.

// <0=> BLE_GAP_PHY_AUTO
// <1=> BLE_GAP_PHY_1MBPS
// <2=> BLE_GAP_PHY_2MBPS
// <4=> BLE_GAP_PHY_CODED
// <255=> BLE_GAP_PHY_NOT_SET
#ifndef NRF_BLE_SCAN_SCAN_PHY
#define NRF_BLE_SCAN_SCAN_PHY 1
#endif

// <o> NRF_BLE_SCAN_SCAN_WINDOW - Scanning window. Determines the scanning window in units of 0.625 millisecond.

#ifndef NRF_BLE_SCAN_SCAN_WINDOW
#define NRF_BLE_SCAN_SCAN_WINDOW 80
#endif

// <o> NRF_BLE_SCAN_SHORT_NAME_MAX_LEN - Maximum size of the short name to search for in the advertisement report.

#ifndef NRF_BLE_SCAN_SHORT_NAME_MAX_LEN
#define NRF_BLE_SCAN_SHORT_NAME_MAX_LEN 32
#endif

// <o> NRF_BLE_SCAN_SLAVE_LATENCY - Determines the slave latency in counts of connection events.

#ifndef NRF_BLE_SCAN_SLAVE_LATENCY
#define NRF_BLE_SCAN_SLAVE_LATENCY 0
#endif

// <o> NRF_BLE_SCAN_SUPERVISION_TIMEOUT - Determines the supervision time-out in units of 10 millisecond.

#ifndef NRF_BLE_SCAN_SUPERVISION_TIMEOUT
#define NRF_BLE_SCAN_SUPERVISION_TIMEOUT 4000
#endif

// </e>
// <e> PEER_MANAGER_ENABLED
//==========================================================
#ifndef PEER_MANAGER_ENABLED
#define PEER_MANAGER_ENABLED 0
#endif

// <q> PM_CENTRAL_ENABLED - Enable/disable central-specific Peer Manager functionality.

// <i> Enable/disable central-specific Peer Manager functionality.
#ifndef PM_CENTRAL_ENABLED
#define PM_CENTRAL_ENABLED 0
#endif

// <o> PM_FLASH_BUFFERS - Number of internal buffers for flash operations.

// <i> Decrease this value to lower RAM usage.
#ifndef PM_FLASH_BUFFERS
#define PM_FLASH_BUFFERS 4
#endif

// <o> PM_HANDLER_SEC_DELAY_MS - Delay before starting security.

// <i> This might be necessary for interoperability reasons, especially as peripheral.
#ifndef PM_HANDLER_SEC_DELAY_MS
#define PM_HANDLER_SEC_DELAY_MS 0
#endif

// <q> PM_LESC_ENABLED - Enable/disable LESC support in Peer Manager.

// <i> If set to true, you need to call nrf_ble_lesc_request_handler() in the main loop to respond to LESC-related BLE events. If LESC support is not required, set this to false to save code space.
#ifndef PM_LESC_ENABLED
#define PM_LESC_ENABLED 0
#endif

// <o> PM_MAX_REGISTRANTS - Number of event handlers that can be registered.

#ifndef PM_MAX_REGISTRANTS
#define PM_MAX_REGISTRANTS 3
#endif

// <q> PM_PEER_RANKS_ENABLED - Enable/disable the peer rank management in Peer Manager.

// <i> Set this to false to save code space if not using the peer rank API.
#ifndef PM_PEER_RANKS_ENABLED
#define PM_PEER_RANKS_ENABLED 0
#endif

// <e> PM_RA_PROTECTION_ENABLED
//==========================================================
#ifndef PM_RA_PROTECTION_ENABLED
#define PM_RA_PROTECTION_ENABLED 0
#endif

// <o> PM_RA_PROTECTION_MAX_WAIT_INTERVAL - Maximum waiting interval (in ms) before a new pairing attempt can be initiated.

#ifndef PM_RA_PROTECTION_MAX_WAIT_INTERVAL
#define PM_RA_PROTECTION_MAX_WAIT_INTERVAL 64000
#endif

// <o> PM_RA_PROTECTION_MIN_WAIT_INTERVAL - Minimum waiting interval (in ms) before a new pairing attempt can be initiated.

#ifndef PM_RA_PROTECTION_MIN_WAIT_INTERVAL
#define PM_RA_PROTECTION_MIN_WAIT_INTERVAL 4000
#endif

// <o> PM_RA_PROTECTION_REWARD_PERIOD - Reward period (in ms).

// <i> The waiting interval is gradually decreased when no new failed pairing attempts are made during reward period.
#ifndef PM_RA_PROTECTION_REWARD_PERIOD
#define PM_RA_PROTECTION_REWARD_PERIOD 10000
#endif

// <o> PM_RA_PROTECTION_TRACKED_PEERS_NUM - Maximum number of peers whose authorization status can be tracked.

#ifndef PM_RA_PROTECTION_TRACKED_PEERS_NUM
#define PM_RA_PROTECTION_TRACKED_PEERS_NUM 8
#endif

// </e>
// <q> PM_SERVICE_CHANGED_ENABLED - Enable/disable the service changed management for GATT server in Peer Manager.

// <i> disable this to save code space.
#ifndef PM_SERVICE_CHANGED_ENABLED
#define PM_SERVICE_CHANGED_ENABLED 0
#endif

// </e>
// </h>
// <h> nRF_BLE_Services
//==========================================================
#ifndef nRF_BLE_Services
#define nRF_BLE_Services 
#endif

// <q> BLE_ANCS_C_ENABLED - ble_ancs_c - Apple Notification Service Client

#ifndef BLE_ANCS_C_ENABLED
#define BLE_ANCS_C_ENABLED 0
#endif

// <q> BLE_ANS_C_ENABLED - ble_ans_c - Alert Notification Service Client

#ifndef BLE_ANS_C_ENABLED
#define BLE_ANS_C_ENABLED 0
#endif

// <q> BLE_BAS_C_ENABLED - ble_bas_c - Battery Service Client

#ifndef BLE_BAS_C_ENABLED
#define BLE_BAS_C_ENABLED 0
#endif

// <e> BLE_BAS_ENABLED
//==========================================================
#ifndef BLE_BAS_ENABLED
#define BLE_BAS_ENABLED 0
#endif

// <e> BLE_BAS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef BLE_BAS_CONFIG_LOG_ENABLED
#define BLE_BAS_CONFIG_LOG_ENABLED 0
#endif

// <o> BLE_BAS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef BLE_BAS_CONFIG_DEBUG_COLOR
#define BLE_BAS_CONFIG_DEBUG_COLOR 0
#endif

// <o> BLE_BAS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef BLE_BAS_CONFIG_INFO_COLOR
#define BLE_BAS_CONFIG_INFO_COLOR 0
#endif

// <o> BLE_BAS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef BLE_BAS_CONFIG_LOG_LEVEL
#define BLE_BAS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </e>
// <q> BLE_BPS_ENABLED - ble_bps - Blood Pressure Service

#ifndef BLE_BPS_ENABLED
#define BLE_BPS_ENABLED 0
#endif

// <q> BLE_CSCS_ENABLED - ble_cscs - Cycling Speed and Cadence Service

#ifndef BLE_CSCS_ENABLED
#define BLE_CSCS_ENABLED 0
#endif

// <q> BLE_CTS_C_ENABLED - ble_cts_c - Current Time Service Client

#ifndef BLE_CTS_C_ENABLED
#define BLE_CTS_C_ENABLED 0
#endif

// <q> BLE_DIS_C_ENABLED - ble_dis_c - Device Information Client

#ifndef BLE_DIS_C_ENABLED
#define BLE_DIS_C_ENABLED 0
#endif

// <q> BLE_DIS_ENABLED - ble_dis - Device Information Service

#ifndef BLE_DIS_ENABLED
#define BLE_DIS_ENABLED 0
#endif

// <q> BLE_ECS_ENABLED - nrf_ble_escs - Eddystone Configuration Service

#ifndef BLE_ECS_ENABLED
#define BLE_ECS_ENABLED 0
#endif

// <q> BLE_GLS_ENABLED - ble_gls - Glucose Service

#ifndef BLE_GLS_ENABLED
#define BLE_GLS_ENABLED 0
#endif

// <q> BLE_HIDS_ENABLED - ble_hids - Human Interface Device Service

#ifndef BLE_HIDS_ENABLED
#define BLE_HIDS_ENABLED 0
#endif

// <q> BLE_HRS_C_ENABLED - ble_hrs_c - Heart Rate Service Client

#ifndef BLE_HRS_C_ENABLED
#define BLE_HRS_C_ENABLED 0
#endif

// <q> BLE_HRS_ENABLED - ble_hrs - Heart Rate Service

#ifndef BLE_HRS_ENABLED
#define BLE_HRS_ENABLED 0
#endif

// <q> BLE_HTS_ENABLED - ble_hts - Health Thermometer Service

#ifndef BLE_HTS_ENABLED
#define BLE_HTS_ENABLED 0
#endif

// <q> BLE_IAS_C_ENABLED - ble_ias_c - Immediate Alert Service Client

#ifndef BLE_IAS_C_ENABLED
#define BLE_IAS_C_ENABLED 0
#endif

// <e> BLE_IAS_ENABLED
//==========================================================
#ifndef BLE_IAS_ENABLED
#define BLE_IAS_ENABLED 0
#endif

// <e> BLE_IAS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef BLE_IAS_CONFIG_LOG_ENABLED
#define BLE_IAS_CONFIG_LOG_ENABLED 0
#endif

// <o> BLE_IAS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef BLE_IAS_CONFIG_DEBUG_COLOR
#define BLE_IAS_CONFIG_DEBUG_COLOR 0
#endif

// <o> BLE_IAS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef BLE_IAS_CONFIG_INFO_COLOR
#define BLE_IAS_CONFIG_INFO_COLOR 0
#endif

// <o> BLE_IAS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef BLE_IAS_CONFIG_LOG_LEVEL
#define BLE_IAS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </e>
// <h> ble_ipsp
//==========================================================
#ifndef ble_ipsp
#define ble_ipsp 
#endif

// <q> BLE_IPSP_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef BLE_IPSP_DISABLE_API_PARAM_CHECK
#define BLE_IPSP_DISABLE_API_PARAM_CHECK 0
#endif

// <e> IOT_BLE_IPSP_CONFIG_LOG_ENABLED
//==========================================================
#ifndef IOT_BLE_IPSP_CONFIG_LOG_ENABLED
#define IOT_BLE_IPSP_CONFIG_LOG_ENABLED 0
#endif

// <o> IOT_BLE_IPSP_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_BLE_IPSP_CONFIG_DEBUG_COLOR
#define IOT_BLE_IPSP_CONFIG_DEBUG_COLOR 0
#endif

// <o> IOT_BLE_IPSP_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_BLE_IPSP_CONFIG_INFO_COLOR
#define IOT_BLE_IPSP_CONFIG_INFO_COLOR 0
#endif

// <o> IOT_BLE_IPSP_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef IOT_BLE_IPSP_CONFIG_LOG_LEVEL
#define IOT_BLE_IPSP_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </h>
// <q> BLE_LBS_C_ENABLED - ble_lbs_c - Nordic LED Button Service Client

#ifndef BLE_LBS_C_ENABLED
#define BLE_LBS_C_ENABLED 0
#endif

// <q> BLE_LBS_ENABLED - ble_lbs - LED Button Service

#ifndef BLE_LBS_ENABLED
#define BLE_LBS_ENABLED 0
#endif

// <q> BLE_LLS_ENABLED - ble_lls - Link Loss Service

#ifndef BLE_LLS_ENABLED
#define BLE_LLS_ENABLED 0
#endif

// <q> BLE_NUS_C_ENABLED - ble_nus_c - Nordic UART Central Service

#ifndef BLE_NUS_C_ENABLED
#define BLE_NUS_C_ENABLED 0
#endif

// <e> BLE_NUS_ENABLED
//==========================================================
#ifndef BLE_NUS_ENABLED
#define BLE_NUS_ENABLED 0
#endif

// <e> BLE_NUS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef BLE_NUS_CONFIG_LOG_ENABLED
#define BLE_NUS_CONFIG_LOG_ENABLED 0
#endif

// <o> BLE_NUS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef BLE_NUS_CONFIG_DEBUG_COLOR
#define BLE_NUS_CONFIG_DEBUG_COLOR 0
#endif

// <o> BLE_NUS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef BLE_NUS_CONFIG_INFO_COLOR
#define BLE_NUS_CONFIG_INFO_COLOR 0
#endif

// <o> BLE_NUS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef BLE_NUS_CONFIG_LOG_LEVEL
#define BLE_NUS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </e>
// <q> BLE_OTS_C_ENABLED - nrf_ble_ots_c - Object Transfer Service Client

#ifndef BLE_OTS_C_ENABLED
#define BLE_OTS_C_ENABLED 0
#endif

// <q> BLE_OTS_C_L2CAP_ENABLED - nrf_ble_ots_c_l2cap - OTS Client L2CAP

#ifndef BLE_OTS_C_L2CAP_ENABLED
#define BLE_OTS_C_L2CAP_ENABLED 0
#endif

// <q> BLE_OTS_C_OACP_ENABLED - nrf_ble_ots_c_oacp - OTS Client Object Action Control Point

#ifndef BLE_OTS_C_OACP_ENABLED
#define BLE_OTS_C_OACP_ENABLED 0
#endif

// <q> BLE_OTS_ENABLED - ble_ots - Object transfer service

#ifndef BLE_OTS_ENABLED
#define BLE_OTS_ENABLED 0
#endif

// <q> BLE_RSCS_C_ENABLED - ble_rscs_c - Running Speed and Cadence Client

#ifndef BLE_RSCS_C_ENABLED
#define BLE_RSCS_C_ENABLED 0
#endif

// <q> BLE_RSCS_ENABLED - ble_rscs - Running Speed and Cadence Service

#ifndef BLE_RSCS_ENABLED
#define BLE_RSCS_ENABLED 0
#endif

// <q> BLE_TPS_ENABLED - ble_tps - TX Power Service

#ifndef BLE_TPS_ENABLED
#define BLE_TPS_ENABLED 0
#endif

// <q> NRF_BLE_GATTS_C_ENABLED - nrf_ble_gatts_c - GATT Service Client

#ifndef NRF_BLE_GATTS_C_ENABLED
#define NRF_BLE_GATTS_C_ENABLED 0
#endif

// </h>
// <h> nRF_Bootloader
//==========================================================
#ifndef nRF_Bootloader
#define nRF_Bootloader 
#endif

// <h> nrf_bootloader
//==========================================================
#ifndef nrf_bootloader
#define nrf_bootloader 
#endif

// <h> Application
//==========================================================
#ifndef Application
#define Application 
#endif

// <q> NRF_BL_APP_CRC_CHECK_SKIPPED_ON_GPREGRET2 - Skip CRC integrity check of the application when bit 1 (0-indexed) is set in the GPREGRET2 register.

// <i> Only CRC checks can be skipped. For other boot validation types, the GPREGRET2 register is ignored.
#ifndef NRF_BL_APP_CRC_CHECK_SKIPPED_ON_GPREGRET2
#define NRF_BL_APP_CRC_CHECK_SKIPPED_ON_GPREGRET2 0
#endif

// <q> NRF_BL_APP_CRC_CHECK_SKIPPED_ON_SYSTEMOFF_RESET - Skip integrity check of the application when waking up from the System Off state.

// <i> Only CRC checks can be skipped. For other boot validation types, the reset state is ignored.
#ifndef NRF_BL_APP_CRC_CHECK_SKIPPED_ON_SYSTEMOFF_RESET
#define NRF_BL_APP_CRC_CHECK_SKIPPED_ON_SYSTEMOFF_RESET 0
#endif

// <q> NRF_BL_APP_SIGNATURE_CHECK_REQUIRED - Perform signature check on the app. Requires the signature to be sent in the init packet.

#ifndef NRF_BL_APP_SIGNATURE_CHECK_REQUIRED
#define NRF_BL_APP_SIGNATURE_CHECK_REQUIRED 0
#endif

// <q> NRF_BL_DFU_ALLOW_UPDATE_FROM_APP - Whether to allow the app to receive firmware updates for the bootloader to activate.

// <i> The bootloader will do its own postvalidation.
#ifndef NRF_BL_DFU_ALLOW_UPDATE_FROM_APP
#define NRF_BL_DFU_ALLOW_UPDATE_FROM_APP 0
#endif

// </h>
// <h> DFU
//==========================================================
#ifndef DFU
#define DFU 
#endif

// <o> NRF_BL_DFU_CONTINUATION_TIMEOUT_MS - Timeout in ms when expecting an update immediately. 100-60000000

// <i> to immediately transfer a new application if it wishes.
#ifndef NRF_BL_DFU_CONTINUATION_TIMEOUT_MS
#define NRF_BL_DFU_CONTINUATION_TIMEOUT_MS 10000
#endif

// <e> NRF_BL_DFU_ENTER_METHOD_BUTTON
//==========================================================
#ifndef NRF_BL_DFU_ENTER_METHOD_BUTTON
#define NRF_BL_DFU_ENTER_METHOD_BUTTON 0
#endif

// <o> NRF_BL_DFU_ENTER_METHOD_BUTTON_PIN - Button for entering DFU mode.

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
#ifndef NRF_BL_DFU_ENTER_METHOD_BUTTON_PIN
#define NRF_BL_DFU_ENTER_METHOD_BUTTON_PIN 25
#endif

// </e>
// <q> NRF_BL_DFU_ENTER_METHOD_BUTTONLESS - Enter DFU mode when the Boolean enter_buttonless_dfu in DFU settings is true.

#ifndef NRF_BL_DFU_ENTER_METHOD_BUTTONLESS
#define NRF_BL_DFU_ENTER_METHOD_BUTTONLESS 0
#endif

// <q> NRF_BL_DFU_ENTER_METHOD_GPREGRET - Enter DFU mode when bit is set in the NRF_POWER_GPREGRET register.

#ifndef NRF_BL_DFU_ENTER_METHOD_GPREGRET
#define NRF_BL_DFU_ENTER_METHOD_GPREGRET 0
#endif

// <q> NRF_BL_DFU_ENTER_METHOD_PINRESET - Enter DFU mode on pin reset.

#ifndef NRF_BL_DFU_ENTER_METHOD_PINRESET
#define NRF_BL_DFU_ENTER_METHOD_PINRESET 0
#endif

// <o> NRF_BL_DFU_INACTIVITY_TIMEOUT_MS - Timeout in ms before automatically starting a valid application due to inactivity. 0-60000000

// <i> If 0, no inactivity timer will be used. Values 1-99 are invalid.
#ifndef NRF_BL_DFU_INACTIVITY_TIMEOUT_MS
#define NRF_BL_DFU_INACTIVITY_TIMEOUT_MS 0
#endif

// </h>
// <h> Misc
//==========================================================
#ifndef Misc
#define Misc 
#endif

// <q> NRF_BL_DEBUG_PORT_DISABLE - Disable access to the chip via the debug port.

// <i> for more details.
#ifndef NRF_BL_DEBUG_PORT_DISABLE
#define NRF_BL_DEBUG_PORT_DISABLE 0
#endif

// <o> NRF_BL_FW_COPY_PROGRESS_STORE_STEP - Number of pages copied after which progress in the settings page is updated.

// <i> it also impacts negatively on flash wear.
#ifndef NRF_BL_FW_COPY_PROGRESS_STORE_STEP
#define NRF_BL_FW_COPY_PROGRESS_STORE_STEP 8
#endif

// <o> NRF_BL_RESET_DELAY_MS - Time to wait before resetting the bootloader.

// <i> Time (in ms) to wait before resetting the bootloader after DFU has been completed or aborted. This allows more time for e.g. disconnecting the BLE link or writing logs.
#ifndef NRF_BL_RESET_DELAY_MS
#define NRF_BL_RESET_DELAY_MS 0
#endif

// </h>
// <h> Watchdog
//==========================================================
#ifndef Watchdog
#define Watchdog 
#endif

// <o> NRF_BL_WDT_MAX_SCHEDULER_LATENCY_MS - Maximum latency of the scheduler in miliseconds

// <i> by flash operations.
#ifndef NRF_BL_WDT_MAX_SCHEDULER_LATENCY_MS
#define NRF_BL_WDT_MAX_SCHEDULER_LATENCY_MS 10000
#endif

// </h>
// </h>
// </h>
// <h> nRF_Core
//==========================================================
#ifndef nRF_Core
#define nRF_Core 
#endif

// <e> NRF_MPU_ENABLED
//==========================================================
#ifndef NRF_MPU_ENABLED
#define NRF_MPU_ENABLED 0
#endif

// <q> NRF_MPU_CLI_CMDS - Enable CLI commands specific to the module

#ifndef NRF_MPU_CLI_CMDS
#define NRF_MPU_CLI_CMDS 0
#endif

// </e>
// <e> NRF_MPU_LIB_ENABLED
//==========================================================
#ifndef NRF_MPU_LIB_ENABLED
#define NRF_MPU_LIB_ENABLED 0
#endif

// <q> NRF_MPU_LIB_CLI_CMDS - Enable CLI commands specific to the module.

#ifndef NRF_MPU_LIB_CLI_CMDS
#define NRF_MPU_LIB_CLI_CMDS 0
#endif

// </e>
// <e> NRF_STACK_GUARD_ENABLED
//==========================================================
#ifndef NRF_STACK_GUARD_ENABLED
#define NRF_STACK_GUARD_ENABLED 0
#endif

// <o> NRF_STACK_GUARD_CONFIG_SIZE - Size of stack guard

// <5=> 32
// <6=> 64
// <7=> 128
// <8=> 256
// <9=> 512
// <10=> 1024
// <11=> 2048
// <12=> 4096
#ifndef NRF_STACK_GUARD_CONFIG_SIZE
#define NRF_STACK_GUARD_CONFIG_SIZE 7
#endif

// </e>
// </h>
// <h> nRF_Crypto
//==========================================================
#ifndef nRF_Crypto
#define nRF_Crypto 
#endif

// <e> NRF_CRYPTO_ENABLED
//==========================================================
#ifndef NRF_CRYPTO_ENABLED
#define NRF_CRYPTO_ENABLED 0
#endif

// <o> NRF_CRYPTO_ALLOCATOR - Memory allocator

// <i> Choose memory allocator used by nrf_crypto. Default is alloca if possible or nrf_malloc otherwise. If 'User macros' are selected then user have to create 'nrf_crypto_allocator.h' file containing NRF_CRYPTO_ALLOC, NRF_CRYPTO_FREE and NRF_CRYPTO_ALLOC_ON_STACK
// <0=> Default
// <1=> User
// <2=> On
// <3=> C
// <4=> SDK
#ifndef NRF_CRYPTO_ALLOCATOR
#define NRF_CRYPTO_ALLOCATOR 0
#endif

// <e> NRF_CRYPTO_BACKEND_CC310_BL_ENABLED
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_CC310_BL_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_ECC_LITTLE_ENDIAN_ENABLED - Enable non-standard little endian byte order in nrf_cc310_bl ECC functions.

// <i> This affects parameters for all nrf_cc310_bl ECC APIs (raw keys, signature, digest). Only for use in nRF SDK DFU!
#ifndef NRF_CRYPTO_BACKEND_CC310_BL_ECC_LITTLE_ENDIAN_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_ECC_LITTLE_ENDIAN_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP224R1_ENABLED - Enable the secp224r1 elliptic curve support using CC310_BL.

#ifndef NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP224R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP224R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP256R1_ENABLED - Enable the secp256r1 elliptic curve support using CC310_BL.

#ifndef NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP256R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_ENABLED - nrf_cc310_bl buffers to RAM before running hash operation

// <i> Enabling this makes hashing of addresses in FLASH range possible. Size of buffer allocated for hashing is set by NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_SIZE
#ifndef NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_ENABLED 0
#endif

// <o> NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_SIZE - nrf_cc310_bl hash outputs digests in little endian

// <i> Makes the nrf_cc310_bl hash functions output digests in little endian format. Only for use in nRF SDK DFU!
#ifndef NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_SIZE
#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_SIZE 4096
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_HASH_LITTLE_ENDIAN_DIGEST_ENABLED - nrf_cc310_bl hash outputs digests in little endian

// <i> Makes the nRF SH hash functions output digests in little endian format. Only for use in nRF SDK DFU!
#ifndef NRF_CRYPTO_BACKEND_CC310_BL_HASH_LITTLE_ENDIAN_DIGEST_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_LITTLE_ENDIAN_DIGEST_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_HASH_SHA256_ENABLED - CC310_BL SHA-256 hash functionality.

// <i> CC310_BL backend implementation for hardware-accelerated SHA-256.
#ifndef NRF_CRYPTO_BACKEND_CC310_BL_HASH_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_SHA256_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_INTERRUPTS_ENABLED - Enable Interrupts while support using CC310 bl.

// <i> Select a library version compatible with the configuration. When interrupts are disable, a version named _noint must be used
#ifndef NRF_CRYPTO_BACKEND_CC310_BL_INTERRUPTS_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_INTERRUPTS_ENABLED 0
#endif

// </e>
// <e> NRF_CRYPTO_BACKEND_CC310_ENABLED
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_CC310_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CBC_ENABLED - Enable the AES CBC mode using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CBC_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CBC_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CBC_MAC_ENABLED - Enable the AES CBC_MAC mode using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CBC_MAC_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CBC_MAC_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CCM_ENABLED - Enable the AES CCM mode using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CCM_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CCM_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CCM_STAR_ENABLED - Enable the AES CCM* mode using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CCM_STAR_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CCM_STAR_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CMAC_ENABLED - Enable the AES CMAC mode using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CMAC_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CMAC_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CTR_ENABLED - Enable the AES CTR mode using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CTR_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CTR_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_ECB_ENABLED - Enable the AES ECB mode using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_ECB_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_ECB_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_CHACHA_POLY_ENABLED - Enable the CHACHA-POLY mode using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_CHACHA_POLY_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_CHACHA_POLY_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_CURVE25519_ENABLED - Enable the Curve25519 curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_CURVE25519_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_CURVE25519_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_ED25519_ENABLED - Enable the Ed25519 curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_ED25519_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_ED25519_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP160K1_ENABLED - Enable the secp160k1 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP160K1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP160K1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R1_ENABLED - Enable the secp160r1 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R2_ENABLED - Enable the secp160r2 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R2_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R2_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP192K1_ENABLED - Enable the secp192k1 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP192K1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP192K1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP192R1_ENABLED - Enable the secp192r1 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP192R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP192R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP224K1_ENABLED - Enable the secp224k1 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP224K1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP224K1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP224R1_ENABLED - Enable the secp224r1 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP224R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP224R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP256K1_ENABLED - Enable the secp256k1 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP256K1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP256K1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP256R1_ENABLED - Enable the secp256r1 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP256R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP384R1_ENABLED - Enable the secp384r1 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP384R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP384R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP521R1_ENABLED - Enable the secp521r1 elliptic curve support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP521R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP521R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_HASH_SHA256_ENABLED - CC310 SHA-256 hash functionality.

// <i> CC310 backend implementation for hardware-accelerated SHA-256.
#ifndef NRF_CRYPTO_BACKEND_CC310_HASH_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_HASH_SHA256_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_HASH_SHA512_ENABLED - CC310 SHA-512 hash functionality

// <i> CC310 backend implementation for SHA-512 (in software).
#ifndef NRF_CRYPTO_BACKEND_CC310_HASH_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_HASH_SHA512_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_HMAC_SHA256_ENABLED - CC310 HMAC using SHA-256

// <i> CC310 backend implementation for HMAC using hardware-accelerated SHA-256.
#ifndef NRF_CRYPTO_BACKEND_CC310_HMAC_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_HMAC_SHA256_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_HMAC_SHA512_ENABLED - CC310 HMAC using SHA-512

// <i> CC310 backend implementation for HMAC using SHA-512 (in software).
#ifndef NRF_CRYPTO_BACKEND_CC310_HMAC_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_HMAC_SHA512_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_INTERRUPTS_ENABLED - Enable Interrupts while support using CC310.

// <i> Select a library version compatible with the configuration. When interrupts are disable, a version named _noint must be used
#ifndef NRF_CRYPTO_BACKEND_CC310_INTERRUPTS_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_INTERRUPTS_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_RNG_ENABLED - Enable RNG support using CC310.

#ifndef NRF_CRYPTO_BACKEND_CC310_RNG_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_RNG_ENABLED 0
#endif

// </e>
// <e> NRF_CRYPTO_BACKEND_CIFRA_ENABLED
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_CIFRA_ENABLED
#define NRF_CRYPTO_BACKEND_CIFRA_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CIFRA_AES_EAX_ENABLED - Enable the AES EAX mode using Cifra.

#ifndef NRF_CRYPTO_BACKEND_CIFRA_AES_EAX_ENABLED
#define NRF_CRYPTO_BACKEND_CIFRA_AES_EAX_ENABLED 0
#endif

// </e>
// <e> NRF_CRYPTO_BACKEND_MBEDTLS_ENABLED
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_ENABLED - Enable the AES CBC mode mbed TLS.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_MAC_ENABLED - Enable the AES CBC MAC mode using mbed TLS.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_MAC_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_MAC_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CCM_ENABLED - Enable the AES CCM mode using mbed TLS.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CCM_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CCM_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CFB_ENABLED - Enable the AES CFB mode using mbed TLS.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CFB_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CFB_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CMAC_ENABLED - Enable the AES CMAC mode using mbed TLS.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CMAC_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CMAC_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CTR_ENABLED - Enable the AES CTR mode using mbed TLS.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CTR_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CTR_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_ECB_ENABLED - Enable the AES ECB mode using mbed TLS.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_ECB_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_ECB_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_GCM_ENABLED - Enable the AES GCM mode using mbed TLS.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_GCM_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_GCM_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP256R1_ENABLED - Enable bp256r1 (Brainpool 256-bit) curve

// <i> Enable this setting if you need bp256r1 (Brainpool 256-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP256R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP384R1_ENABLED - Enable bp384r1 (Brainpool 384-bit) curve

// <i> Enable this setting if you need bp384r1 (Brainpool 384-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP384R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP384R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP512R1_ENABLED - Enable bp512r1 (Brainpool 512-bit) curve

// <i> Enable this setting if you need bp512r1 (Brainpool 512-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP512R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP512R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_CURVE25519_ENABLED - Enable Curve25519 curve

// <i> Enable this setting if you need Curve25519 support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_CURVE25519_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_CURVE25519_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192K1_ENABLED - Enable secp192k1 (Koblitz 192-bit) curve

// <i> Enable this setting if you need secp192k1 (Koblitz 192-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192K1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192K1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192R1_ENABLED - Enable secp192r1 (NIST 192-bit) curve

// <i> Enable this setting if you need secp192r1 (NIST 192-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224K1_ENABLED - Enable secp224k1 (Koblitz 224-bit) curve

// <i> Enable this setting if you need secp224k1 (Koblitz 224-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224K1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224K1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224R1_ENABLED - Enable secp224r1 (NIST 224-bit) curve

// <i> Enable this setting if you need secp224r1 (NIST 224-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256K1_ENABLED - Enable secp256k1 (Koblitz 256-bit) curve

// <i> Enable this setting if you need secp256k1 (Koblitz 256-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256K1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256K1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256R1_ENABLED - Enable secp256r1 (NIST 256-bit) curve

// <i> Enable this setting if you need secp256r1 (NIST 256-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP384R1_ENABLED - Enable secp384r1 (NIST 384-bit) curve

// <i> Enable this setting if you need secp384r1 (NIST 384-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP384R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP384R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP521R1_ENABLED - Enable secp521r1 (NIST 521-bit) curve

// <i> Enable this setting if you need secp521r1 (NIST 521-bit) support using MBEDTLS
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP521R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP521R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA256_ENABLED - Enable mbed TLS SHA-256 hash functionality.

// <i> mbed TLS backend implementation for SHA-256.
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA256_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA512_ENABLED - Enable mbed TLS SHA-512 hash functionality.

// <i> mbed TLS backend implementation for SHA-512.
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA512_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA256_ENABLED - Enable mbed TLS HMAC using SHA-256.

// <i> mbed TLS backend implementation for HMAC using SHA-256.
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA256_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA512_ENABLED - Enable mbed TLS HMAC using SHA-512.

// <i> mbed TLS backend implementation for HMAC using SHA-512.
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA512_ENABLED 0
#endif

// </e>
// <e> NRF_CRYPTO_BACKEND_MICRO_ECC_ENABLED
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP192R1_ENABLED - Enable secp192r1 (NIST 192-bit) curve

// <i> Enable this setting if you need secp192r1 (NIST 192-bit) support using micro-ecc
#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP192R1_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP192R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP224R1_ENABLED - Enable secp224r1 (NIST 224-bit) curve

// <i> Enable this setting if you need secp224r1 (NIST 224-bit) support using micro-ecc
#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP224R1_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP224R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256K1_ENABLED - Enable secp256k1 (Koblitz 256-bit) curve

// <i> Enable this setting if you need secp256k1 (Koblitz 256-bit) support using micro-ecc
#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256K1_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256K1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256R1_ENABLED - Enable secp256r1 (NIST 256-bit) curve

// <i> Enable this setting if you need secp256r1 (NIST 256-bit) support using micro-ecc
#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MICRO_ECC_LITTLE_ENDIAN_ENABLED - Enable non-standard little endian byte order.

// <i> This affects parameters for all ECC API (raw keys, signature, digest, shared secret). Only for use in nRF SDK DFU!
#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_LITTLE_ENDIAN_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_LITTLE_ENDIAN_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_MICRO_ECC_PUBLIC_KEY_TRUSTED_ENABLED - Always trust raw public key (it will cause a security issue if the public key comes from an untrusted source)

// <i> Enable this setting if you want to reduce flash usage. Only for use in nRF SDK DFU! Never enable it if the raw public key comes from an untrusted source.
#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_PUBLIC_KEY_TRUSTED_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_PUBLIC_KEY_TRUSTED_ENABLED 0
#endif

// </e>
// <e> NRF_CRYPTO_BACKEND_NRF_HW_RNG_ENABLED
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_NRF_HW_RNG_ENABLED
#define NRF_CRYPTO_BACKEND_NRF_HW_RNG_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_NRF_HW_RNG_MBEDTLS_CTR_DRBG_ENABLED - Enable mbed TLS CTR-DRBG algorithm.

// <i> Enable mbed TLS CTR-DRBG standardized by NIST (NIST SP 800-90A Rev. 1). The nRF HW RNG is used as an entropy source for seeding.
#ifndef NRF_CRYPTO_BACKEND_NRF_HW_RNG_MBEDTLS_CTR_DRBG_ENABLED
#define NRF_CRYPTO_BACKEND_NRF_HW_RNG_MBEDTLS_CTR_DRBG_ENABLED 0
#endif

// </e>
// <e> NRF_CRYPTO_BACKEND_NRF_SW_ENABLED
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_NRF_SW_ENABLED
#define NRF_CRYPTO_BACKEND_NRF_SW_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_NRF_SW_HASH_LITTLE_ENDIAN_DIGEST_ENABLED - nRF SW hash outputs digests in little endian

// <i> Makes the nRF SH hash functions output digests in little endian format. Only for use in nRF SDK DFU!
#ifndef NRF_CRYPTO_BACKEND_NRF_SW_HASH_LITTLE_ENDIAN_DIGEST_ENABLED
#define NRF_CRYPTO_BACKEND_NRF_SW_HASH_LITTLE_ENDIAN_DIGEST_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_NRF_SW_HASH_SHA256_ENABLED - nRF SW hash backend support for SHA-256

// <i> The nRF SW backend provide access to nRF SDK legacy hash implementation of SHA-256.
#ifndef NRF_CRYPTO_BACKEND_NRF_SW_HASH_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_NRF_SW_HASH_SHA256_ENABLED 0
#endif

// </e>
// <e> NRF_CRYPTO_BACKEND_OBERON_ENABLED
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_OBERON_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_CHACHA_POLY_ENABLED - Enable the CHACHA-POLY mode using Oberon.

#ifndef NRF_CRYPTO_BACKEND_OBERON_CHACHA_POLY_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_CHACHA_POLY_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_ECC_CURVE25519_ENABLED - Enable Curve25519 ECDH

// <i> Enable this setting if you need Curve25519 ECDH support using Oberon library
#ifndef NRF_CRYPTO_BACKEND_OBERON_ECC_CURVE25519_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_ECC_CURVE25519_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_ECC_ED25519_ENABLED - Enable Ed25519 signature scheme

// <i> Enable this setting if you need Ed25519 support using Oberon library
#ifndef NRF_CRYPTO_BACKEND_OBERON_ECC_ED25519_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_ECC_ED25519_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_ECC_SECP256R1_ENABLED - Enable secp256r1 curve

// <i> Enable this setting if you need secp256r1 curve support using Oberon library
#ifndef NRF_CRYPTO_BACKEND_OBERON_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_ECC_SECP256R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_HASH_SHA256_ENABLED - Oberon SHA-256 hash functionality

// <i> Oberon backend implementation for SHA-256.
#ifndef NRF_CRYPTO_BACKEND_OBERON_HASH_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_HASH_SHA256_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_HASH_SHA512_ENABLED - Oberon SHA-512 hash functionality

// <i> Oberon backend implementation for SHA-512.
#ifndef NRF_CRYPTO_BACKEND_OBERON_HASH_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_HASH_SHA512_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA256_ENABLED - Oberon HMAC using SHA-256

// <i> Oberon backend implementation for HMAC using SHA-256.
#ifndef NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA256_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA512_ENABLED - Oberon HMAC using SHA-512

// <i> Oberon backend implementation for HMAC using SHA-512.
#ifndef NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA512_ENABLED 0
#endif

// </e>
// <e> NRF_CRYPTO_BACKEND_OPTIGA_ENABLED
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_OPTIGA_ENABLED
#define NRF_CRYPTO_BACKEND_OPTIGA_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OPTIGA_ECC_SECP256R1_ENABLED - Optiga backend support for ECC secp256r1

// <i> The Optiga backend provide external chip ECC using secp256r1.
#ifndef NRF_CRYPTO_BACKEND_OPTIGA_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_OPTIGA_ECC_SECP256R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OPTIGA_RNG_ENABLED - Optiga backend support for RNG

// <i> The Optiga backend provide external chip RNG.
#ifndef NRF_CRYPTO_BACKEND_OPTIGA_RNG_ENABLED
#define NRF_CRYPTO_BACKEND_OPTIGA_RNG_ENABLED 0
#endif

// </e>
// <q> NRF_CRYPTO_CURVE25519_BIG_ENDIAN_ENABLED - Big-endian byte order in raw Curve25519 data

// <i> Enable big-endian byte order in Curve25519 API, if set to 1. Use little-endian, if set to 0.
#ifndef NRF_CRYPTO_CURVE25519_BIG_ENDIAN_ENABLED
#define NRF_CRYPTO_CURVE25519_BIG_ENDIAN_ENABLED 0
#endif

// </e>
// <h> nrf_crypto_rng
//==========================================================
#ifndef nrf_crypto_rng
#define nrf_crypto_rng 
#endif

// <q> NRF_CRYPTO_RNG_AUTO_INIT_ENABLED - Initialize the RNG module automatically when nrf_crypto is initialized.

// <i> Automatic initialization is only supported with static or internally allocated context and temporary memory.
#ifndef NRF_CRYPTO_RNG_AUTO_INIT_ENABLED
#define NRF_CRYPTO_RNG_AUTO_INIT_ENABLED 0
#endif

// <q> NRF_CRYPTO_RNG_STATIC_MEMORY_BUFFERS_ENABLED - Use static memory buffers for context and temporary init buffer.

// <i> Always recommended when using the nRF HW RNG as the context and temporary buffers are small. Consider disabling if using the CC310 RNG in a RAM constrained application. In this case, memory must be provided to nrf_crypto_rng_init, or it can be allocated internally provided that NRF_CRYPTO_ALLOCATOR does not allocate memory on the stack.
#ifndef NRF_CRYPTO_RNG_STATIC_MEMORY_BUFFERS_ENABLED
#define NRF_CRYPTO_RNG_STATIC_MEMORY_BUFFERS_ENABLED 0
#endif

// </h>
// </h>
// <h> nRF_DFU
//==========================================================
#ifndef nRF_DFU
#define nRF_DFU 
#endif

// <h> ble_dfu
//==========================================================
#ifndef ble_dfu
#define ble_dfu 
#endif

// <q> BLE_DFU_ENABLED - Enable DFU Service.

#ifndef BLE_DFU_ENABLED
#define BLE_DFU_ENABLED 0
#endif

// <q> NRF_DFU_BLE_BUTTONLESS_SUPPORTS_BONDS - Buttonless DFU supports bonds.

#ifndef NRF_DFU_BLE_BUTTONLESS_SUPPORTS_BONDS
#define NRF_DFU_BLE_BUTTONLESS_SUPPORTS_BONDS 0
#endif

// </h>
// <h> DFU
//==========================================================
#ifndef DFU
#define DFU 
#endif

// <q> NRF_DFU_APP_ACCEPT_SAME_VERSION - Whether to accept application upgrades with the same version as the current application.

// <i> This config only has an effect when NRF_DFU_APP_DOWNGRADE_PREVENTION is enabled.
#ifndef NRF_DFU_APP_ACCEPT_SAME_VERSION
#define NRF_DFU_APP_ACCEPT_SAME_VERSION 0
#endif

// <q> NRF_DFU_APP_DOWNGRADE_PREVENTION - Check the firmware version and SoftDevice requirements of application (and SoftDevice) updates.

// <i> When signed updates are required, version checking should always be enabled.
#ifndef NRF_DFU_APP_DOWNGRADE_PREVENTION
#define NRF_DFU_APP_DOWNGRADE_PREVENTION 0
#endif

// <q> NRF_DFU_EXTERNAL_APP_VERSIONING - Require versioning for external applications.

// <i> FW version.
#ifndef NRF_DFU_EXTERNAL_APP_VERSIONING
#define NRF_DFU_EXTERNAL_APP_VERSIONING 0
#endif

// <q> NRF_DFU_FORCE_DUAL_BANK_APP_UPDATES - Accept only dual-bank application updates.

// <i> current application.
#ifndef NRF_DFU_FORCE_DUAL_BANK_APP_UPDATES
#define NRF_DFU_FORCE_DUAL_BANK_APP_UPDATES 0
#endif

// <o> NRF_DFU_HW_VERSION - Device hardware version.

// <i> It is checked against the hw_version value in the init packet
#ifndef NRF_DFU_HW_VERSION
#define NRF_DFU_HW_VERSION 52
#endif

// <q> NRF_DFU_REQUIRE_SIGNED_APP_UPDATE - Require a valid signature to update the application or SoftDevice.

#ifndef NRF_DFU_REQUIRE_SIGNED_APP_UPDATE
#define NRF_DFU_REQUIRE_SIGNED_APP_UPDATE 0
#endif

// <q> NRF_DFU_SINGLE_BANK_APP_UPDATES - Place the application and the SoftDevice directly where they are supposed to be.

// <i> the current app or SoftDevice without knowing the signature key.
#ifndef NRF_DFU_SINGLE_BANK_APP_UPDATES
#define NRF_DFU_SINGLE_BANK_APP_UPDATES 0
#endif

// </h>
// <h> nrf_dfu
//==========================================================
#ifndef nrf_dfu
#define nrf_dfu 
#endif

// <h> DFU
//==========================================================
#ifndef DFU
#define DFU 
#endif

// <q> NRF_DFU_PROTOCOL_FW_VERSION_MSG - Firmware version message support.

// <i> If disabled, firmware version requests will return NRF_DFU_RES_CODE_OP_CODE_NOT_SUPPORTED.
#ifndef NRF_DFU_PROTOCOL_FW_VERSION_MSG
#define NRF_DFU_PROTOCOL_FW_VERSION_MSG 0
#endif

// <q> NRF_DFU_PROTOCOL_REDUCED - Reduced protocol opcode selection.

// <i> This reduced feature set is used by the BLE transport to reduce flash usage.
#ifndef NRF_DFU_PROTOCOL_REDUCED
#define NRF_DFU_PROTOCOL_REDUCED 0
#endif

// <q> NRF_DFU_PROTOCOL_VERSION_MSG - Protocol version message support.

// <i> If disabled, protocol version requests will return NRF_DFU_RES_CODE_OP_CODE_NOT_SUPPORTED.
#ifndef NRF_DFU_PROTOCOL_VERSION_MSG
#define NRF_DFU_PROTOCOL_VERSION_MSG 0
#endif

// <e> NRF_DFU_TRANSPORT_ANT
//==========================================================
#ifndef NRF_DFU_TRANSPORT_ANT
#define NRF_DFU_TRANSPORT_ANT 0
#endif

// <h> ANT
//==========================================================
#ifndef ANT
#define ANT 
#endif

// <e> NRF_DFU_ANT_BUFFERS_OVERRIDE
//==========================================================
#ifndef NRF_DFU_ANT_BUFFERS_OVERRIDE
#define NRF_DFU_ANT_BUFFERS_OVERRIDE 0
#endif

// <o> NRF_DFU_ANT_BUFFERS - Number of buffers in the ANT transport.

// <i> Reduce this value to save RAM. If this value is too low, the DFU process will fail.
#ifndef NRF_DFU_ANT_BUFFERS
#define NRF_DFU_ANT_BUFFERS 8
#endif

// </e>
// <o> NRF_DFU_ANT_CHANNEL_PERIOD - Channel period of DFU ANT channel.

#ifndef NRF_DFU_ANT_CHANNEL_PERIOD
#define NRF_DFU_ANT_CHANNEL_PERIOD 2048
#endif

// <o> NRF_DFU_ANT_DEV_TYPE - Device type field to use for DFU channel id.

#ifndef NRF_DFU_ANT_DEV_TYPE
#define NRF_DFU_ANT_DEV_TYPE 10
#endif

// <o> NRF_DFU_ANT_RF_FREQ - DFU RF channel.

#ifndef NRF_DFU_ANT_RF_FREQ
#define NRF_DFU_ANT_RF_FREQ 66
#endif

// </h>
// <o> NRF_DFU_ANT_MTU - MTU size used for firmware bursts.

// <i> Sets the maximum burst size used for DFU write commands.
#ifndef NRF_DFU_ANT_MTU
#define NRF_DFU_ANT_MTU 1024
#endif

// </e>
// <e> NRF_DFU_TRANSPORT_BLE
//==========================================================
#ifndef NRF_DFU_TRANSPORT_BLE
#define NRF_DFU_TRANSPORT_BLE 0
#endif

// <h> BLE
//==========================================================
#ifndef BLE
#define BLE 
#endif

// <e> NRF_DFU_BLE_BUFFERS_OVERRIDE
//==========================================================
#ifndef NRF_DFU_BLE_BUFFERS_OVERRIDE
#define NRF_DFU_BLE_BUFFERS_OVERRIDE 0
#endif

// <o> NRF_DFU_BLE_BUFFERS - Number of buffers in the BLE transport.

// <i> Reduce this value to save RAM. If this value is too low, the DFU process will fail.
#ifndef NRF_DFU_BLE_BUFFERS
#define NRF_DFU_BLE_BUFFERS 8
#endif

// </e>
// <o> NRF_DFU_BLE_CONN_SUP_TIMEOUT_MS - Supervision timeout (ms).

// <i> GAP connection supervision timeout, in milliseconds.
#ifndef NRF_DFU_BLE_CONN_SUP_TIMEOUT_MS
#define NRF_DFU_BLE_CONN_SUP_TIMEOUT_MS 6000
#endif

// <o> NRF_DFU_BLE_MAX_CONN_INTERVAL - Maximum connection interval (units).

// <i> Maximum GAP connection interval, in 1.25 ms units.
#ifndef NRF_DFU_BLE_MAX_CONN_INTERVAL
#define NRF_DFU_BLE_MAX_CONN_INTERVAL 12
#endif

// <o> NRF_DFU_BLE_MIN_CONN_INTERVAL - Minimum connection interval (units).

// <i> Minimum GAP connection interval, in 1.25 ms units.
#ifndef NRF_DFU_BLE_MIN_CONN_INTERVAL
#define NRF_DFU_BLE_MIN_CONN_INTERVAL 12
#endif

// <q> NRF_DFU_BLE_REQUIRES_BONDS - Require bond with peer.

#ifndef NRF_DFU_BLE_REQUIRES_BONDS
#define NRF_DFU_BLE_REQUIRES_BONDS 0
#endif

// </h>
// <o> NRF_DFU_BLE_ADV_INTERVAL - Advertising interval (in units of 0.625 ms)

#ifndef NRF_DFU_BLE_ADV_INTERVAL
#define NRF_DFU_BLE_ADV_INTERVAL 40
#endif

// <q> NRF_DFU_BLE_SKIP_SD_INIT - Skip the SoftDevice and interrupt vector table initialization.

#ifndef NRF_DFU_BLE_SKIP_SD_INIT
#define NRF_DFU_BLE_SKIP_SD_INIT 0
#endif

// </e>
// </h>
// <h> Misc
//==========================================================
#ifndef Misc
#define Misc 
#endif

// <o> NRF_DFU_APP_DATA_AREA_SIZE - The size (in bytes) of the flash area reserved for application data.

// <i> firmware upgrade. The size must be a multiple of the flash page size.
#ifndef NRF_DFU_APP_DATA_AREA_SIZE
#define NRF_DFU_APP_DATA_AREA_SIZE 12288
#endif

// <q> NRF_DFU_IN_APP - Specifies that this code is in the app, not the bootloader, so some settings are off-limits.

// <i> in the bootloader. NRF_BL_DFU_ALLOW_UPDATE_FROM_APP must be enabled in the bootloader.
#ifndef NRF_DFU_IN_APP
#define NRF_DFU_IN_APP 0
#endif

// <q> NRF_DFU_SAVE_PROGRESS_IN_FLASH - Save DFU progress in flash.

// <i> The init packet is always saved in flash, regardless of this setting.
#ifndef NRF_DFU_SAVE_PROGRESS_IN_FLASH
#define NRF_DFU_SAVE_PROGRESS_IN_FLASH 0
#endif

// <q> NRF_DFU_SUPPORTS_EXTERNAL_APP - [Experimental] Support for external app.

// <i> experimental and not yet used in any examples.
#ifndef NRF_DFU_SUPPORTS_EXTERNAL_APP
#define NRF_DFU_SUPPORTS_EXTERNAL_APP 0
#endif

// </h>
// </h>
// <h> nrf_dfu_serial_uart
//==========================================================
#ifndef nrf_dfu_serial_uart
#define nrf_dfu_serial_uart 
#endif

// <o> NRF_DFU_SERIAL_UART_RX_BUFFERS - Number of RX buffers.

// <i> to received packets being dropped.
#ifndef NRF_DFU_SERIAL_UART_RX_BUFFERS
#define NRF_DFU_SERIAL_UART_RX_BUFFERS 3
#endif

// <q> NRF_DFU_SERIAL_UART_USES_HWFC - HWFC configuration

#ifndef NRF_DFU_SERIAL_UART_USES_HWFC
#define NRF_DFU_SERIAL_UART_USES_HWFC 0
#endif

// </h>
// <q> NRF_DFU_SETTINGS_COMPATIBILITY_MODE - nrf_dfu_settings - DFU Settings

#ifndef NRF_DFU_SETTINGS_COMPATIBILITY_MODE
#define NRF_DFU_SETTINGS_COMPATIBILITY_MODE 0
#endif

// </h>
// <h> nRF_Drivers
//==========================================================
#ifndef nRF_Drivers
#define nRF_Drivers 
#endif

// <e> CLOCK_ENABLED
//==========================================================
#ifndef CLOCK_ENABLED
#define CLOCK_ENABLED 0
#endif

// <o> CLOCK_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef CLOCK_CONFIG_IRQ_PRIORITY
#define CLOCK_CONFIG_IRQ_PRIORITY 7
#endif

// <o> CLOCK_CONFIG_LF_SRC - LF Clock Source

// <0=> RC
// <1=> XTAL
// <2=> Synth
#ifndef CLOCK_CONFIG_LF_SRC
#define CLOCK_CONFIG_LF_SRC 1
#endif

// </e>
// <e> COMP_ENABLED
//==========================================================
#ifndef COMP_ENABLED
#define COMP_ENABLED 0
#endif

// <o> COMP_CONFIG_HYST - Hystheresis

// <0=> No
// <1=> 50mV
#ifndef COMP_CONFIG_HYST
#define COMP_CONFIG_HYST 0
#endif

// <o> COMP_CONFIG_INPUT - Analog input

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef COMP_CONFIG_INPUT
#define COMP_CONFIG_INPUT 0
#endif

// <o> COMP_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef COMP_CONFIG_IRQ_PRIORITY
#define COMP_CONFIG_IRQ_PRIORITY 7
#endif

// <o> COMP_CONFIG_ISOURCE - Current Source

// <0=> Off
// <1=> 2.5
// <2=> 5
// <3=> 10
#ifndef COMP_CONFIG_ISOURCE
#define COMP_CONFIG_ISOURCE 0
#endif

// <o> COMP_CONFIG_MAIN_MODE - Main mode

// <0=> Single
// <1=> Differential
#ifndef COMP_CONFIG_MAIN_MODE
#define COMP_CONFIG_MAIN_MODE 0
#endif

// <o> COMP_CONFIG_REF - Reference voltage

// <0=> Internal
// <1=> Internal
// <2=> Internal
// <4=> VDD
// <7=> ARef
#ifndef COMP_CONFIG_REF
#define COMP_CONFIG_REF 1
#endif

// <o> COMP_CONFIG_SPEED_MODE - Speed mode

// <0=> Low
// <1=> Normal
// <2=> High
#ifndef COMP_CONFIG_SPEED_MODE
#define COMP_CONFIG_SPEED_MODE 2
#endif

// </e>
// <q> EGU_ENABLED - nrf_drv_swi - SWI(EGU) peripheral driver - legacy layer

#ifndef EGU_ENABLED
#define EGU_ENABLED 0
#endif

// <e> GPIOTE_ENABLED
//==========================================================
#ifndef GPIOTE_ENABLED
#define GPIOTE_ENABLED 0
#endif

// <o> GPIOTE_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef GPIOTE_CONFIG_IRQ_PRIORITY
#define GPIOTE_CONFIG_IRQ_PRIORITY 7
#endif

// <o> GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS - Number of lower power input pins

#ifndef GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS
#define GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS 1
#endif

// </e>
// <e> I2S_ENABLED
//==========================================================
#ifndef I2S_ENABLED
#define I2S_ENABLED 0
#endif

// <o> I2S_CONFIG_ALIGN - Alignment

// <0=> Left
// <1=> Right
#ifndef I2S_CONFIG_ALIGN
#define I2S_CONFIG_ALIGN 0
#endif

// <o> I2S_CONFIG_CHANNELS - Channels

// <0=> Stereo
// <1=> Left
// <2=> Right
#ifndef I2S_CONFIG_CHANNELS
#define I2S_CONFIG_CHANNELS 1
#endif

// <o> I2S_CONFIG_FORMAT - Format

// <0=> I2S
// <1=> Aligned
#ifndef I2S_CONFIG_FORMAT
#define I2S_CONFIG_FORMAT 0
#endif

// <o> I2S_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef I2S_CONFIG_IRQ_PRIORITY
#define I2S_CONFIG_IRQ_PRIORITY 7
#endif

// <e> I2S_CONFIG_LOG_ENABLED
//==========================================================
#ifndef I2S_CONFIG_LOG_ENABLED
#define I2S_CONFIG_LOG_ENABLED 0
#endif

// <o> I2S_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef I2S_CONFIG_DEBUG_COLOR
#define I2S_CONFIG_DEBUG_COLOR 0
#endif

// <o> I2S_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef I2S_CONFIG_INFO_COLOR
#define I2S_CONFIG_INFO_COLOR 0
#endif

// <o> I2S_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef I2S_CONFIG_LOG_LEVEL
#define I2S_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> I2S_CONFIG_LRCK_PIN - LRCK pin 1-31

#ifndef I2S_CONFIG_LRCK_PIN
#define I2S_CONFIG_LRCK_PIN 30
#endif

// <o> I2S_CONFIG_MASTER - Mode

// <0=> Master
// <1=> Slave
#ifndef I2S_CONFIG_MASTER
#define I2S_CONFIG_MASTER 0
#endif

// <o> I2S_CONFIG_MCK_PIN - MCK pin

#ifndef I2S_CONFIG_MCK_PIN
#define I2S_CONFIG_MCK_PIN 255
#endif

// <o> I2S_CONFIG_MCK_SETUP - MCK behavior

// <0=> Disabled
// <2147483648=> 32MHz/2
// <1342177280=> 32MHz/3
// <1073741824=> 32MHz/4
// <805306368=> 32MHz/5
// <671088640=> 32MHz/6
// <536870912=> 32MHz/8
// <402653184=> 32MHz/10
// <369098752=> 32MHz/11
// <285212672=> 32MHz/15
// <268435456=> 32MHz/16
// <201326592=> 32MHz/21
// <184549376=> 32MHz/23
// <142606336=> 32MHz/30
// <138412032=> 32MHz/31
// <134217728=> 32MHz/32
// <100663296=> 32MHz/42
// <68157440=> 32MHz/63
// <34340864=> 32MHz/125
#ifndef I2S_CONFIG_MCK_SETUP
#define I2S_CONFIG_MCK_SETUP 536870912
#endif

// <o> I2S_CONFIG_RATIO - MCK/LRCK ratio

// <0=> 32x
// <1=> 48x
// <2=> 64x
// <3=> 96x
// <4=> 128x
// <5=> 192x
// <6=> 256x
// <7=> 384x
// <8=> 512x
#ifndef I2S_CONFIG_RATIO
#define I2S_CONFIG_RATIO 2000
#endif

// <o> I2S_CONFIG_SCK_PIN - SCK pin 0-31

#ifndef I2S_CONFIG_SCK_PIN
#define I2S_CONFIG_SCK_PIN 31
#endif

// <o> I2S_CONFIG_SDIN_PIN - SDIN pin 0-31

#ifndef I2S_CONFIG_SDIN_PIN
#define I2S_CONFIG_SDIN_PIN 28
#endif

// <o> I2S_CONFIG_SDOUT_PIN - SDOUT pin 0-31

#ifndef I2S_CONFIG_SDOUT_PIN
#define I2S_CONFIG_SDOUT_PIN 29
#endif

// <o> I2S_CONFIG_SWIDTH - Sample width (bits)

// <0=> 8
// <1=> 16
// <2=> 24
#ifndef I2S_CONFIG_SWIDTH
#define I2S_CONFIG_SWIDTH 1
#endif

// </e>
// <e> LPCOMP_ENABLED
//==========================================================
#ifndef LPCOMP_ENABLED
#define LPCOMP_ENABLED 0
#endif

// <o> LPCOMP_CONFIG_DETECTION - Detection

// <0=> Crossing
// <1=> Up
// <2=> Down
#ifndef LPCOMP_CONFIG_DETECTION
#define LPCOMP_CONFIG_DETECTION 2
#endif

// <q> LPCOMP_CONFIG_HYST - Hysteresis

#ifndef LPCOMP_CONFIG_HYST
#define LPCOMP_CONFIG_HYST 0
#endif

// <o> LPCOMP_CONFIG_INPUT - Analog input

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef LPCOMP_CONFIG_INPUT
#define LPCOMP_CONFIG_INPUT 0
#endif

// <o> LPCOMP_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef LPCOMP_CONFIG_IRQ_PRIORITY
#define LPCOMP_CONFIG_IRQ_PRIORITY 7
#endif

// <o> LPCOMP_CONFIG_REFERENCE - Reference voltage

// <0=> Supply
// <1=> Supply
// <2=> Supply
// <3=> Supply
// <4=> Supply
// <5=> Supply
// <6=> Supply
// <8=> Supply
// <9=> Supply
// <10=> Supply
// <11=> Supply
// <12=> Supply
// <13=> Supply
// <14=> Supply
// <15=> Supply
// <7=> External
// <65543=> External
#ifndef LPCOMP_CONFIG_REFERENCE
#define LPCOMP_CONFIG_REFERENCE 3
#endif

// </e>
// <e> NRF_CLOCK_ENABLED
//==========================================================
#ifndef NRF_CLOCK_ENABLED
#define NRF_CLOCK_ENABLED 0
#endif

// <o> CLOCK_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef CLOCK_CONFIG_IRQ_PRIORITY
#define CLOCK_CONFIG_IRQ_PRIORITY 6
#endif

// <q> CLOCK_CONFIG_LF_CAL_ENABLED - Calibration enable for LF Clock Source

#ifndef CLOCK_CONFIG_LF_CAL_ENABLED
#define CLOCK_CONFIG_LF_CAL_ENABLED 0
#endif

// <o> CLOCK_CONFIG_LF_SRC - LF Clock Source

// <0=> RC
// <1=> XTAL
// <2=> Synth
// <131073=> External
// <196609=> External
#ifndef CLOCK_CONFIG_LF_SRC
#define CLOCK_CONFIG_LF_SRC 1
#endif

// </e>
// <e> NRFX_CLOCK_ENABLED
//==========================================================
#ifndef NRFX_CLOCK_ENABLED
#define NRFX_CLOCK_ENABLED 0
#endif

// <o> NRFX_CLOCK_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_CLOCK_CONFIG_IRQ_PRIORITY
#define NRFX_CLOCK_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_CLOCK_CONFIG_LF_SRC - LF Clock Source

// <0=> RC
// <1=> XTAL
// <2=> Synth
#ifndef NRFX_CLOCK_CONFIG_LF_SRC
#define NRFX_CLOCK_CONFIG_LF_SRC 1
#endif

// <e> NRFX_CLOCK_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_CLOCK_CONFIG_LOG_ENABLED
#define NRFX_CLOCK_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_CLOCK_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_CLOCK_CONFIG_DEBUG_COLOR
#define NRFX_CLOCK_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_CLOCK_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_CLOCK_CONFIG_INFO_COLOR
#define NRFX_CLOCK_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_CLOCK_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_CLOCK_CONFIG_LOG_LEVEL
#define NRFX_CLOCK_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> NRFX_COMP_ENABLED
//==========================================================
#ifndef NRFX_COMP_ENABLED
#define NRFX_COMP_ENABLED 0
#endif

// <o> NRFX_COMP_CONFIG_HYST - Hystheresis

// <0=> No
// <1=> 50mV
#ifndef NRFX_COMP_CONFIG_HYST
#define NRFX_COMP_CONFIG_HYST 0
#endif

// <o> NRFX_COMP_CONFIG_INPUT - Analog input

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_COMP_CONFIG_INPUT
#define NRFX_COMP_CONFIG_INPUT 0
#endif

// <o> NRFX_COMP_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_COMP_CONFIG_IRQ_PRIORITY
#define NRFX_COMP_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_COMP_CONFIG_ISOURCE - Current Source

// <0=> Off
// <1=> 2.5
// <2=> 5
// <3=> 10
#ifndef NRFX_COMP_CONFIG_ISOURCE
#define NRFX_COMP_CONFIG_ISOURCE 0
#endif

// <e> NRFX_COMP_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_COMP_CONFIG_LOG_ENABLED
#define NRFX_COMP_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_COMP_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_COMP_CONFIG_DEBUG_COLOR
#define NRFX_COMP_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_COMP_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_COMP_CONFIG_INFO_COLOR
#define NRFX_COMP_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_COMP_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_COMP_CONFIG_LOG_LEVEL
#define NRFX_COMP_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_COMP_CONFIG_MAIN_MODE - Main mode

// <0=> Single
// <1=> Differential
#ifndef NRFX_COMP_CONFIG_MAIN_MODE
#define NRFX_COMP_CONFIG_MAIN_MODE 0
#endif

// <o> NRFX_COMP_CONFIG_REF - Reference voltage

// <0=> Internal
// <1=> Internal
// <2=> Internal
// <4=> VDD
// <7=> ARef
#ifndef NRFX_COMP_CONFIG_REF
#define NRFX_COMP_CONFIG_REF 1
#endif

// <o> NRFX_COMP_CONFIG_SPEED_MODE - Speed mode

// <0=> Low
// <1=> Normal
// <2=> High
#ifndef NRFX_COMP_CONFIG_SPEED_MODE
#define NRFX_COMP_CONFIG_SPEED_MODE 2
#endif

// </e>
// <e> NRFX_GPIOTE_ENABLED
//==========================================================
#ifndef NRFX_GPIOTE_ENABLED
#define NRFX_GPIOTE_ENABLED 0
#endif

// <o> NRFX_GPIOTE_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_GPIOTE_CONFIG_IRQ_PRIORITY
#define NRFX_GPIOTE_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_GPIOTE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_GPIOTE_CONFIG_LOG_ENABLED
#define NRFX_GPIOTE_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_GPIOTE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_GPIOTE_CONFIG_DEBUG_COLOR
#define NRFX_GPIOTE_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_GPIOTE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_GPIOTE_CONFIG_INFO_COLOR
#define NRFX_GPIOTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_GPIOTE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_GPIOTE_CONFIG_LOG_LEVEL
#define NRFX_GPIOTE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS - Number of lower power input pins

#ifndef NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS
#define NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS 1
#endif

// </e>
// <h> nrfx_i2s
//==========================================================
#ifndef nrfx_i2s
#define nrfx_i2s 
#endif

// </h>
// <e> NRFX_I2S_ENABLED
//==========================================================
#ifndef NRFX_I2S_ENABLED
#define NRFX_I2S_ENABLED 0
#endif

// <o> NRFX_I2S_CONFIG_ALIGN - Alignment

// <0=> Left
// <1=> Right
#ifndef NRFX_I2S_CONFIG_ALIGN
#define NRFX_I2S_CONFIG_ALIGN 0
#endif

// <o> NRFX_I2S_CONFIG_CHANNELS - Channels

// <0=> Stereo
// <1=> Left
// <2=> Right
#ifndef NRFX_I2S_CONFIG_CHANNELS
#define NRFX_I2S_CONFIG_CHANNELS 1
#endif

// <o> NRFX_I2S_CONFIG_FORMAT - Format

// <0=> I2S
// <1=> Aligned
#ifndef NRFX_I2S_CONFIG_FORMAT
#define NRFX_I2S_CONFIG_FORMAT 0
#endif

// <o> NRFX_I2S_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_I2S_CONFIG_IRQ_PRIORITY
#define NRFX_I2S_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_I2S_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_I2S_CONFIG_LOG_ENABLED
#define NRFX_I2S_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_I2S_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_I2S_CONFIG_DEBUG_COLOR
#define NRFX_I2S_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_I2S_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_I2S_CONFIG_INFO_COLOR
#define NRFX_I2S_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_I2S_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_I2S_CONFIG_LOG_LEVEL
#define NRFX_I2S_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_I2S_CONFIG_LRCK_PIN - LRCK pin 1-31

#ifndef NRFX_I2S_CONFIG_LRCK_PIN
#define NRFX_I2S_CONFIG_LRCK_PIN 30
#endif

// <o> NRFX_I2S_CONFIG_MASTER - Mode

// <0=> Master
// <1=> Slave
#ifndef NRFX_I2S_CONFIG_MASTER
#define NRFX_I2S_CONFIG_MASTER 0
#endif

// <o> NRFX_I2S_CONFIG_MCK_PIN - MCK pin

#ifndef NRFX_I2S_CONFIG_MCK_PIN
#define NRFX_I2S_CONFIG_MCK_PIN 255
#endif

// <o> NRFX_I2S_CONFIG_MCK_SETUP - MCK behavior

// <0=> Disabled
// <2147483648=> 32MHz/2
// <1342177280=> 32MHz/3
// <1073741824=> 32MHz/4
// <805306368=> 32MHz/5
// <671088640=> 32MHz/6
// <536870912=> 32MHz/8
// <402653184=> 32MHz/10
// <369098752=> 32MHz/11
// <285212672=> 32MHz/15
// <268435456=> 32MHz/16
// <201326592=> 32MHz/21
// <184549376=> 32MHz/23
// <142606336=> 32MHz/30
// <138412032=> 32MHz/31
// <134217728=> 32MHz/32
// <100663296=> 32MHz/42
// <68157440=> 32MHz/63
// <34340864=> 32MHz/125
#ifndef NRFX_I2S_CONFIG_MCK_SETUP
#define NRFX_I2S_CONFIG_MCK_SETUP 536870912
#endif

// <o> NRFX_I2S_CONFIG_RATIO - MCK/LRCK ratio

// <0=> 32x
// <1=> 48x
// <2=> 64x
// <3=> 96x
// <4=> 128x
// <5=> 192x
// <6=> 256x
// <7=> 384x
// <8=> 512x
#ifndef NRFX_I2S_CONFIG_RATIO
#define NRFX_I2S_CONFIG_RATIO 2000
#endif

// <o> NRFX_I2S_CONFIG_SCK_PIN - SCK pin 0-31

#ifndef NRFX_I2S_CONFIG_SCK_PIN
#define NRFX_I2S_CONFIG_SCK_PIN 31
#endif

// <o> NRFX_I2S_CONFIG_SDIN_PIN - SDIN pin 0-31

#ifndef NRFX_I2S_CONFIG_SDIN_PIN
#define NRFX_I2S_CONFIG_SDIN_PIN 28
#endif

// <o> NRFX_I2S_CONFIG_SDOUT_PIN - SDOUT pin 0-31

#ifndef NRFX_I2S_CONFIG_SDOUT_PIN
#define NRFX_I2S_CONFIG_SDOUT_PIN 29
#endif

// <o> NRFX_I2S_CONFIG_SWIDTH - Sample width (bits)

// <0=> 8
// <1=> 16
// <2=> 24
#ifndef NRFX_I2S_CONFIG_SWIDTH
#define NRFX_I2S_CONFIG_SWIDTH 1
#endif

// </e>
// <h> nrfx_lpcomp
//==========================================================
#ifndef nrfx_lpcomp
#define nrfx_lpcomp 
#endif

// </h>
// <e> NRFX_LPCOMP_ENABLED
//==========================================================
#ifndef NRFX_LPCOMP_ENABLED
#define NRFX_LPCOMP_ENABLED 0
#endif

// <o> NRFX_LPCOMP_CONFIG_DETECTION - Detection

// <0=> Crossing
// <1=> Up
// <2=> Down
#ifndef NRFX_LPCOMP_CONFIG_DETECTION
#define NRFX_LPCOMP_CONFIG_DETECTION 2
#endif

// <q> NRFX_LPCOMP_CONFIG_HYST - Hysteresis

#ifndef NRFX_LPCOMP_CONFIG_HYST
#define NRFX_LPCOMP_CONFIG_HYST 0
#endif

// <o> NRFX_LPCOMP_CONFIG_INPUT - Analog input

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_LPCOMP_CONFIG_INPUT
#define NRFX_LPCOMP_CONFIG_INPUT 0
#endif

// <o> NRFX_LPCOMP_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_LPCOMP_CONFIG_IRQ_PRIORITY
#define NRFX_LPCOMP_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_LPCOMP_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_LPCOMP_CONFIG_LOG_ENABLED
#define NRFX_LPCOMP_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_LPCOMP_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_LPCOMP_CONFIG_DEBUG_COLOR
#define NRFX_LPCOMP_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_LPCOMP_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_LPCOMP_CONFIG_INFO_COLOR
#define NRFX_LPCOMP_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_LPCOMP_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_LPCOMP_CONFIG_LOG_LEVEL
#define NRFX_LPCOMP_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_LPCOMP_CONFIG_REFERENCE - Reference voltage

// <0=> Supply
// <1=> Supply
// <2=> Supply
// <3=> Supply
// <4=> Supply
// <5=> Supply
// <6=> Supply
// <8=> Supply
// <9=> Supply
// <10=> Supply
// <11=> Supply
// <12=> Supply
// <13=> Supply
// <14=> Supply
// <15=> Supply
// <7=> External
// <65543=> External
#ifndef NRFX_LPCOMP_CONFIG_REFERENCE
#define NRFX_LPCOMP_CONFIG_REFERENCE 3
#endif

// </e>
// <e> NRFX_NFCT_ENABLED
//==========================================================
#ifndef NRFX_NFCT_ENABLED
#define NRFX_NFCT_ENABLED 0
#endif

// <o> NRFX_NFCT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_NFCT_CONFIG_IRQ_PRIORITY
#define NRFX_NFCT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_NFCT_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_NFCT_CONFIG_LOG_ENABLED
#define NRFX_NFCT_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_NFCT_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_NFCT_CONFIG_DEBUG_COLOR
#define NRFX_NFCT_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_NFCT_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_NFCT_CONFIG_INFO_COLOR
#define NRFX_NFCT_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_NFCT_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_NFCT_CONFIG_LOG_LEVEL
#define NRFX_NFCT_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> NRFX_PDM_ENABLED
//==========================================================
#ifndef NRFX_PDM_ENABLED
#define NRFX_PDM_ENABLED 0
#endif

// <o> NRFX_PDM_CONFIG_CLOCK_FREQ - Clock frequency

// <134217728=> 1000k
// <138412032=> 1032k
// <142606336=> 1067k
#ifndef NRFX_PDM_CONFIG_CLOCK_FREQ
#define NRFX_PDM_CONFIG_CLOCK_FREQ 138412032
#endif

// <o> NRFX_PDM_CONFIG_EDGE - Edge

// <0=> Left
// <1=> Left
#ifndef NRFX_PDM_CONFIG_EDGE
#define NRFX_PDM_CONFIG_EDGE 0
#endif

// <o> NRFX_PDM_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_PDM_CONFIG_IRQ_PRIORITY
#define NRFX_PDM_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_PDM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_PDM_CONFIG_LOG_ENABLED
#define NRFX_PDM_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_PDM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_PDM_CONFIG_DEBUG_COLOR
#define NRFX_PDM_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_PDM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_PDM_CONFIG_INFO_COLOR
#define NRFX_PDM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PDM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_PDM_CONFIG_LOG_LEVEL
#define NRFX_PDM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_PDM_CONFIG_MODE - Mode

// <0=> Stereo
// <1=> Mono
#ifndef NRFX_PDM_CONFIG_MODE
#define NRFX_PDM_CONFIG_MODE 1
#endif

// </e>
// <e> NRFX_POWER_ENABLED
//==========================================================
#ifndef NRFX_POWER_ENABLED
#define NRFX_POWER_ENABLED 0
#endif

// <q> NRFX_POWER_CONFIG_DEFAULT_DCDCEN - The default configuration of main DCDC regulator

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.
#ifndef NRFX_POWER_CONFIG_DEFAULT_DCDCEN
#define NRFX_POWER_CONFIG_DEFAULT_DCDCEN 0
#endif

// <q> NRFX_POWER_CONFIG_DEFAULT_DCDCENHV - The default configuration of High Voltage DCDC regulator

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.
#ifndef NRFX_POWER_CONFIG_DEFAULT_DCDCENHV
#define NRFX_POWER_CONFIG_DEFAULT_DCDCENHV 0
#endif

// <o> NRFX_POWER_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_POWER_CONFIG_IRQ_PRIORITY
#define NRFX_POWER_CONFIG_IRQ_PRIORITY 7
#endif

// </e>
// <e> NRFX_PPI_ENABLED
//==========================================================
#ifndef NRFX_PPI_ENABLED
#define NRFX_PPI_ENABLED 0
#endif

// <e> NRFX_PPI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_PPI_CONFIG_LOG_ENABLED
#define NRFX_PPI_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_PPI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_PPI_CONFIG_DEBUG_COLOR
#define NRFX_PPI_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_PPI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_PPI_CONFIG_INFO_COLOR
#define NRFX_PPI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PPI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_PPI_CONFIG_LOG_LEVEL
#define NRFX_PPI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> NRFX_PRS_ENABLED
//==========================================================
#ifndef NRFX_PRS_ENABLED
#define NRFX_PRS_ENABLED 0
#endif

// <q> NRFX_PRS_BOX_0_ENABLED - Enables box in the module.

#ifndef NRFX_PRS_BOX_0_ENABLED
#define NRFX_PRS_BOX_0_ENABLED 0
#endif

// <q> NRFX_PRS_BOX_1_ENABLED - Enables box 1 in the module.

#ifndef NRFX_PRS_BOX_1_ENABLED
#define NRFX_PRS_BOX_1_ENABLED 0
#endif

// <q> NRFX_PRS_BOX_2_ENABLED - Enables box 2 in the module.

#ifndef NRFX_PRS_BOX_2_ENABLED
#define NRFX_PRS_BOX_2_ENABLED 0
#endif

// <q> NRFX_PRS_BOX_3_ENABLED - Enables box 3 in the module.

#ifndef NRFX_PRS_BOX_3_ENABLED
#define NRFX_PRS_BOX_3_ENABLED 0
#endif

// <q> NRFX_PRS_BOX_4_ENABLED - Enables box 4 in the module.

#ifndef NRFX_PRS_BOX_4_ENABLED
#define NRFX_PRS_BOX_4_ENABLED 0
#endif

// <e> NRFX_PRS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_PRS_CONFIG_LOG_ENABLED
#define NRFX_PRS_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_PRS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_PRS_CONFIG_DEBUG_COLOR
#define NRFX_PRS_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_PRS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_PRS_CONFIG_INFO_COLOR
#define NRFX_PRS_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PRS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_PRS_CONFIG_LOG_LEVEL
#define NRFX_PRS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> NRFX_PWM_ENABLED
//==========================================================
#ifndef NRFX_PWM_ENABLED
#define NRFX_PWM_ENABLED 0
#endif

// <q> NRFX_PWM0_ENABLED - Enable PWM0 instance

#ifndef NRFX_PWM0_ENABLED
#define NRFX_PWM0_ENABLED 0
#endif

// <q> NRFX_PWM1_ENABLED - Enable PWM1 instance

#ifndef NRFX_PWM1_ENABLED
#define NRFX_PWM1_ENABLED 0
#endif

// <q> NRFX_PWM2_ENABLED - Enable PWM2 instance

#ifndef NRFX_PWM2_ENABLED
#define NRFX_PWM2_ENABLED 0
#endif

// <q> NRFX_PWM3_ENABLED - Enable PWM3 instance

#ifndef NRFX_PWM3_ENABLED
#define NRFX_PWM3_ENABLED 0
#endif

// <e> NRFX_PWM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_PWM_CONFIG_LOG_ENABLED
#define NRFX_PWM_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_PWM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_PWM_CONFIG_DEBUG_COLOR
#define NRFX_PWM_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_PWM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_PWM_CONFIG_INFO_COLOR
#define NRFX_PWM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PWM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_PWM_CONFIG_LOG_LEVEL
#define NRFX_PWM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_PWM_DEFAULT_CONFIG_BASE_CLOCK - Base clock

// <0=> 16
// <1=> 8
// <2=> 4
// <3=> 2
// <4=> 1
// <5=> 500
// <6=> 250
// <7=> 125
#ifndef NRFX_PWM_DEFAULT_CONFIG_BASE_CLOCK
#define NRFX_PWM_DEFAULT_CONFIG_BASE_CLOCK 4
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_COUNT_MODE - Count mode

// <0=> Up
// <1=> Up
#ifndef NRFX_PWM_DEFAULT_CONFIG_COUNT_MODE
#define NRFX_PWM_DEFAULT_CONFIG_COUNT_MODE 0
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_PWM_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_PWM_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_LOAD_MODE - Load mode

// <0=> Common
// <1=> Grouped
// <2=> Individual
// <3=> Waveform
#ifndef NRFX_PWM_DEFAULT_CONFIG_LOAD_MODE
#define NRFX_PWM_DEFAULT_CONFIG_LOAD_MODE 0
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT0_PIN - Out0 pin 0-31

#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT0_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT0_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT1_PIN - Out1 pin 0-31

#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT1_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT1_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT2_PIN - Out2 pin 0-31

#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT2_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT2_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT3_PIN - Out3 pin 0-31

#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT3_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT3_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_STEP_MODE - Step mode

// <0=> Auto
// <1=> Triggered
#ifndef NRFX_PWM_DEFAULT_CONFIG_STEP_MODE
#define NRFX_PWM_DEFAULT_CONFIG_STEP_MODE 0
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_TOP_VALUE - Top value

#ifndef NRFX_PWM_DEFAULT_CONFIG_TOP_VALUE
#define NRFX_PWM_DEFAULT_CONFIG_TOP_VALUE 1000
#endif

// <e> NRFX_PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
//==========================================================
#ifndef NRFX_PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define NRFX_PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// <o> NRFX_PWM_NRF52_ANOMALY_109_EGU_INSTANCE - EGU instance used by the nRF52 Anomaly 109 workaround for PWM.

// <0=> EGU0
// <1=> EGU1
// <2=> EGU2
// <3=> EGU3
// <4=> EGU4
// <5=> EGU5
#ifndef NRFX_PWM_NRF52_ANOMALY_109_EGU_INSTANCE
#define NRFX_PWM_NRF52_ANOMALY_109_EGU_INSTANCE 5
#endif

// </e>
// </e>
// <e> NRFX_QDEC_ENABLED
//==========================================================
#ifndef NRFX_QDEC_ENABLED
#define NRFX_QDEC_ENABLED 0
#endif

// <q> NRFX_QDEC_CONFIG_DBFEN - Debouncing enable

#ifndef NRFX_QDEC_CONFIG_DBFEN
#define NRFX_QDEC_CONFIG_DBFEN 0
#endif

// <o> NRFX_QDEC_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_QDEC_CONFIG_IRQ_PRIORITY
#define NRFX_QDEC_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_QDEC_CONFIG_LEDPOL - LED polarity

// <0=> Active
// <1=> Active
#ifndef NRFX_QDEC_CONFIG_LEDPOL
#define NRFX_QDEC_CONFIG_LEDPOL 1
#endif

// <o> NRFX_QDEC_CONFIG_LEDPRE - LED pre

#ifndef NRFX_QDEC_CONFIG_LEDPRE
#define NRFX_QDEC_CONFIG_LEDPRE 511
#endif

// <e> NRFX_QDEC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_QDEC_CONFIG_LOG_ENABLED
#define NRFX_QDEC_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_QDEC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_QDEC_CONFIG_DEBUG_COLOR
#define NRFX_QDEC_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_QDEC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_QDEC_CONFIG_INFO_COLOR
#define NRFX_QDEC_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_QDEC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_QDEC_CONFIG_LOG_LEVEL
#define NRFX_QDEC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_QDEC_CONFIG_PIO_A - A pin 0-31

#ifndef NRFX_QDEC_CONFIG_PIO_A
#define NRFX_QDEC_CONFIG_PIO_A 31
#endif

// <o> NRFX_QDEC_CONFIG_PIO_B - B pin 0-31

#ifndef NRFX_QDEC_CONFIG_PIO_B
#define NRFX_QDEC_CONFIG_PIO_B 31
#endif

// <o> NRFX_QDEC_CONFIG_PIO_LED - LED pin 0-31

#ifndef NRFX_QDEC_CONFIG_PIO_LED
#define NRFX_QDEC_CONFIG_PIO_LED 31
#endif

// <o> NRFX_QDEC_CONFIG_REPORTPER - Report period

// <0=> 10
// <1=> 40
// <2=> 80
// <3=> 120
// <4=> 160
// <5=> 200
// <6=> 240
// <7=> 280
#ifndef NRFX_QDEC_CONFIG_REPORTPER
#define NRFX_QDEC_CONFIG_REPORTPER 0
#endif

// <q> NRFX_QDEC_CONFIG_SAMPLE_INTEN - Sample ready interrupt enable

#ifndef NRFX_QDEC_CONFIG_SAMPLE_INTEN
#define NRFX_QDEC_CONFIG_SAMPLE_INTEN 0
#endif

// <o> NRFX_QDEC_CONFIG_SAMPLEPER - Sample period

// <0=> 128
// <1=> 256
// <2=> 512
// <3=> 1024
// <4=> 2048
// <5=> 4096
// <6=> 8192
// <7=> 16384
#ifndef NRFX_QDEC_CONFIG_SAMPLEPER
#define NRFX_QDEC_CONFIG_SAMPLEPER 7
#endif

// </e>
// <h> nrfx_qspi
//==========================================================
#ifndef nrfx_qspi
#define nrfx_qspi 
#endif

// </h>
// <e> NRFX_QSPI_ENABLED
//==========================================================
#ifndef NRFX_QSPI_ENABLED
#define NRFX_QSPI_ENABLED 0
#endif

// <o> NRFX_QSPI_CONFIG_ADDRMODE - Addressing mode.

// <0=> 24bit
// <1=> 32bit
#ifndef NRFX_QSPI_CONFIG_ADDRMODE
#define NRFX_QSPI_CONFIG_ADDRMODE 0
#endif

// <o> NRFX_QSPI_CONFIG_FREQUENCY - Frequency divider.

// <0=> 32MHz/1
// <1=> 32MHz/2
// <2=> 32MHz/3
// <3=> 32MHz/4
// <4=> 32MHz/5
// <5=> 32MHz/6
// <6=> 32MHz/7
// <7=> 32MHz/8
// <8=> 32MHz/9
// <9=> 32MHz/10
// <10=> 32MHz/11
// <11=> 32MHz/12
// <12=> 32MHz/13
// <13=> 32MHz/14
// <14=> 32MHz/15
// <15=> 32MHz/16
#ifndef NRFX_QSPI_CONFIG_FREQUENCY
#define NRFX_QSPI_CONFIG_FREQUENCY NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <o> NRFX_QSPI_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_QSPI_CONFIG_IRQ_PRIORITY
#define NRFX_QSPI_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_QSPI_CONFIG_MODE - SPI mode.

// <0=> Mode
// <1=> Mode
#ifndef NRFX_QSPI_CONFIG_MODE
#define NRFX_QSPI_CONFIG_MODE 0
#endif

// <o> NRFX_QSPI_CONFIG_READOC - Number of data lines and opcode used for reading.

// <0=> FastRead
// <1=> Read2O
// <2=> Read2IO
// <3=> Read4O
// <4=> Read4IO
#ifndef NRFX_QSPI_CONFIG_READOC
#define NRFX_QSPI_CONFIG_READOC 0
#endif

// <o> NRFX_QSPI_CONFIG_SCK_DELAY - tSHSL, tWHSL and tSHWL in number of 16 MHz periods (62.5 ns). 0-255

#ifndef NRFX_QSPI_CONFIG_SCK_DELAY
#define NRFX_QSPI_CONFIG_SCK_DELAY 1
#endif

// <o> NRFX_QSPI_CONFIG_WRITEOC - Number of data lines and opcode used for writing.

// <0=> PP
// <1=> PP2O
// <2=> PP4O
// <3=> PP4IO
#ifndef NRFX_QSPI_CONFIG_WRITEOC
#define NRFX_QSPI_CONFIG_WRITEOC 0
#endif

// <o> NRFX_QSPI_CONFIG_XIP_OFFSET - Address offset in the external memory for Execute in Place operation.

#ifndef NRFX_QSPI_CONFIG_XIP_OFFSET
#define NRFX_QSPI_CONFIG_XIP_OFFSET 0
#endif

// </e>
// <e> NRFX_RNG_ENABLED
//==========================================================
#ifndef NRFX_RNG_ENABLED
#define NRFX_RNG_ENABLED 0
#endif

// <q> NRFX_RNG_CONFIG_ERROR_CORRECTION - Error correction

#ifndef NRFX_RNG_CONFIG_ERROR_CORRECTION
#define NRFX_RNG_CONFIG_ERROR_CORRECTION 0
#endif

// <o> NRFX_RNG_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_RNG_CONFIG_IRQ_PRIORITY
#define NRFX_RNG_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_RNG_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_RNG_CONFIG_LOG_ENABLED
#define NRFX_RNG_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_RNG_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_RNG_CONFIG_DEBUG_COLOR
#define NRFX_RNG_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_RNG_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_RNG_CONFIG_INFO_COLOR
#define NRFX_RNG_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_RNG_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_RNG_CONFIG_LOG_LEVEL
#define NRFX_RNG_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> NRFX_RTC_ENABLED
//==========================================================
#ifndef NRFX_RTC_ENABLED
#define NRFX_RTC_ENABLED 0
#endif

// <q> NRFX_RTC0_ENABLED - Enable RTC0 instance

#ifndef NRFX_RTC0_ENABLED
#define NRFX_RTC0_ENABLED 0
#endif

// <q> NRFX_RTC1_ENABLED - Enable RTC1 instance

#ifndef NRFX_RTC1_ENABLED
#define NRFX_RTC1_ENABLED 0
#endif

// <q> NRFX_RTC2_ENABLED - Enable RTC2 instance

#ifndef NRFX_RTC2_ENABLED
#define NRFX_RTC2_ENABLED 0
#endif

// <e> NRFX_RTC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_RTC_CONFIG_LOG_ENABLED
#define NRFX_RTC_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_RTC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_RTC_CONFIG_DEBUG_COLOR
#define NRFX_RTC_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_RTC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_RTC_CONFIG_INFO_COLOR
#define NRFX_RTC_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_RTC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_RTC_CONFIG_LOG_LEVEL
#define NRFX_RTC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_RTC_DEFAULT_CONFIG_FREQUENCY - Frequency 16-32768

#ifndef NRFX_RTC_DEFAULT_CONFIG_FREQUENCY
#define NRFX_RTC_DEFAULT_CONFIG_FREQUENCY 32768
#endif

// <o> NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <q> NRFX_RTC_DEFAULT_CONFIG_RELIABLE - Ensures safe compare event triggering

#ifndef NRFX_RTC_DEFAULT_CONFIG_RELIABLE
#define NRFX_RTC_DEFAULT_CONFIG_RELIABLE 0
#endif

// <o> NRFX_RTC_MAXIMUM_LATENCY_US - Maximum possible time[us] in highest priority interrupt

#ifndef NRFX_RTC_MAXIMUM_LATENCY_US
#define NRFX_RTC_MAXIMUM_LATENCY_US 2000
#endif

// </e>
// <e> NRFX_SAADC_ENABLED
//==========================================================
#ifndef NRFX_SAADC_ENABLED
#define NRFX_SAADC_ENABLED 0
#endif

// <o> NRFX_SAADC_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_SAADC_CONFIG_IRQ_PRIORITY
#define NRFX_SAADC_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_SAADC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_SAADC_CONFIG_LOG_ENABLED
#define NRFX_SAADC_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_SAADC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_SAADC_CONFIG_DEBUG_COLOR
#define NRFX_SAADC_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_SAADC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_SAADC_CONFIG_INFO_COLOR
#define NRFX_SAADC_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SAADC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_SAADC_CONFIG_LOG_LEVEL
#define NRFX_SAADC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> NRFX_SAADC_CONFIG_LP_MODE - Enabling low power mode

#ifndef NRFX_SAADC_CONFIG_LP_MODE
#define NRFX_SAADC_CONFIG_LP_MODE 0
#endif

// <o> NRFX_SAADC_CONFIG_OVERSAMPLE - Sample period

// <0=> Disabled
// <1=> 2x
// <2=> 4x
// <3=> 8x
// <4=> 16x
// <5=> 32x
// <6=> 64x
// <7=> 128x
// <8=> 256x
#ifndef NRFX_SAADC_CONFIG_OVERSAMPLE
#define NRFX_SAADC_CONFIG_OVERSAMPLE 0
#endif

// <o> NRFX_SAADC_CONFIG_RESOLUTION - Resolution

// <0=> 8
// <1=> 10
// <2=> 12
// <3=> 14
#ifndef NRFX_SAADC_CONFIG_RESOLUTION
#define NRFX_SAADC_CONFIG_RESOLUTION 1
#endif

// </e>
// <e> NRFX_SPI_ENABLED
//==========================================================
#ifndef NRFX_SPI_ENABLED
#define NRFX_SPI_ENABLED 0
#endif

// <q> NRFX_SPI0_ENABLED - Enable SPI0 instance

#ifndef NRFX_SPI0_ENABLED
#define NRFX_SPI0_ENABLED 0
#endif

// <q> NRFX_SPI1_ENABLED - Enable SPI1 instance

#ifndef NRFX_SPI1_ENABLED
#define NRFX_SPI1_ENABLED 0
#endif

// <q> NRFX_SPI2_ENABLED - Enable SPI2 instance

#ifndef NRFX_SPI2_ENABLED
#define NRFX_SPI2_ENABLED 0
#endif

// <e> NRFX_SPI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_SPI_CONFIG_LOG_ENABLED
#define NRFX_SPI_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_SPI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_SPI_CONFIG_DEBUG_COLOR
#define NRFX_SPI_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_SPI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_SPI_CONFIG_INFO_COLOR
#define NRFX_SPI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SPI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_SPI_CONFIG_LOG_LEVEL
#define NRFX_SPI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_SPI_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_SPI_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_SPI_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_SPI_MISO_PULL_CFG - MISO pin pull configuration.

// <0=> NRF_GPIO_PIN_NOPULL
// <1=> NRF_GPIO_PIN_PULLDOWN
// <3=> NRF_GPIO_PIN_PULLUP
#ifndef NRFX_SPI_MISO_PULL_CFG
#define NRFX_SPI_MISO_PULL_CFG 1
#endif

// </e>
// <e> NRFX_SPIM_ENABLED
//==========================================================
#ifndef NRFX_SPIM_ENABLED
#define NRFX_SPIM_ENABLED 0
#endif

// <q> NRFX_SPIM0_ENABLED - Enable SPIM0 instance

#ifndef NRFX_SPIM0_ENABLED
#define NRFX_SPIM0_ENABLED 0
#endif

// <q> NRFX_SPIM1_ENABLED - Enable SPIM1 instance

#ifndef NRFX_SPIM1_ENABLED
#define NRFX_SPIM1_ENABLED 0
#endif

// <q> NRFX_SPIM2_ENABLED - Enable SPIM2 instance

#ifndef NRFX_SPIM2_ENABLED
#define NRFX_SPIM2_ENABLED 0
#endif

// <q> NRFX_SPIM3_ENABLED - Enable SPIM3 instance

#ifndef NRFX_SPIM3_ENABLED
#define NRFX_SPIM3_ENABLED 0
#endif

// <e> NRFX_SPIM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_SPIM_CONFIG_LOG_ENABLED
#define NRFX_SPIM_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_SPIM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_SPIM_CONFIG_DEBUG_COLOR
#define NRFX_SPIM_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_SPIM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_SPIM_CONFIG_INFO_COLOR
#define NRFX_SPIM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SPIM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_SPIM_CONFIG_LOG_LEVEL
#define NRFX_SPIM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_SPIM_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_SPIM_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_SPIM_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <q> NRFX_SPIM_EXTENDED_ENABLED - Enable extended SPIM features

#ifndef NRFX_SPIM_EXTENDED_ENABLED
#define NRFX_SPIM_EXTENDED_ENABLED 0
#endif

// <o> NRFX_SPIM_MISO_PULL_CFG - MISO pin pull configuration.

// <0=> NRF_GPIO_PIN_NOPULL
// <1=> NRF_GPIO_PIN_PULLDOWN
// <3=> NRF_GPIO_PIN_PULLUP
#ifndef NRFX_SPIM_MISO_PULL_CFG
#define NRFX_SPIM_MISO_PULL_CFG 1
#endif

// <q> NRFX_SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED - Enables nRF52 anomaly 109 workaround for SPIM.

// <i> https://infocenter.nordicsemi.com/
#ifndef NRFX_SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define NRFX_SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>
// <e> NRFX_SPIS_ENABLED
//==========================================================
#ifndef NRFX_SPIS_ENABLED
#define NRFX_SPIS_ENABLED 0
#endif

// <q> NRFX_SPIS0_ENABLED - Enable SPIS0 instance

#ifndef NRFX_SPIS0_ENABLED
#define NRFX_SPIS0_ENABLED 0
#endif

// <q> NRFX_SPIS1_ENABLED - Enable SPIS1 instance

#ifndef NRFX_SPIS1_ENABLED
#define NRFX_SPIS1_ENABLED 0
#endif

// <q> NRFX_SPIS2_ENABLED - Enable SPIS2 instance

#ifndef NRFX_SPIS2_ENABLED
#define NRFX_SPIS2_ENABLED 0
#endif

// <e> NRFX_SPIS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_SPIS_CONFIG_LOG_ENABLED
#define NRFX_SPIS_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_SPIS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_SPIS_CONFIG_DEBUG_COLOR
#define NRFX_SPIS_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_SPIS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_SPIS_CONFIG_INFO_COLOR
#define NRFX_SPIS_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SPIS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_SPIS_CONFIG_LOG_LEVEL
#define NRFX_SPIS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_SPIS_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_SPIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_SPIS_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_SPIS_DEFAULT_DEF - SPIS default DEF character 0-255

#ifndef NRFX_SPIS_DEFAULT_DEF
#define NRFX_SPIS_DEFAULT_DEF 255
#endif

// <o> NRFX_SPIS_DEFAULT_ORC - SPIS default ORC character 0-255

#ifndef NRFX_SPIS_DEFAULT_ORC
#define NRFX_SPIS_DEFAULT_ORC 255
#endif

// <q> NRFX_SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED - Enables nRF52 Anomaly 109 workaround for SPIS.

// <i> enabled as well.
#ifndef NRFX_SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define NRFX_SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>
// <e> NRFX_SWI_ENABLED
//==========================================================
#ifndef NRFX_SWI_ENABLED
#define NRFX_SWI_ENABLED 0
#endif

// <q> NRFX_EGU_ENABLED - Enable EGU support

#ifndef NRFX_EGU_ENABLED
#define NRFX_EGU_ENABLED 0
#endif

// <q> NRFX_SWI0_DISABLED - Exclude SWI0 from being utilized by the driver

#ifndef NRFX_SWI0_DISABLED
#define NRFX_SWI0_DISABLED 0
#endif

// <q> NRFX_SWI1_DISABLED - Exclude SWI1 from being utilized by the driver

#ifndef NRFX_SWI1_DISABLED
#define NRFX_SWI1_DISABLED 0
#endif

// <q> NRFX_SWI2_DISABLED - Exclude SWI2 from being utilized by the driver

#ifndef NRFX_SWI2_DISABLED
#define NRFX_SWI2_DISABLED 0
#endif

// <q> NRFX_SWI3_DISABLED - Exclude SWI3 from being utilized by the driver

#ifndef NRFX_SWI3_DISABLED
#define NRFX_SWI3_DISABLED 0
#endif

// <q> NRFX_SWI4_DISABLED - Exclude SWI4 from being utilized by the driver

#ifndef NRFX_SWI4_DISABLED
#define NRFX_SWI4_DISABLED 0
#endif

// <q> NRFX_SWI5_DISABLED - Exclude SWI5 from being utilized by the driver

#ifndef NRFX_SWI5_DISABLED
#define NRFX_SWI5_DISABLED 0
#endif

// <e> NRFX_SWI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_SWI_CONFIG_LOG_ENABLED
#define NRFX_SWI_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_SWI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_SWI_CONFIG_DEBUG_COLOR
#define NRFX_SWI_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_SWI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_SWI_CONFIG_INFO_COLOR
#define NRFX_SWI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SWI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_SWI_CONFIG_LOG_LEVEL
#define NRFX_SWI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </e>
// <q> NRFX_SYSTICK_ENABLED - nrfx_systick - ARM(R) SysTick driver

#ifndef NRFX_SYSTICK_ENABLED
#define NRFX_SYSTICK_ENABLED 0
#endif

// <e> NRFX_TIMER_ENABLED
//==========================================================
#ifndef NRFX_TIMER_ENABLED
#define NRFX_TIMER_ENABLED 0
#endif

// <q> NRFX_TIMER0_ENABLED - Enable TIMER0 instance

#ifndef NRFX_TIMER0_ENABLED
#define NRFX_TIMER0_ENABLED 0
#endif

// <q> NRFX_TIMER1_ENABLED - Enable TIMER1 instance

#ifndef NRFX_TIMER1_ENABLED
#define NRFX_TIMER1_ENABLED 0
#endif

// <q> NRFX_TIMER2_ENABLED - Enable TIMER2 instance

#ifndef NRFX_TIMER2_ENABLED
#define NRFX_TIMER2_ENABLED 0
#endif

// <q> NRFX_TIMER3_ENABLED - Enable TIMER3 instance

#ifndef NRFX_TIMER3_ENABLED
#define NRFX_TIMER3_ENABLED 0
#endif

// <q> NRFX_TIMER4_ENABLED - Enable TIMER4 instance

#ifndef NRFX_TIMER4_ENABLED
#define NRFX_TIMER4_ENABLED 0
#endif

// <e> NRFX_TIMER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_TIMER_CONFIG_LOG_ENABLED
#define NRFX_TIMER_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_TIMER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_TIMER_CONFIG_DEBUG_COLOR
#define NRFX_TIMER_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_TIMER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_TIMER_CONFIG_INFO_COLOR
#define NRFX_TIMER_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TIMER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_TIMER_CONFIG_LOG_LEVEL
#define NRFX_TIMER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_TIMER_DEFAULT_CONFIG_BIT_WIDTH - Timer counter bit width

// <0=> 16
// <1=> 8
// <2=> 24
// <3=> 32
#ifndef NRFX_TIMER_DEFAULT_CONFIG_BIT_WIDTH
#define NRFX_TIMER_DEFAULT_CONFIG_BIT_WIDTH 0
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_FREQUENCY - Timer frequency if in Timer mode

// <0=> 16
// <1=> 8
// <2=> 4
// <3=> 2
// <4=> 1
// <5=> 500
// <6=> 250
// <7=> 125
// <8=> 62.5
// <9=> 31.25
#ifndef NRFX_TIMER_DEFAULT_CONFIG_FREQUENCY
#define NRFX_TIMER_DEFAULT_CONFIG_FREQUENCY 0
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_TIMER_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TIMER_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_MODE - Timer mode or operation

// <0=> Timer
// <1=> Counter
#ifndef NRFX_TIMER_DEFAULT_CONFIG_MODE
#define NRFX_TIMER_DEFAULT_CONFIG_MODE 0
#endif

// </e>
// <e> NRFX_TWI_ENABLED
//==========================================================
#ifndef NRFX_TWI_ENABLED
#define NRFX_TWI_ENABLED 0
#endif

// <q> NRFX_TWI0_ENABLED - Enable TWI0 instance

#ifndef NRFX_TWI0_ENABLED
#define NRFX_TWI0_ENABLED 0
#endif

// <q> NRFX_TWI1_ENABLED - Enable TWI1 instance

#ifndef NRFX_TWI1_ENABLED
#define NRFX_TWI1_ENABLED 0
#endif

// <e> NRFX_TWI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_TWI_CONFIG_LOG_ENABLED
#define NRFX_TWI_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_TWI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_TWI_CONFIG_DEBUG_COLOR
#define NRFX_TWI_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_TWI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_TWI_CONFIG_INFO_COLOR
#define NRFX_TWI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TWI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_TWI_CONFIG_LOG_LEVEL
#define NRFX_TWI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_TWI_DEFAULT_CONFIG_FREQUENCY - Frequency

// <26738688=> 100k
// <67108864=> 250k
// <104857600=> 400k
#ifndef NRFX_TWI_DEFAULT_CONFIG_FREQUENCY
#define NRFX_TWI_DEFAULT_CONFIG_FREQUENCY 26738688
#endif

// <q> NRFX_TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT - Enables bus holding after uninit

#ifndef NRFX_TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT
#define NRFX_TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
#endif

// <o> NRFX_TWI_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_TWI_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TWI_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// </e>
// <e> NRFX_TWIM_ENABLED
//==========================================================
#ifndef NRFX_TWIM_ENABLED
#define NRFX_TWIM_ENABLED 0
#endif

// <q> NRFX_TWIM0_ENABLED - Enable TWIM0 instance

#ifndef NRFX_TWIM0_ENABLED
#define NRFX_TWIM0_ENABLED 0
#endif

// <q> NRFX_TWIM1_ENABLED - Enable TWIM1 instance

#ifndef NRFX_TWIM1_ENABLED
#define NRFX_TWIM1_ENABLED 0
#endif

// <e> NRFX_TWIM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_TWIM_CONFIG_LOG_ENABLED
#define NRFX_TWIM_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_TWIM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_TWIM_CONFIG_DEBUG_COLOR
#define NRFX_TWIM_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_TWIM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_TWIM_CONFIG_INFO_COLOR
#define NRFX_TWIM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TWIM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_TWIM_CONFIG_LOG_LEVEL
#define NRFX_TWIM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_TWIM_DEFAULT_CONFIG_FREQUENCY - Frequency

// <26738688=> 100k
// <67108864=> 250k
// <104857600=> 400k
#ifndef NRFX_TWIM_DEFAULT_CONFIG_FREQUENCY
#define NRFX_TWIM_DEFAULT_CONFIG_FREQUENCY 26738688
#endif

// <q> NRFX_TWIM_DEFAULT_CONFIG_HOLD_BUS_UNINIT - Enables bus holding after uninit

#ifndef NRFX_TWIM_DEFAULT_CONFIG_HOLD_BUS_UNINIT
#define NRFX_TWIM_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
#endif

// <o> NRFX_TWIM_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_TWIM_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TWIM_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <q> NRFX_TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED - Enables nRF52 anomaly 109 workaround for TWIM.

// <i> Anomaly 109 Addendum located at https://infocenter.nordicsemi.com/
#ifndef NRFX_TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define NRFX_TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>
// <e> NRFX_TWIS_ENABLED
//==========================================================
#ifndef NRFX_TWIS_ENABLED
#define NRFX_TWIS_ENABLED 0
#endif

// <q> NRFX_TWIS0_ENABLED - Enable TWIS0 instance

#ifndef NRFX_TWIS0_ENABLED
#define NRFX_TWIS0_ENABLED 0
#endif

// <q> NRFX_TWIS1_ENABLED - Enable TWIS1 instance

#ifndef NRFX_TWIS1_ENABLED
#define NRFX_TWIS1_ENABLED 0
#endif

// <q> NRFX_TWIS_ASSUME_INIT_AFTER_RESET_ONLY - Assume that any instance would be initialized only once

// <i> Optimization flag. Registers used by TWIS are shared by other peripherals. Normally, during initialization driver tries to clear all registers to known state before doing the initialization itself. This gives initialization safe procedure, no matter when it would be called. If you activate TWIS only once and do never uninitialize it - set this flag to 1 what gives more optimal code.
#ifndef NRFX_TWIS_ASSUME_INIT_AFTER_RESET_ONLY
#define NRFX_TWIS_ASSUME_INIT_AFTER_RESET_ONLY 0
#endif

// <e> NRFX_TWIS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_TWIS_CONFIG_LOG_ENABLED
#define NRFX_TWIS_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_TWIS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_TWIS_CONFIG_DEBUG_COLOR
#define NRFX_TWIS_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_TWIS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_TWIS_CONFIG_INFO_COLOR
#define NRFX_TWIS_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TWIS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_TWIS_CONFIG_LOG_LEVEL
#define NRFX_TWIS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_TWIS_DEFAULT_CONFIG_ADDR0 - Address0

#ifndef NRFX_TWIS_DEFAULT_CONFIG_ADDR0
#define NRFX_TWIS_DEFAULT_CONFIG_ADDR0 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_ADDR1 - Address1

#ifndef NRFX_TWIS_DEFAULT_CONFIG_ADDR1
#define NRFX_TWIS_DEFAULT_CONFIG_ADDR1 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_TWIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TWIS_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_SCL_PULL - SCL pin pull configuration

// <0=> Disabled
// <1=> Pull
// <3=> Pull
#ifndef NRFX_TWIS_DEFAULT_CONFIG_SCL_PULL
#define NRFX_TWIS_DEFAULT_CONFIG_SCL_PULL 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_SDA_PULL - SDA pin pull configuration

// <0=> Disabled
// <1=> Pull
// <3=> Pull
#ifndef NRFX_TWIS_DEFAULT_CONFIG_SDA_PULL
#define NRFX_TWIS_DEFAULT_CONFIG_SDA_PULL 0
#endif

// <q> NRFX_TWIS_NO_SYNC_MODE - Remove support for synchronous mode

// <i> Synchronous mode would be used in specific situations. And it uses some additional code and data memory to safely process state machine by polling it in status functions. If this functionality is not required it may be disabled to free some resources.
#ifndef NRFX_TWIS_NO_SYNC_MODE
#define NRFX_TWIS_NO_SYNC_MODE 0
#endif

// </e>
// <e> NRFX_UART_ENABLED
//==========================================================
#ifndef NRFX_UART_ENABLED
#define NRFX_UART_ENABLED 0
#endif

// <o> NRFX_UART0_ENABLED - Enable UART0 instance

#ifndef NRFX_UART0_ENABLED
#define NRFX_UART0_ENABLED 0
#endif

// <e> NRFX_UART_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_UART_CONFIG_LOG_ENABLED
#define NRFX_UART_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_UART_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_UART_CONFIG_DEBUG_COLOR
#define NRFX_UART_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_UART_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_UART_CONFIG_INFO_COLOR
#define NRFX_UART_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_UART_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_UART_CONFIG_LOG_LEVEL
#define NRFX_UART_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_UART_DEFAULT_CONFIG_BAUDRATE - Default Baudrate

// <323584=> 1200
// <643072=> 2400
// <1290240=> 4800
// <2576384=> 9600
// <3866624=> 14400
// <5152768=> 19200
// <7729152=> 28800
// <8388608=> 31250
// <10309632=> 38400
// <15007744=> 56000
// <15462400=> 57600
// <20615168=> 76800
// <30924800=> 115200
// <61845504=> 230400
// <67108864=> 250000
// <123695104=> 460800
// <247386112=> 921600
// <268435456=> 1000000
#ifndef NRFX_UART_DEFAULT_CONFIG_BAUDRATE
#define NRFX_UART_DEFAULT_CONFIG_BAUDRATE 30924800
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_HWFC - Hardware Flow Control

// <0=> Disabled
// <1=> Enabled
#ifndef NRFX_UART_DEFAULT_CONFIG_HWFC
#define NRFX_UART_DEFAULT_CONFIG_HWFC 0
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_UART_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_UART_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_PARITY - Parity

// <0=> Excluded
// <14=> Included
#ifndef NRFX_UART_DEFAULT_CONFIG_PARITY
#define NRFX_UART_DEFAULT_CONFIG_PARITY 0
#endif

// </e>
// <e> NRFX_UARTE_ENABLED
//==========================================================
#ifndef NRFX_UARTE_ENABLED
#define NRFX_UARTE_ENABLED 0
#endif

// <o> NRFX_UARTE0_ENABLED - Enable UARTE0 instance

#ifndef NRFX_UARTE0_ENABLED
#define NRFX_UARTE0_ENABLED 0
#endif

// <o> NRFX_UARTE1_ENABLED - Enable UARTE1 instance

#ifndef NRFX_UARTE1_ENABLED
#define NRFX_UARTE1_ENABLED 0
#endif

// <e> NRFX_UARTE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_UARTE_CONFIG_LOG_ENABLED
#define NRFX_UARTE_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_UARTE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_UARTE_CONFIG_DEBUG_COLOR
#define NRFX_UARTE_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_UARTE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_UARTE_CONFIG_INFO_COLOR
#define NRFX_UARTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_UARTE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_UARTE_CONFIG_LOG_LEVEL
#define NRFX_UARTE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE - Default Baudrate

// <323584=> 1200
// <643072=> 2400
// <1290240=> 4800
// <2576384=> 9600
// <3862528=> 14400
// <5152768=> 19200
// <7716864=> 28800
// <8388608=> 31250
// <10289152=> 38400
// <15007744=> 56000
// <15400960=> 57600
// <20615168=> 76800
// <30801920=> 115200
// <61865984=> 230400
// <67108864=> 250000
// <121634816=> 460800
// <251658240=> 921600
// <268435456=> 1000000
#ifndef NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE
#define NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE 30801920
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_HWFC - Hardware Flow Control

// <0=> Disabled
// <1=> Enabled
#ifndef NRFX_UARTE_DEFAULT_CONFIG_HWFC
#define NRFX_UARTE_DEFAULT_CONFIG_HWFC 0
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_UARTE_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_UARTE_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_PARITY - Parity

// <0=> Excluded
// <14=> Included
#ifndef NRFX_UARTE_DEFAULT_CONFIG_PARITY
#define NRFX_UARTE_DEFAULT_CONFIG_PARITY 0
#endif

// </e>
// <h> nrfx_usbd
//==========================================================
#ifndef nrfx_usbd
#define nrfx_usbd 
#endif

// </h>
// <e> NRFX_USBD_ENABLED
//==========================================================
#ifndef NRFX_USBD_ENABLED
#define NRFX_USBD_ENABLED 0
#endif

// <q> NRFX_USBD_CONFIG_DMASCHEDULER_ISO_BOOST - Give priority to isochronous transfers

// <i> function is called, so the option is independent of the algorithm chosen.
#ifndef NRFX_USBD_CONFIG_DMASCHEDULER_ISO_BOOST
#define NRFX_USBD_CONFIG_DMASCHEDULER_ISO_BOOST 0
#endif

// <o> NRFX_USBD_CONFIG_DMASCHEDULER_MODE - USBD DMA scheduler working scheme

// <0=> Prioritized
// <1=> Round
#ifndef NRFX_USBD_CONFIG_DMASCHEDULER_MODE
#define NRFX_USBD_CONFIG_DMASCHEDULER_MODE 0
#endif

// <o> NRFX_USBD_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_USBD_CONFIG_IRQ_PRIORITY
#define NRFX_USBD_CONFIG_IRQ_PRIORITY 6
#endif

// <q> NRFX_USBD_CONFIG_ISO_IN_ZLP - Respond to an IN token on ISO IN endpoint with ZLP when no data is ready

// <i> Else, there will be no response.
#ifndef NRFX_USBD_CONFIG_ISO_IN_ZLP
#define NRFX_USBD_CONFIG_ISO_IN_ZLP 0
#endif

// </e>
// <e> NRFX_WDT_ENABLED
//==========================================================
#ifndef NRFX_WDT_ENABLED
#define NRFX_WDT_ENABLED 0
#endif

// <o> NRFX_WDT_CONFIG_BEHAVIOUR - WDT behavior in CPU SLEEP or HALT mode

// <1=> Run
// <8=> Pause
// <9=> Run
// <0=> Pause
#ifndef NRFX_WDT_CONFIG_BEHAVIOUR
#define NRFX_WDT_CONFIG_BEHAVIOUR 1
#endif

// <o> NRFX_WDT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NRFX_WDT_CONFIG_IRQ_PRIORITY
#define NRFX_WDT_CONFIG_IRQ_PRIORITY 7
#endif

// <e> NRFX_WDT_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_WDT_CONFIG_LOG_ENABLED
#define NRFX_WDT_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_WDT_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_WDT_CONFIG_DEBUG_COLOR
#define NRFX_WDT_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_WDT_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_WDT_CONFIG_INFO_COLOR
#define NRFX_WDT_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_WDT_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_WDT_CONFIG_LOG_LEVEL
#define NRFX_WDT_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NRFX_WDT_CONFIG_NO_IRQ - Remove WDT IRQ handling from WDT driver

// <0=> Include
// <1=> Remove
#ifndef NRFX_WDT_CONFIG_NO_IRQ
#define NRFX_WDT_CONFIG_NO_IRQ 0
#endif

// <o> NRFX_WDT_CONFIG_RELOAD_VALUE - Reload value 15-4294967295

#ifndef NRFX_WDT_CONFIG_RELOAD_VALUE
#define NRFX_WDT_CONFIG_RELOAD_VALUE 2000
#endif

// </e>
// <e> PDM_ENABLED
//==========================================================
#ifndef PDM_ENABLED
#define PDM_ENABLED 0
#endif

// <o> PDM_CONFIG_CLOCK_FREQ - Clock frequency

// <134217728=> 1000k
// <138412032=> 1032k
// <142606336=> 1067k
#ifndef PDM_CONFIG_CLOCK_FREQ
#define PDM_CONFIG_CLOCK_FREQ 138412032
#endif

// <o> PDM_CONFIG_EDGE - Edge

// <0=> Left
// <1=> Left
#ifndef PDM_CONFIG_EDGE
#define PDM_CONFIG_EDGE 0
#endif

// <o> PDM_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef PDM_CONFIG_IRQ_PRIORITY
#define PDM_CONFIG_IRQ_PRIORITY 7
#endif

// <o> PDM_CONFIG_MODE - Mode

// <0=> Stereo
// <1=> Mono
#ifndef PDM_CONFIG_MODE
#define PDM_CONFIG_MODE 1
#endif

// </e>
// <e> POWER_ENABLED
//==========================================================
#ifndef POWER_ENABLED
#define POWER_ENABLED 0
#endif

// <q> POWER_CONFIG_DEFAULT_DCDCEN - The default configuration of main DCDC regulator

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.
#ifndef POWER_CONFIG_DEFAULT_DCDCEN
#define POWER_CONFIG_DEFAULT_DCDCEN 0
#endif

// <q> POWER_CONFIG_DEFAULT_DCDCENHV - The default configuration of High Voltage DCDC regulator

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.
#ifndef POWER_CONFIG_DEFAULT_DCDCENHV
#define POWER_CONFIG_DEFAULT_DCDCENHV 0
#endif

// <o> POWER_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef POWER_CONFIG_IRQ_PRIORITY
#define POWER_CONFIG_IRQ_PRIORITY 7
#endif

// </e>
// <q> PPI_ENABLED - nrf_drv_ppi - PPI peripheral driver - legacy layer

#ifndef PPI_ENABLED
#define PPI_ENABLED 0
#endif

// <e> PWM_ENABLED
//==========================================================
#ifndef PWM_ENABLED
#define PWM_ENABLED 0
#endif

// <q> PWM0_ENABLED - Enable PWM0 instance

#ifndef PWM0_ENABLED
#define PWM0_ENABLED 0
#endif

// <q> PWM1_ENABLED - Enable PWM1 instance

#ifndef PWM1_ENABLED
#define PWM1_ENABLED 0
#endif

// <q> PWM2_ENABLED - Enable PWM2 instance

#ifndef PWM2_ENABLED
#define PWM2_ENABLED 0
#endif

// <q> PWM3_ENABLED - Enable PWM3 instance

#ifndef PWM3_ENABLED
#define PWM3_ENABLED 0
#endif

// <o> PWM_DEFAULT_CONFIG_BASE_CLOCK - Base clock

// <0=> 16
// <1=> 8
// <2=> 4
// <3=> 2
// <4=> 1
// <5=> 500
// <6=> 250
// <7=> 125
#ifndef PWM_DEFAULT_CONFIG_BASE_CLOCK
#define PWM_DEFAULT_CONFIG_BASE_CLOCK 4
#endif

// <o> PWM_DEFAULT_CONFIG_COUNT_MODE - Count mode

// <0=> Up
// <1=> Up
#ifndef PWM_DEFAULT_CONFIG_COUNT_MODE
#define PWM_DEFAULT_CONFIG_COUNT_MODE 0
#endif

// <o> PWM_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef PWM_DEFAULT_CONFIG_IRQ_PRIORITY
#define PWM_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> PWM_DEFAULT_CONFIG_LOAD_MODE - Load mode

// <0=> Common
// <1=> Grouped
// <2=> Individual
// <3=> Waveform
#ifndef PWM_DEFAULT_CONFIG_LOAD_MODE
#define PWM_DEFAULT_CONFIG_LOAD_MODE 0
#endif

// <o> PWM_DEFAULT_CONFIG_OUT0_PIN - Out0 pin 0-31

#ifndef PWM_DEFAULT_CONFIG_OUT0_PIN
#define PWM_DEFAULT_CONFIG_OUT0_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_OUT1_PIN - Out1 pin 0-31

#ifndef PWM_DEFAULT_CONFIG_OUT1_PIN
#define PWM_DEFAULT_CONFIG_OUT1_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_OUT2_PIN - Out2 pin 0-31

#ifndef PWM_DEFAULT_CONFIG_OUT2_PIN
#define PWM_DEFAULT_CONFIG_OUT2_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_OUT3_PIN - Out3 pin 0-31

#ifndef PWM_DEFAULT_CONFIG_OUT3_PIN
#define PWM_DEFAULT_CONFIG_OUT3_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_STEP_MODE - Step mode

// <0=> Auto
// <1=> Triggered
#ifndef PWM_DEFAULT_CONFIG_STEP_MODE
#define PWM_DEFAULT_CONFIG_STEP_MODE 0
#endif

// <o> PWM_DEFAULT_CONFIG_TOP_VALUE - Top value

#ifndef PWM_DEFAULT_CONFIG_TOP_VALUE
#define PWM_DEFAULT_CONFIG_TOP_VALUE 1000
#endif

// <e> PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
//==========================================================
#ifndef PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// <o> PWM_NRF52_ANOMALY_109_EGU_INSTANCE - EGU instance used by the nRF52 Anomaly 109 workaround for PWM.

// <0=> EGU0
// <1=> EGU1
// <2=> EGU2
// <3=> EGU3
// <4=> EGU4
// <5=> EGU5
#ifndef PWM_NRF52_ANOMALY_109_EGU_INSTANCE
#define PWM_NRF52_ANOMALY_109_EGU_INSTANCE 5
#endif

// </e>
// </e>
// <e> QDEC_ENABLED
//==========================================================
#ifndef QDEC_ENABLED
#define QDEC_ENABLED 0
#endif

// <q> QDEC_CONFIG_DBFEN - Debouncing enable

#ifndef QDEC_CONFIG_DBFEN
#define QDEC_CONFIG_DBFEN 0
#endif

// <o> QDEC_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef QDEC_CONFIG_IRQ_PRIORITY
#define QDEC_CONFIG_IRQ_PRIORITY 7
#endif

// <o> QDEC_CONFIG_LEDPOL - LED polarity

// <0=> Active
// <1=> Active
#ifndef QDEC_CONFIG_LEDPOL
#define QDEC_CONFIG_LEDPOL 1
#endif

// <o> QDEC_CONFIG_LEDPRE - LED pre

#ifndef QDEC_CONFIG_LEDPRE
#define QDEC_CONFIG_LEDPRE 511
#endif

// <o> QDEC_CONFIG_PIO_A - A pin 0-31

#ifndef QDEC_CONFIG_PIO_A
#define QDEC_CONFIG_PIO_A 31
#endif

// <o> QDEC_CONFIG_PIO_B - B pin 0-31

#ifndef QDEC_CONFIG_PIO_B
#define QDEC_CONFIG_PIO_B 31
#endif

// <o> QDEC_CONFIG_PIO_LED - LED pin 0-31

#ifndef QDEC_CONFIG_PIO_LED
#define QDEC_CONFIG_PIO_LED 31
#endif

// <o> QDEC_CONFIG_REPORTPER - Report period

// <0=> 10
// <1=> 40
// <2=> 80
// <3=> 120
// <4=> 160
// <5=> 200
// <6=> 240
// <7=> 280
#ifndef QDEC_CONFIG_REPORTPER
#define QDEC_CONFIG_REPORTPER 0
#endif

// <q> QDEC_CONFIG_SAMPLE_INTEN - Sample ready interrupt enable

#ifndef QDEC_CONFIG_SAMPLE_INTEN
#define QDEC_CONFIG_SAMPLE_INTEN 0
#endif

// <o> QDEC_CONFIG_SAMPLEPER - Sample period

// <0=> 128
// <1=> 256
// <2=> 512
// <3=> 1024
// <4=> 2048
// <5=> 4096
// <6=> 8192
// <7=> 16384
#ifndef QDEC_CONFIG_SAMPLEPER
#define QDEC_CONFIG_SAMPLEPER 7
#endif

// </e>
// <e> QSPI_ENABLED
//==========================================================
#ifndef QSPI_ENABLED
#define QSPI_ENABLED 0
#endif

// <o> QSPI_CONFIG_ADDRMODE - Addressing mode.

// <0=> 24bit
// <1=> 32bit
#ifndef QSPI_CONFIG_ADDRMODE
#define QSPI_CONFIG_ADDRMODE 0
#endif

// <o> QSPI_CONFIG_FREQUENCY - Frequency divider.

// <0=> 32MHz/1
// <1=> 32MHz/2
// <2=> 32MHz/3
// <3=> 32MHz/4
// <4=> 32MHz/5
// <5=> 32MHz/6
// <6=> 32MHz/7
// <7=> 32MHz/8
// <8=> 32MHz/9
// <9=> 32MHz/10
// <10=> 32MHz/11
// <11=> 32MHz/12
// <12=> 32MHz/13
// <13=> 32MHz/14
// <14=> 32MHz/15
// <15=> 32MHz/16
#ifndef QSPI_CONFIG_FREQUENCY
#define QSPI_CONFIG_FREQUENCY NRF_QSPI_PIN_NOT_CONNECTED
#endif

// <o> QSPI_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef QSPI_CONFIG_IRQ_PRIORITY
#define QSPI_CONFIG_IRQ_PRIORITY 7
#endif

// <o> QSPI_CONFIG_MODE - SPI mode.

// <0=> Mode
// <1=> Mode
#ifndef QSPI_CONFIG_MODE
#define QSPI_CONFIG_MODE 0
#endif

// <o> QSPI_CONFIG_READOC - Number of data lines and opcode used for reading.

// <0=> FastRead
// <1=> Read2O
// <2=> Read2IO
// <3=> Read4O
// <4=> Read4IO
#ifndef QSPI_CONFIG_READOC
#define QSPI_CONFIG_READOC 0
#endif

// <o> QSPI_CONFIG_SCK_DELAY - tSHSL, tWHSL and tSHWL in number of 16 MHz periods (62.5 ns). 0-255

#ifndef QSPI_CONFIG_SCK_DELAY
#define QSPI_CONFIG_SCK_DELAY 1
#endif

// <o> QSPI_CONFIG_WRITEOC - Number of data lines and opcode used for writing.

// <0=> PP
// <1=> PP2O
// <2=> PP4O
// <3=> PP4IO
#ifndef QSPI_CONFIG_WRITEOC
#define QSPI_CONFIG_WRITEOC 0
#endif

// <o> QSPI_CONFIG_XIP_OFFSET - Address offset in the external memory for Execute in Place operation.

#ifndef QSPI_CONFIG_XIP_OFFSET
#define QSPI_CONFIG_XIP_OFFSET 0
#endif

// </e>
// <e> RNG_ENABLED
//==========================================================
#ifndef RNG_ENABLED
#define RNG_ENABLED 0
#endif

// <q> RNG_CONFIG_ERROR_CORRECTION - Error correction

#ifndef RNG_CONFIG_ERROR_CORRECTION
#define RNG_CONFIG_ERROR_CORRECTION 0
#endif

// <o> RNG_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef RNG_CONFIG_IRQ_PRIORITY
#define RNG_CONFIG_IRQ_PRIORITY 7
#endif

// <o> RNG_CONFIG_POOL_SIZE - Pool size

#ifndef RNG_CONFIG_POOL_SIZE
#define RNG_CONFIG_POOL_SIZE 64
#endif

// </e>
// <e> RTC_ENABLED
//==========================================================
#ifndef RTC_ENABLED
#define RTC_ENABLED 0
#endif

// <o> NRF_MAXIMUM_LATENCY_US - Maximum possible time[us] in highest priority interrupt

#ifndef NRF_MAXIMUM_LATENCY_US
#define NRF_MAXIMUM_LATENCY_US 2000
#endif

// <q> RTC0_ENABLED - Enable RTC0 instance

#ifndef RTC0_ENABLED
#define RTC0_ENABLED 0
#endif

// <q> RTC1_ENABLED - Enable RTC1 instance

#ifndef RTC1_ENABLED
#define RTC1_ENABLED 0
#endif

// <q> RTC2_ENABLED - Enable RTC2 instance

#ifndef RTC2_ENABLED
#define RTC2_ENABLED 0
#endif

// <o> RTC_DEFAULT_CONFIG_FREQUENCY - Frequency 16-32768

#ifndef RTC_DEFAULT_CONFIG_FREQUENCY
#define RTC_DEFAULT_CONFIG_FREQUENCY 32768
#endif

// <o> RTC_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef RTC_DEFAULT_CONFIG_IRQ_PRIORITY
#define RTC_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <q> RTC_DEFAULT_CONFIG_RELIABLE - Ensures safe compare event triggering

#ifndef RTC_DEFAULT_CONFIG_RELIABLE
#define RTC_DEFAULT_CONFIG_RELIABLE 0
#endif

// </e>
// <e> SAADC_ENABLED
//==========================================================
#ifndef SAADC_ENABLED
#define SAADC_ENABLED 0
#endif

// <o> SAADC_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef SAADC_CONFIG_IRQ_PRIORITY
#define SAADC_CONFIG_IRQ_PRIORITY 7
#endif

// <q> SAADC_CONFIG_LP_MODE - Enabling low power mode

#ifndef SAADC_CONFIG_LP_MODE
#define SAADC_CONFIG_LP_MODE 0
#endif

// <o> SAADC_CONFIG_OVERSAMPLE - Sample period

// <0=> Disabled
// <1=> 2x
// <2=> 4x
// <3=> 8x
// <4=> 16x
// <5=> 32x
// <6=> 64x
// <7=> 128x
// <8=> 256x
#ifndef SAADC_CONFIG_OVERSAMPLE
#define SAADC_CONFIG_OVERSAMPLE 0
#endif

// <o> SAADC_CONFIG_RESOLUTION - Resolution

// <0=> 8
// <1=> 10
// <2=> 12
// <3=> 14
#ifndef SAADC_CONFIG_RESOLUTION
#define SAADC_CONFIG_RESOLUTION 1
#endif

// </e>
// <e> SPI_ENABLED
//==========================================================
#ifndef SPI_ENABLED
#define SPI_ENABLED 0
#endif

// <o> NRF_SPI_DRV_MISO_PULLUP_CFG - MISO PIN pull-up configuration.

// <0=> NRF_GPIO_PIN_NOPULL
// <1=> NRF_GPIO_PIN_PULLDOWN
// <3=> NRF_GPIO_PIN_PULLUP
#ifndef NRF_SPI_DRV_MISO_PULLUP_CFG
#define NRF_SPI_DRV_MISO_PULLUP_CFG 1
#endif

// <e> SPI0_ENABLED
//==========================================================
#ifndef SPI0_ENABLED
#define SPI0_ENABLED 0
#endif

// <q> SPI0_USE_EASY_DMA - Use EasyDMA

#ifndef SPI0_USE_EASY_DMA
#define SPI0_USE_EASY_DMA 0
#endif

// </e>
// <e> SPI1_ENABLED
//==========================================================
#ifndef SPI1_ENABLED
#define SPI1_ENABLED 0
#endif

// <q> SPI1_USE_EASY_DMA - Use EasyDMA

#ifndef SPI1_USE_EASY_DMA
#define SPI1_USE_EASY_DMA 0
#endif

// </e>
// <e> SPI2_ENABLED
//==========================================================
#ifndef SPI2_ENABLED
#define SPI2_ENABLED 0
#endif

// <q> SPI2_USE_EASY_DMA - Use EasyDMA

#ifndef SPI2_USE_EASY_DMA
#define SPI2_USE_EASY_DMA 0
#endif

// </e>
// <o> SPI_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef SPI_DEFAULT_CONFIG_IRQ_PRIORITY
#define SPI_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <q> SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED - Enables nRF52 anomaly 109 workaround for SPIM.

// <i> https://infocenter.nordicsemi.com/
#ifndef SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>
// <e> SPIS_ENABLED
//==========================================================
#ifndef SPIS_ENABLED
#define SPIS_ENABLED 0
#endif

// <q> SPIS0_ENABLED - Enable SPIS0 instance

#ifndef SPIS0_ENABLED
#define SPIS0_ENABLED 0
#endif

// <q> SPIS1_ENABLED - Enable SPIS1 instance

#ifndef SPIS1_ENABLED
#define SPIS1_ENABLED 0
#endif

// <q> SPIS2_ENABLED - Enable SPIS2 instance

#ifndef SPIS2_ENABLED
#define SPIS2_ENABLED 0
#endif

// <o> SPIS_DEFAULT_BIT_ORDER - SPIS default bit order

// <0=> MSB
// <1=> LSB
#ifndef SPIS_DEFAULT_BIT_ORDER
#define SPIS_DEFAULT_BIT_ORDER 0
#endif

// <o> SPIS_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef SPIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define SPIS_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> SPIS_DEFAULT_DEF - SPIS default DEF character 0-255

#ifndef SPIS_DEFAULT_DEF
#define SPIS_DEFAULT_DEF 255
#endif

// <o> SPIS_DEFAULT_MODE - Mode

// <0=> MODE_0
// <1=> MODE_1
// <2=> MODE_2
// <3=> MODE_3
#ifndef SPIS_DEFAULT_MODE
#define SPIS_DEFAULT_MODE 0
#endif

// <o> SPIS_DEFAULT_ORC - SPIS default ORC character 0-255

#ifndef SPIS_DEFAULT_ORC
#define SPIS_DEFAULT_ORC 255
#endif

// <q> SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED - Enables nRF52 Anomaly 109 workaround for SPIS.

// <i> enabled as well.
#ifndef SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>
// <q> SYSTICK_ENABLED - nrf_drv_systick - ARM(R) SysTick driver - legacy layer

#ifndef SYSTICK_ENABLED
#define SYSTICK_ENABLED 0
#endif

// <e> TIMER_ENABLED
//==========================================================
#ifndef TIMER_ENABLED
#define TIMER_ENABLED 0
#endif

// <q> TIMER0_ENABLED - Enable TIMER0 instance

#ifndef TIMER0_ENABLED
#define TIMER0_ENABLED 0
#endif

// <q> TIMER1_ENABLED - Enable TIMER1 instance

#ifndef TIMER1_ENABLED
#define TIMER1_ENABLED 0
#endif

// <q> TIMER2_ENABLED - Enable TIMER2 instance

#ifndef TIMER2_ENABLED
#define TIMER2_ENABLED 0
#endif

// <q> TIMER3_ENABLED - Enable TIMER3 instance

#ifndef TIMER3_ENABLED
#define TIMER3_ENABLED 0
#endif

// <q> TIMER4_ENABLED - Enable TIMER4 instance

#ifndef TIMER4_ENABLED
#define TIMER4_ENABLED 0
#endif

// <o> TIMER_DEFAULT_CONFIG_BIT_WIDTH - Timer counter bit width

// <0=> 16
// <1=> 8
// <2=> 24
// <3=> 32
#ifndef TIMER_DEFAULT_CONFIG_BIT_WIDTH
#define TIMER_DEFAULT_CONFIG_BIT_WIDTH 0
#endif

// <o> TIMER_DEFAULT_CONFIG_FREQUENCY - Timer frequency if in Timer mode

// <0=> 16
// <1=> 8
// <2=> 4
// <3=> 2
// <4=> 1
// <5=> 500
// <6=> 250
// <7=> 125
// <8=> 62.5
// <9=> 31.25
#ifndef TIMER_DEFAULT_CONFIG_FREQUENCY
#define TIMER_DEFAULT_CONFIG_FREQUENCY 0
#endif

// <o> TIMER_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef TIMER_DEFAULT_CONFIG_IRQ_PRIORITY
#define TIMER_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> TIMER_DEFAULT_CONFIG_MODE - Timer mode or operation

// <0=> Timer
// <1=> Counter
#ifndef TIMER_DEFAULT_CONFIG_MODE
#define TIMER_DEFAULT_CONFIG_MODE 0
#endif

// </e>
// <e> TWI_ENABLED
//==========================================================
#ifndef TWI_ENABLED
#define TWI_ENABLED 0
#endif

// <e> TWI0_ENABLED
//==========================================================
#ifndef TWI0_ENABLED
#define TWI0_ENABLED 0
#endif

// <q> TWI0_USE_EASY_DMA - Use EasyDMA (if present)

#ifndef TWI0_USE_EASY_DMA
#define TWI0_USE_EASY_DMA 0
#endif

// </e>
// <e> TWI1_ENABLED
//==========================================================
#ifndef TWI1_ENABLED
#define TWI1_ENABLED 0
#endif

// <q> TWI1_USE_EASY_DMA - Use EasyDMA (if present)

#ifndef TWI1_USE_EASY_DMA
#define TWI1_USE_EASY_DMA 0
#endif

// </e>
// <q> TWI_DEFAULT_CONFIG_CLR_BUS_INIT - Enables bus clearing procedure during init

#ifndef TWI_DEFAULT_CONFIG_CLR_BUS_INIT
#define TWI_DEFAULT_CONFIG_CLR_BUS_INIT 0
#endif

// <o> TWI_DEFAULT_CONFIG_FREQUENCY - Frequency

// <26738688=> 100k
// <67108864=> 250k
// <104857600=> 400k
#ifndef TWI_DEFAULT_CONFIG_FREQUENCY
#define TWI_DEFAULT_CONFIG_FREQUENCY 26738688
#endif

// <q> TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT - Enables bus holding after uninit

#ifndef TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT
#define TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
#endif

// <o> TWI_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef TWI_DEFAULT_CONFIG_IRQ_PRIORITY
#define TWI_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <q> TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED - Enables nRF52 anomaly 109 workaround for TWIM.

// <i> Anomaly 109 Addendum located at https://infocenter.nordicsemi.com/
#ifndef TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>
// <e> TWIS_ENABLED
//==========================================================
#ifndef TWIS_ENABLED
#define TWIS_ENABLED 0
#endif

// <q> TWIS0_ENABLED - Enable TWIS0 instance

#ifndef TWIS0_ENABLED
#define TWIS0_ENABLED 0
#endif

// <q> TWIS1_ENABLED - Enable TWIS1 instance

#ifndef TWIS1_ENABLED
#define TWIS1_ENABLED 0
#endif

// <q> TWIS_ASSUME_INIT_AFTER_RESET_ONLY - Assume that any instance would be initialized only once

// <i> Optimization flag. Registers used by TWIS are shared by other peripherals. Normally, during initialization driver tries to clear all registers to known state before doing the initialization itself. This gives initialization safe procedure, no matter when it would be called. If you activate TWIS only once and do never uninitialize it - set this flag to 1 what gives more optimal code.
#ifndef TWIS_ASSUME_INIT_AFTER_RESET_ONLY
#define TWIS_ASSUME_INIT_AFTER_RESET_ONLY 0
#endif

// <o> TWIS_DEFAULT_CONFIG_ADDR0 - Address0

#ifndef TWIS_DEFAULT_CONFIG_ADDR0
#define TWIS_DEFAULT_CONFIG_ADDR0 0
#endif

// <o> TWIS_DEFAULT_CONFIG_ADDR1 - Address1

#ifndef TWIS_DEFAULT_CONFIG_ADDR1
#define TWIS_DEFAULT_CONFIG_ADDR1 0
#endif

// <o> TWIS_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef TWIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define TWIS_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> TWIS_DEFAULT_CONFIG_SCL_PULL - SCL pin pull configuration

// <0=> Disabled
// <1=> Pull
// <3=> Pull
#ifndef TWIS_DEFAULT_CONFIG_SCL_PULL
#define TWIS_DEFAULT_CONFIG_SCL_PULL 0
#endif

// <o> TWIS_DEFAULT_CONFIG_SDA_PULL - SDA pin pull configuration

// <0=> Disabled
// <1=> Pull
// <3=> Pull
#ifndef TWIS_DEFAULT_CONFIG_SDA_PULL
#define TWIS_DEFAULT_CONFIG_SDA_PULL 0
#endif

// <q> TWIS_NO_SYNC_MODE - Remove support for synchronous mode

// <i> Synchronous mode would be used in specific situations. And it uses some additional code and data memory to safely process state machine by polling it in status functions. If this functionality is not required it may be disabled to free some resources.
#ifndef TWIS_NO_SYNC_MODE
#define TWIS_NO_SYNC_MODE 0
#endif

// </e>
// <e> UART_ENABLED
//==========================================================
#ifndef UART_ENABLED
#define UART_ENABLED 0
#endif

// <e> UART0_ENABLED
//==========================================================
#ifndef UART0_ENABLED
#define UART0_ENABLED 0
#endif

// <q> UART0_CONFIG_USE_EASY_DMA - Default setting for using EasyDMA

#ifndef UART0_CONFIG_USE_EASY_DMA
#define UART0_CONFIG_USE_EASY_DMA 0
#endif

// </e>
// <e> UART1_ENABLED
//==========================================================
#ifndef UART1_ENABLED
#define UART1_ENABLED 0
#endif

// </e>
// <o> UART_DEFAULT_CONFIG_BAUDRATE - Default Baudrate

// <323584=> 1200
// <643072=> 2400
// <1290240=> 4800
// <2576384=> 9600
// <3862528=> 14400
// <5152768=> 19200
// <7716864=> 28800
// <10289152=> 38400
// <15400960=> 57600
// <20615168=> 76800
// <30801920=> 115200
// <61865984=> 230400
// <67108864=> 250000
// <121634816=> 460800
// <251658240=> 921600
// <268435456=> 1000000
#ifndef UART_DEFAULT_CONFIG_BAUDRATE
#define UART_DEFAULT_CONFIG_BAUDRATE 30801920
#endif

// <o> UART_DEFAULT_CONFIG_HWFC - Hardware Flow Control

// <0=> Disabled
// <1=> Enabled
#ifndef UART_DEFAULT_CONFIG_HWFC
#define UART_DEFAULT_CONFIG_HWFC 0
#endif

// <o> UART_DEFAULT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef UART_DEFAULT_CONFIG_IRQ_PRIORITY
#define UART_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> UART_DEFAULT_CONFIG_PARITY - Parity

// <0=> Excluded
// <14=> Included
#ifndef UART_DEFAULT_CONFIG_PARITY
#define UART_DEFAULT_CONFIG_PARITY 0
#endif

// <q> UART_EASY_DMA_SUPPORT - Driver supporting EasyDMA

#ifndef UART_EASY_DMA_SUPPORT
#define UART_EASY_DMA_SUPPORT 0
#endif

// <q> UART_LEGACY_SUPPORT - Driver supporting Legacy mode

#ifndef UART_LEGACY_SUPPORT
#define UART_LEGACY_SUPPORT 0
#endif

// </e>
// <e> USBD_ENABLED
//==========================================================
#ifndef USBD_ENABLED
#define USBD_ENABLED 0
#endif

// <q> USBD_CONFIG_DMASCHEDULER_ISO_BOOST - Give priority to isochronous transfers

// <i> function is called, so the option is independent of the algorithm chosen.
#ifndef USBD_CONFIG_DMASCHEDULER_ISO_BOOST
#define USBD_CONFIG_DMASCHEDULER_ISO_BOOST 0
#endif

// <o> USBD_CONFIG_DMASCHEDULER_MODE - USBD SMA scheduler working scheme

// <0=> Prioritized
// <1=> Round
#ifndef USBD_CONFIG_DMASCHEDULER_MODE
#define USBD_CONFIG_DMASCHEDULER_MODE 0
#endif

// <o> USBD_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef USBD_CONFIG_IRQ_PRIORITY
#define USBD_CONFIG_IRQ_PRIORITY 7
#endif

// <q> USBD_CONFIG_ISO_IN_ZLP - Respond to an IN token on ISO IN endpoint with ZLP when no data is ready

// <i> NOTE: This option does not work on Engineering A chip.
#ifndef USBD_CONFIG_ISO_IN_ZLP
#define USBD_CONFIG_ISO_IN_ZLP 0
#endif

// </e>
// <e> WDT_ENABLED
//==========================================================
#ifndef WDT_ENABLED
#define WDT_ENABLED 0
#endif

// <o> WDT_CONFIG_BEHAVIOUR - WDT behavior in CPU SLEEP or HALT mode

// <1=> Run
// <8=> Pause
// <9=> Run
// <0=> Pause
#ifndef WDT_CONFIG_BEHAVIOUR
#define WDT_CONFIG_BEHAVIOUR 1
#endif

// <o> WDT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef WDT_CONFIG_IRQ_PRIORITY
#define WDT_CONFIG_IRQ_PRIORITY 7
#endif

// <o> WDT_CONFIG_RELOAD_VALUE - Reload value 15-4294967295

#ifndef WDT_CONFIG_RELOAD_VALUE
#define WDT_CONFIG_RELOAD_VALUE 2000
#endif

// </e>
// </h>
// <h> nRF_Drivers_External
//==========================================================
#ifndef nRF_Drivers_External
#define nRF_Drivers_External 
#endif

// <e> ILI9341_ENABLED
//==========================================================
#ifndef ILI9341_ENABLED
#define ILI9341_ENABLED 0
#endif

// <o> ILI9341_DC_PIN - Pin number 0-47

#ifndef ILI9341_DC_PIN
#define ILI9341_DC_PIN 20
#endif

// <o> ILI9341_HEIGHT - ILI9341 height 0-320

#ifndef ILI9341_HEIGHT
#define ILI9341_HEIGHT 320
#endif

// <o> ILI9341_SPI_INSTANCE 

// <0=> 
// <1=> 1
// <2=> 2
#ifndef ILI9341_SPI_INSTANCE
#define ILI9341_SPI_INSTANCE 0
#endif

// <o> ILI9341_WIDTH - ILI9341 width 0-240

#ifndef ILI9341_WIDTH
#define ILI9341_WIDTH 240
#endif

// <h> SPI_CONFIGURATION
//==========================================================
#ifndef SPI_CONFIGURATION
#define SPI_CONFIGURATION 
#endif

// <o> ILI9341_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef ILI9341_IRQ_PRIORITY
#define ILI9341_IRQ_PRIORITY 3
#endif

// <o> ILI9341_MISO_PIN - Pin number 0-47

#ifndef ILI9341_MISO_PIN
#define ILI9341_MISO_PIN 24
#endif

// <o> ILI9341_MOSI_PIN - Pin number 0-47

#ifndef ILI9341_MOSI_PIN
#define ILI9341_MOSI_PIN 23
#endif

// <o> ILI9341_SCK_PIN - Pin number 0-47

#ifndef ILI9341_SCK_PIN
#define ILI9341_SCK_PIN 25
#endif

// <o> ILI9341_SS_PIN - Pin number 0-47

#ifndef ILI9341_SS_PIN
#define ILI9341_SS_PIN 22
#endif

// <o> ST7735_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef ST7735_IRQ_PRIORITY
#define ST7735_IRQ_PRIORITY 3
#endif

// <o> ST7735_MISO_PIN - Pin number 0-47

#ifndef ST7735_MISO_PIN
#define ST7735_MISO_PIN 24
#endif

// <o> ST7735_MOSI_PIN - Pin number 0-47

#ifndef ST7735_MOSI_PIN
#define ST7735_MOSI_PIN 23
#endif

// <o> ST7735_SCK_PIN - Pin number 0-47

#ifndef ST7735_SCK_PIN
#define ST7735_SCK_PIN 25
#endif

// <o> ST7735_SS_PIN - Pin number 0-47

#ifndef ST7735_SS_PIN
#define ST7735_SS_PIN 22
#endif

// </h>
// </e>
// <q> NRF_TWI_SENSOR_ENABLED - nrf_twi_sensor - nRF TWI Sensor module

#ifndef NRF_TWI_SENSOR_ENABLED
#define NRF_TWI_SENSOR_ENABLED 0
#endif

// <e> ST7735_ENABLED
//==========================================================
#ifndef ST7735_ENABLED
#define ST7735_ENABLED 0
#endif

// <h> SPI_CONFIGURATION
//==========================================================
#ifndef SPI_CONFIGURATION
#define SPI_CONFIGURATION 
#endif

// <o> ILI9341_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef ILI9341_IRQ_PRIORITY
#define ILI9341_IRQ_PRIORITY 6
#endif

// <o> ILI9341_MISO_PIN - Pin number 0-47

#ifndef ILI9341_MISO_PIN
#define ILI9341_MISO_PIN 24
#endif

// <o> ILI9341_MOSI_PIN - Pin number 0-47

#ifndef ILI9341_MOSI_PIN
#define ILI9341_MOSI_PIN 23
#endif

// <o> ILI9341_SCK_PIN - Pin number 0-47

#ifndef ILI9341_SCK_PIN
#define ILI9341_SCK_PIN 25
#endif

// <o> ILI9341_SS_PIN - Pin number 0-47

#ifndef ILI9341_SS_PIN
#define ILI9341_SS_PIN 22
#endif

// <o> ST7735_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef ST7735_IRQ_PRIORITY
#define ST7735_IRQ_PRIORITY 6
#endif

// <o> ST7735_MISO_PIN - Pin number 0-47

#ifndef ST7735_MISO_PIN
#define ST7735_MISO_PIN 24
#endif

// <o> ST7735_MOSI_PIN - Pin number 0-47

#ifndef ST7735_MOSI_PIN
#define ST7735_MOSI_PIN 23
#endif

// <o> ST7735_SCK_PIN - Pin number 0-47

#ifndef ST7735_SCK_PIN
#define ST7735_SCK_PIN 25
#endif

// <o> ST7735_SS_PIN - Pin number 0-47

#ifndef ST7735_SS_PIN
#define ST7735_SS_PIN 22
#endif

// </h>
// <o> ST7735_DC_PIN - Pin number 0-47

#ifndef ST7735_DC_PIN
#define ST7735_DC_PIN 19
#endif

// <o> ST7735_HEIGHT - ST7735 height 0-162

#ifndef ST7735_HEIGHT
#define ST7735_HEIGHT 160
#endif

// <o> ST7735_SPI_INSTANCE 

// <0=> 
// <1=> 1
// <2=> 2
#ifndef ST7735_SPI_INSTANCE
#define ST7735_SPI_INSTANCE 0
#endif

// <o> ST7735_TAB_COLOR - Color of the tab attached to the screen.

// <0=> INITR_GREENTAB
// <1=> INITR_REDTAB
// <2=> INITR_BLACKTAB
// <3=> INITR_144GREENTAB
#ifndef ST7735_TAB_COLOR
#define ST7735_TAB_COLOR 0
#endif

// <o> ST7735_WIDTH - ST7735 width 0-132

#ifndef ST7735_WIDTH
#define ST7735_WIDTH 128
#endif

// </e>
// </h>
// <h> nRF_IoT
//==========================================================
#ifndef nRF_IoT
#define nRF_IoT 
#endif

// <h> background_dfu
//==========================================================
#ifndef background_dfu
#define background_dfu 
#endif

// <o> BACKGROUND_DFU_BLOCKS_PER_BUFFER - Maximum number of blocks that can be kept in RAM during DFU. 1-4096

#ifndef BACKGROUND_DFU_BLOCKS_PER_BUFFER
#define BACKGROUND_DFU_BLOCKS_PER_BUFFER 2
#endif

// <o> BACKGROUND_DFU_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef BACKGROUND_DFU_CONFIG_DEBUG_COLOR
#define BACKGROUND_DFU_CONFIG_DEBUG_COLOR 0
#endif

// <o> BACKGROUND_DFU_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef BACKGROUND_DFU_CONFIG_INFO_COLOR
#define BACKGROUND_DFU_CONFIG_INFO_COLOR 0
#endif

// <o> BACKGROUND_DFU_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef BACKGROUND_DFU_CONFIG_LOG_LEVEL
#define BACKGROUND_DFU_CONFIG_LOG_LEVEL 3
#endif

// <o> BACKGROUND_DFU_DEFAULT_BLOCK_SIZE - Block size used by background DFU. 1-4096

#ifndef BACKGROUND_DFU_DEFAULT_BLOCK_SIZE
#define BACKGROUND_DFU_DEFAULT_BLOCK_SIZE 512
#endif

// </h>
// <h> ble_6lowpan
//==========================================================
#ifndef ble_6lowpan
#define ble_6lowpan 
#endif

// <q> BLE_6LOWPAN_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef BLE_6LOWPAN_DISABLE_API_PARAM_CHECK
#define BLE_6LOWPAN_DISABLE_API_PARAM_CHECK 0
#endif

// <q> BLE_6LOWPAN_LEGACY_MODE - Enable legacy mode of IID derivation from Bluetooth Device Address and Link Layer address size determination. The legacy mode is not compatible with the RFC7668 sepcification. For the Linux Kernel versions higher or equal to 4.12 this define has to be set to 0, otherwise to 1.

#ifndef BLE_6LOWPAN_LEGACY_MODE
#define BLE_6LOWPAN_LEGACY_MODE 0
#endif

// <e> IOT_BLE_6LOWPAN_CONFIG_LOG_ENABLED
//==========================================================
#ifndef IOT_BLE_6LOWPAN_CONFIG_LOG_ENABLED
#define IOT_BLE_6LOWPAN_CONFIG_LOG_ENABLED 0
#endif

// <o> IOT_BLE_6LOWPAN_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_BLE_6LOWPAN_CONFIG_DEBUG_COLOR
#define IOT_BLE_6LOWPAN_CONFIG_DEBUG_COLOR 0
#endif

// <o> IOT_BLE_6LOWPAN_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_BLE_6LOWPAN_CONFIG_INFO_COLOR
#define IOT_BLE_6LOWPAN_CONFIG_INFO_COLOR 0
#endif

// <o> IOT_BLE_6LOWPAN_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef IOT_BLE_6LOWPAN_CONFIG_LOG_LEVEL
#define IOT_BLE_6LOWPAN_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </h>
// <h> coap_config
//==========================================================
#ifndef coap_config
#define coap_config 
#endif

// <o> COAP_ACK_RANDOM_FACTOR - Random factor to calculate the initial time-out value for a Confirmable message. 0-65535

// <i> COAP_MAX_TRANSMISSION_SPAN / COAP_MAX_RETRANSMIT_COUNT / COAP_ACK_TIMEOUT
#ifndef COAP_ACK_RANDOM_FACTOR
#define COAP_ACK_RANDOM_FACTOR 1
#endif

// <o> COAP_ACK_TIMEOUT - Minimum spacing before another retransmission. 0-65535

// <i> Max value should not exceed COAP_MAX_TRANSMISSION_SPAN / COAP_MAX_RETRANSMIT_COUNT.
#ifndef COAP_ACK_TIMEOUT
#define COAP_ACK_TIMEOUT 2
#endif

// <q> COAP_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef COAP_DISABLE_API_PARAM_CHECK
#define COAP_DISABLE_API_PARAM_CHECK 0
#endif

// <q> COAP_DISABLE_DTLS_API - Disable CoAPs API

#ifndef COAP_DISABLE_DTLS_API
#define COAP_DISABLE_DTLS_API 0
#endif

// <q> COAP_ENABLE_OBSERVE_CLIENT - Enable CoAP observe client role.

// <i> If enabled, the coap_observe module has to be included. It will enable the module with a table to store observable resources, and provide access to functions to register and unregister observable resources. The observable resources list is used to match incomming notifications to an application callback function.
#ifndef COAP_ENABLE_OBSERVE_CLIENT
#define COAP_ENABLE_OBSERVE_CLIENT 0
#endif

// <q> COAP_ENABLE_OBSERVE_SERVER - Enable CoAP observe server role.

// <i> If enabled the coap_observe module has to be included. It will enable the module with a table to store observers, and provide access to functions to register and unregister observers. The list can be traversed in order to send notifications to the observers.
#ifndef COAP_ENABLE_OBSERVE_SERVER
#define COAP_ENABLE_OBSERVE_SERVER 0
#endif

// <o> COAP_MAX_NUMBER_OF_OPTIONS - The maximum size of a smartCoAP message excluding the mandatory CoAP header. 1-65535

#ifndef COAP_MAX_NUMBER_OF_OPTIONS
#define COAP_MAX_NUMBER_OF_OPTIONS 8
#endif

// <o> COAP_MAX_RETRANSMIT_COUNT - Maximum number of transmit attempts for a Confirmable messages. 0-255

#ifndef COAP_MAX_RETRANSMIT_COUNT
#define COAP_MAX_RETRANSMIT_COUNT 1
#endif

// <o> COAP_MAX_TRANSMISSION_SPAN - Maximum time from the first transmission of a Confirmable message to its last retransmission. 0-65535

#ifndef COAP_MAX_TRANSMISSION_SPAN
#define COAP_MAX_TRANSMISSION_SPAN 10
#endif

// <o> COAP_MESSAGE_DATA_MAX_SIZE - The maximum size of a smartCoAP message excluding the mandatory CoAP header. 1-65535

#ifndef COAP_MESSAGE_DATA_MAX_SIZE
#define COAP_MESSAGE_DATA_MAX_SIZE 256
#endif

// <o> COAP_MESSAGE_QUEUE_SIZE - Maximum number of smartCoAP messages that can be in transmission at a time. 1-65535

// <i> smartCoAP uses the Memory Manager that is also used by the underlying transport protocol. Therefore, if you increase this value, you should also increase the number of buffers. Depending on the COAP_MESSAGE_DATA_MAX_SIZE + 4 byte CoAP header, you must increase either MEMORY_MANAGER_SMALL_BLOCK_COUNT or MEMORY_MANAGER_MEDIUM_BLOCK_COUNT to ensure that there are additional buffers for the CoAP message queue. Which macro must be increased, depends on the size of the buffer that is sufficient for the CoAP message.
#ifndef COAP_MESSAGE_QUEUE_SIZE
#define COAP_MESSAGE_QUEUE_SIZE 4
#endif

// <o> COAP_OBSERVE_MAX_NUM_OBSERVABLES - Maximum number of CoAP observable resources that a client can have active at any point of time. 0-255

// <i> The maximum number of observable resources to be registered by a client. For each observable resource added, it will increase the memory consumption of one coap_observable_t struct.
#ifndef COAP_OBSERVE_MAX_NUM_OBSERVABLES
#define COAP_OBSERVE_MAX_NUM_OBSERVABLES 0
#endif

// <o> COAP_OBSERVE_MAX_NUM_OBSERVERS - Maximum number of CoAP observers that a server can have active at any point of time. 0-255

// <i> The maximum number of observers to be registered by a server. For each observer added, it will increase the memory consumption of one coap_observer_t struct.
#ifndef COAP_OBSERVE_MAX_NUM_OBSERVERS
#define COAP_OBSERVE_MAX_NUM_OBSERVERS 0
#endif

// <o> COAP_PORT_COUNT - Number of local ports used by CoAP. 0-UDP6_MAX_SOCKET_COUNT

// <i> The max number of client/server ports used by the application. One socket will be created for each port.
#ifndef COAP_PORT_COUNT
#define COAP_PORT_COUNT 1
#endif

// <o> COAP_RESOURCE_MAX_DEPTH - Maximum number of CoAP resource levels. 1-255

// <i> The maximum number of resource depth levels uCoAP will use. The number will be used when adding resource to the resource structure, or when traversing the resources for a matching resource name given in a request. Each level added will increase the stack usage runtime with 4 bytes.
#ifndef COAP_RESOURCE_MAX_DEPTH
#define COAP_RESOURCE_MAX_DEPTH 5
#endif

// <o> COAP_RESOURCE_MAX_NAME_LEN - Maximum length of CoAP resource verbose name. 1-65535

// <i> The maximum length of resource name that can be supplied from the application.
#ifndef COAP_RESOURCE_MAX_NAME_LEN
#define COAP_RESOURCE_MAX_NAME_LEN 19
#endif

// <o> COAP_VERSION - CoAP version number. 0-3

// <i> The version of CoAP which all CoAP messages will be populated with.
#ifndef COAP_VERSION
#define COAP_VERSION 1
#endif

// <e> IOT_COAP_CONFIG_LOG_ENABLED
//==========================================================
#ifndef IOT_COAP_CONFIG_LOG_ENABLED
#define IOT_COAP_CONFIG_LOG_ENABLED 0
#endif

// <o> IOT_COAP_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_COAP_CONFIG_DEBUG_COLOR
#define IOT_COAP_CONFIG_DEBUG_COLOR 0
#endif

// <o> IOT_COAP_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_COAP_CONFIG_INFO_COLOR
#define IOT_COAP_CONFIG_INFO_COLOR 0
#endif

// <o> IOT_COAP_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef IOT_COAP_CONFIG_LOG_LEVEL
#define IOT_COAP_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </h>
// <o> COAP_DTLS_MAX_REMOTE_SESSION - coap_transport_dtls - Nordic's smartCoAP library - DTLS secure transport 0-65535

#ifndef COAP_DTLS_MAX_REMOTE_SESSION
#define COAP_DTLS_MAX_REMOTE_SESSION 1
#endif

// <h> iot_context_manager
//==========================================================
#ifndef iot_context_manager
#define iot_context_manager 
#endif

// <e> IOT_CONTEXT_MANAGER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef IOT_CONTEXT_MANAGER_CONFIG_LOG_ENABLED
#define IOT_CONTEXT_MANAGER_CONFIG_LOG_ENABLED 0
#endif

// <o> IOT_CONTEXT_MANAGER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_CONTEXT_MANAGER_CONFIG_DEBUG_COLOR
#define IOT_CONTEXT_MANAGER_CONFIG_DEBUG_COLOR 0
#endif

// <o> IOT_CONTEXT_MANAGER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_CONTEXT_MANAGER_CONFIG_INFO_COLOR
#define IOT_CONTEXT_MANAGER_CONFIG_INFO_COLOR 0
#endif

// <o> IOT_CONTEXT_MANAGER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef IOT_CONTEXT_MANAGER_CONFIG_LOG_LEVEL
#define IOT_CONTEXT_MANAGER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> IOT_CONTEXT_MANAGER_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef IOT_CONTEXT_MANAGER_DISABLE_API_PARAM_CHECK
#define IOT_CONTEXT_MANAGER_DISABLE_API_PARAM_CHECK 0
#endif

// <o> IOT_CONTEXT_MANAGER_MAX_CONTEXTS - Maximum number of supported context identifiers. 1-16

// <i> Maximum value of 16 is preferable to correct decompression.
#ifndef IOT_CONTEXT_MANAGER_MAX_CONTEXTS
#define IOT_CONTEXT_MANAGER_MAX_CONTEXTS 16
#endif

// <o> IOT_CONTEXT_MANAGER_MAX_TABLES - Maximum number of supported context's table. 1-255

// <i> If value is equal to BLE_IPSP_MAX_CHANNELS then all interface will have its own table which is preferable. This value should be less or equal to BLE_IPSP_MAX_CHANNELS.
#ifndef IOT_CONTEXT_MANAGER_MAX_TABLES
#define IOT_CONTEXT_MANAGER_MAX_TABLES 1
#endif

// </h>
// <h> iot_file
//==========================================================
#ifndef iot_file
#define iot_file 
#endif

// <e> IOT_FILE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef IOT_FILE_CONFIG_LOG_ENABLED
#define IOT_FILE_CONFIG_LOG_ENABLED 0
#endif

// <o> IOT_FILE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_FILE_CONFIG_DEBUG_COLOR
#define IOT_FILE_CONFIG_DEBUG_COLOR 0
#endif

// <o> IOT_FILE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_FILE_CONFIG_INFO_COLOR
#define IOT_FILE_CONFIG_INFO_COLOR 0
#endif

// <o> IOT_FILE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef IOT_FILE_CONFIG_LOG_LEVEL
#define IOT_FILE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> IOT_FILE_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef IOT_FILE_DISABLE_API_PARAM_CHECK
#define IOT_FILE_DISABLE_API_PARAM_CHECK 0
#endif

// </h>
// <h> iot_pbuffer
//==========================================================
#ifndef iot_pbuffer
#define iot_pbuffer 
#endif

// <e> IOT_PBUFFER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef IOT_PBUFFER_CONFIG_LOG_ENABLED
#define IOT_PBUFFER_CONFIG_LOG_ENABLED 0
#endif

// <o> IOT_PBUFFER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_PBUFFER_CONFIG_DEBUG_COLOR
#define IOT_PBUFFER_CONFIG_DEBUG_COLOR 0
#endif

// <o> IOT_PBUFFER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IOT_PBUFFER_CONFIG_INFO_COLOR
#define IOT_PBUFFER_CONFIG_INFO_COLOR 0
#endif

// <o> IOT_PBUFFER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef IOT_PBUFFER_CONFIG_LOG_LEVEL
#define IOT_PBUFFER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> IOT_PBUFFER_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef IOT_PBUFFER_DISABLE_API_PARAM_CHECK
#define IOT_PBUFFER_DISABLE_API_PARAM_CHECK 0
#endif

// <o> IOT_PBUFFER_MAX_COUNT - Maximum packet buffers managed by the module. 1-255

#ifndef IOT_PBUFFER_MAX_COUNT
#define IOT_PBUFFER_MAX_COUNT 10
#endif

// </h>
// <h> iot_tftp
//==========================================================
#ifndef iot_tftp
#define iot_tftp 
#endif

// <e> TFTP_CONFIG_LOG_ENABLED
//==========================================================
#ifndef TFTP_CONFIG_LOG_ENABLED
#define TFTP_CONFIG_LOG_ENABLED 0
#endif

// <o> TFTP_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TFTP_CONFIG_DEBUG_COLOR
#define TFTP_CONFIG_DEBUG_COLOR 0
#endif

// <o> TFTP_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TFTP_CONFIG_INFO_COLOR
#define TFTP_CONFIG_INFO_COLOR 0
#endif

// <o> TFTP_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef TFTP_CONFIG_LOG_LEVEL
#define TFTP_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> TFTP_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef TFTP_DISABLE_API_PARAM_CHECK
#define TFTP_DISABLE_API_PARAM_CHECK 0
#endif

// <o> TFTP_MAX_INSTANCES - Maximum amount of TFTP instances. 1-4294967295

#ifndef TFTP_MAX_INSTANCES
#define TFTP_MAX_INSTANCES 2
#endif

// <o> TFTP_MAX_RETRANSMISSION_COUNT - Maximum number of retransmissions. 0-255

// <i> Set this define to to disable retransmissions attempts.
#ifndef TFTP_MAX_RETRANSMISSION_COUNT
#define TFTP_MAX_RETRANSMISSION_COUNT 10
#endif

// <o> TFTP_RETRANSMISSION_TIMER_INTERVAL - Interval for timeout process to provide packet retransmission.

// <i> This value should represent one second interval.
#ifndef TFTP_RETRANSMISSION_TIMER_INTERVAL
#define TFTP_RETRANSMISSION_TIMER_INTERVAL 1000
#endif

// </h>
// <h> iot_timer
//==========================================================
#ifndef iot_timer
#define iot_timer 
#endif

// <q> IOT_TIMER_DISABLE_API_PARAM_CHECK - Disables API parameter checks in the module.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef IOT_TIMER_DISABLE_API_PARAM_CHECK
#define IOT_TIMER_DISABLE_API_PARAM_CHECK 0
#endif

// <o> IOT_TIMER_RESOLUTION_IN_MS - Wall clock resolution in milliseconds. 1-4294967295

// <i> The wall clock of the IoT Timer module has to be updated from an external source at regular intervals. This define needs to be set to the interval between updates.
#ifndef IOT_TIMER_RESOLUTION_IN_MS
#define IOT_TIMER_RESOLUTION_IN_MS 100
#endif

// </h>
// <o> IPV6_DEFAULT_HOP_LIMIT - ipv6_utils - IoT utilities 1-255

// <i> This parameter indicates how many hops by default IPv6 packets can do. Each router which forward IPv6 packets to another host/router decrease this value by 1. When this field become 0, the packet is discarded. Hop limit value of 1,64 or 255 are prefarable in case of more efficient compression.
#ifndef IPV6_DEFAULT_HOP_LIMIT
#define IPV6_DEFAULT_HOP_LIMIT 64
#endif

// <h> ipv6_dns6
//==========================================================
#ifndef ipv6_dns6
#define ipv6_dns6 
#endif

// <e> DNS6_CONFIG_LOG_ENABLED
//==========================================================
#ifndef DNS6_CONFIG_LOG_ENABLED
#define DNS6_CONFIG_LOG_ENABLED 0
#endif

// <o> DNS6_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef DNS6_CONFIG_DEBUG_COLOR
#define DNS6_CONFIG_DEBUG_COLOR 0
#endif

// <o> DNS6_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef DNS6_CONFIG_INFO_COLOR
#define DNS6_CONFIG_INFO_COLOR 0
#endif

// <o> DNS6_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef DNS6_CONFIG_LOG_LEVEL
#define DNS6_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> DNS6_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef DNS6_DISABLE_API_PARAM_CHECK
#define DNS6_DISABLE_API_PARAM_CHECK 0
#endif

// <o> DNS6_MAX_PENDING_QUERIES - Maximum number of pending queries in queue. 1-65534

#ifndef DNS6_MAX_PENDING_QUERIES
#define DNS6_MAX_PENDING_QUERIES 3
#endif

// <o> DNS6_MAX_RETRANSMISSION_COUNT - Max number of retransmissions. 0-255

// <i> Set this define to to disable retransmission attempts.
#ifndef DNS6_MAX_RETRANSMISSION_COUNT
#define DNS6_MAX_RETRANSMISSION_COUNT 3
#endif

// <o> DNS6_RETRANSMISSION_INTERVAL - Interval between retransmissions in seconds. 2-4294967295

#ifndef DNS6_RETRANSMISSION_INTERVAL
#define DNS6_RETRANSMISSION_INTERVAL 2
#endif

// </h>
// <h> ipv6_icmp6
//==========================================================
#ifndef ipv6_icmp6
#define ipv6_icmp6 
#endif

// <e> ICMP6_CONFIG_LOG_ENABLED
//==========================================================
#ifndef ICMP6_CONFIG_LOG_ENABLED
#define ICMP6_CONFIG_LOG_ENABLED 0
#endif

// <o> ICMP6_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ICMP6_CONFIG_DEBUG_COLOR
#define ICMP6_CONFIG_DEBUG_COLOR 0
#endif

// <o> ICMP6_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ICMP6_CONFIG_INFO_COLOR
#define ICMP6_CONFIG_INFO_COLOR 0
#endif

// <o> ICMP6_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ICMP6_CONFIG_LOG_LEVEL
#define ICMP6_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> ICMP6_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef ICMP6_DISABLE_API_PARAM_CHECK
#define ICMP6_DISABLE_API_PARAM_CHECK 0
#endif

// <q> ICMP6_ENABLE_ALL_MESSAGES_TO_APPLICATION - Enables call ICMPv6 event handler on getting any of ICMPv6 message.

// <i> Set this parameter to 1 to enable call ICMPv6 event handler on receiving any of ICMPv6 messages including error, Neighbour Discovery or ping messages.
#ifndef ICMP6_ENABLE_ALL_MESSAGES_TO_APPLICATION
#define ICMP6_ENABLE_ALL_MESSAGES_TO_APPLICATION 0
#endif

// <q> ICMP6_ENABLE_HANDLE_ECHO_REQUEST_TO_APPLICATION - Enable or disable internal ECHO response.

// <i> Set this parameter to 1 to disable internal ECHO RESPONSE sending after processing ICMP packet in application (if ICMP6_ENABLE_ALL_MESSAGES_TO_APPLICATION is set). Application then is responsible of processing ECHO REQUEST and should also generate ECHO RESPONSE by itself. Set this parameter to to let automatically reply inside of ICMP6 module, after processing it by application.
#ifndef ICMP6_ENABLE_HANDLE_ECHO_REQUEST_TO_APPLICATION
#define ICMP6_ENABLE_HANDLE_ECHO_REQUEST_TO_APPLICATION 0
#endif

// <q> ICMP6_ENABLE_ND6_MESSAGES_TO_APPLICATION - Enables call ICMPv6 event handler on getting Neighbour Discovery message.

// <i> Set this parameter to 1 to enable call ICMPv6 event handler on receiving one of Neighbour Discovery messages.
#ifndef ICMP6_ENABLE_ND6_MESSAGES_TO_APPLICATION
#define ICMP6_ENABLE_ND6_MESSAGES_TO_APPLICATION 0
#endif

// <o> ICMP6_ERROR_MESSAGE_MAX_SIZE - Maximum error message size when transmitting.

// <i> Error messages contain partial or complete IPv6 packet that resulted in transmission of error message in the host. See RFC 4443 for details. This configurable parameter allows limiting the size of ICMP packet when responding with an error message. The size defined here is inclusive of ICMP Header.
// <48=> 48
// <1240=> 1240
#ifndef ICMP6_ERROR_MESSAGE_MAX_SIZE
#define ICMP6_ERROR_MESSAGE_MAX_SIZE 128
#endif

// </h>
// <h> ipv6_medium
//==========================================================
#ifndef ipv6_medium
#define ipv6_medium 
#endif

// <o> APP_ADV_ADV_INTERVAL - The advertising interval. This value can vary between 100ms to 10.24s. 32-16384

// <i> Minimum 0x0020, maximum 0x4000, unit UNIT_0_625_MS.
#ifndef APP_ADV_ADV_INTERVAL
#define APP_ADV_ADV_INTERVAL 532
#endif

// <o> APP_ADV_DURATION - Time for which the device must be advertising in non-connectable mode (duration in 10 ms units). advertises indefinitely. 0-16383

#ifndef APP_ADV_DURATION
#define APP_ADV_DURATION 0
#endif

// <q> BLE_IPV6_MEDIUM_ENABLED - Enabling BLE IPv6 module

#ifndef BLE_IPV6_MEDIUM_ENABLED
#define BLE_IPV6_MEDIUM_ENABLED 0
#endif

// <o> COMPANY_IDENTIFIER - Company identifier for Nordic Semiconductor ASA as per www.bluetooth.org.

// <89=> 89
#ifndef COMPANY_IDENTIFIER
#define COMPANY_IDENTIFIER 89
#endif

// <o> CONFIG_MODE_ADV_ADV_INTERVAL - If COMMISSIONING_ENABLED is defined: The advertising interval in Configuration mode. This value can vary between 100ms to 10.24s. 32-16384

// <i> Minimum 0x0020, maximum 0x4000, unit UNIT_0_625_MS.
#ifndef CONFIG_MODE_ADV_ADV_INTERVAL
#define CONFIG_MODE_ADV_ADV_INTERVAL 532
#endif

// <o> CONFIG_MODE_ADV_TIMEOUT - If COMMISSIONING_ENABLED is defined: Time for which the device must be advertising in non-connectable mode (in seconds) in Configuration mode. disables timeout. 0-16383

#ifndef CONFIG_MODE_ADV_TIMEOUT
#define CONFIG_MODE_ADV_TIMEOUT 0
#endif

// <o> CONFIG_MODE_CONN_SUP_TIMEOUT - If COMMISSIONING_ENABLED is defined: Connection Supervision Timeout in 10 ms units in Configuration mode, see BLE_GAP_CP_LIMITS.

// <i> Minimum BLE_GAP_CP_CONN_SUP_TIMEOUT_MIN, maximum BLE_GAP_CP_CONN_SUP_TIMEOUT_MAX, unit UNIT_10_MS.
#ifndef CONFIG_MODE_CONN_SUP_TIMEOUT
#define CONFIG_MODE_CONN_SUP_TIMEOUT "Node_Cfg"
#endif

// <o> CONFIG_MODE_MAX_CONN_INTERVAL - If COMMISSIONING_ENABLED is defined: Maximum Connection Interval in 1.25 ms units in Configuration mode, see BLE_GAP_CP_LIMITS.

// <i> Minimum BLE_GAP_CP_MAX_CONN_INTVL_MIN, maximum BLE_GAP_CP_MAX_CONN_INTVL_MAX, unit UNIT_1_25_MS.
#ifndef CONFIG_MODE_MAX_CONN_INTERVAL
#define CONFIG_MODE_MAX_CONN_INTERVAL 24
#endif

// <o> CONFIG_MODE_MIN_CONN_INTERVAL - If COMMISSIONING_ENABLED is defined: Minimum Connection Interval in 1.25 ms units in Configuration mode, see BLE_GAP_CP_LIMITS.

// <i> Minimum BLE_GAP_CP_MIN_CONN_INTVL_MIN, maximum BLE_GAP_CP_MIN_CONN_INTVL_MAX, unit UNIT_1_25_MS
#ifndef CONFIG_MODE_MIN_CONN_INTERVAL
#define CONFIG_MODE_MIN_CONN_INTERVAL 6
#endif

// <o> CONFIG_MODE_SLAVE_LATENCY - If COMMISSIONING_ENABLED is defined: Slave Latency in number of connection events in Configuration mode, see BLE_GAP_CP_LIMITS.

// <i> Minimum 0, maximum BLE_GAP_CP_SLAVE_LATENCY_MAX.
#ifndef CONFIG_MODE_SLAVE_LATENCY
#define CONFIG_MODE_SLAVE_LATENCY 6
#endif

// <o> CONN_SUP_TIMEOUT - Connection Supervision Timeout in 10 ms units, see BLE_GAP_CP_LIMITS.

// <i> Minimum BLE_GAP_CP_CONN_SUP_TIMEOUT_MIN, maximum BLE_GAP_CP_CONN_SUP_TIMEOUT_MAX, unit UNIT_10_MS
#ifndef CONN_SUP_TIMEOUT
#define CONN_SUP_TIMEOUT "CoAP_CLNT"
#endif

// <e> IPV6_MEDIUM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef IPV6_MEDIUM_CONFIG_LOG_ENABLED
#define IPV6_MEDIUM_CONFIG_LOG_ENABLED 0
#endif

// <o> IPV6_MEDIUM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IPV6_MEDIUM_CONFIG_DEBUG_COLOR
#define IPV6_MEDIUM_CONFIG_DEBUG_COLOR 0
#endif

// <o> IPV6_MEDIUM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IPV6_MEDIUM_CONFIG_INFO_COLOR
#define IPV6_MEDIUM_CONFIG_INFO_COLOR 0
#endif

// <o> IPV6_MEDIUM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef IPV6_MEDIUM_CONFIG_LOG_LEVEL
#define IPV6_MEDIUM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> IS_SRVC_CHANGED_CHARACT_PRESENT - Include the Service Changed characteristic in the Attribute Table.

#ifndef IS_SRVC_CHANGED_CHARACT_PRESENT
#define IS_SRVC_CHANGED_CHARACT_PRESENT 0
#endif

// <o> JOINING_MODE_ADV_ADV_INTERVAL - If COMMISSIONING_ENABLED is defined: The advertising interval in Joining mode. This value can vary between 100ms to 10.24s. 32-16384

// <i> Minimum 0x0020, maximum 0x4000, unit UNIT_0_625_MS.
#ifndef JOINING_MODE_ADV_ADV_INTERVAL
#define JOINING_MODE_ADV_ADV_INTERVAL 532
#endif

// <o> JOINING_MODE_ADV_TIMEOUT - If COMMISSIONING_ENABLED is defined: Time for which the device must be advertising in non-connectable mode (in seconds) in Joining mode. disables timeout. 0-16383

#ifndef JOINING_MODE_ADV_TIMEOUT
#define JOINING_MODE_ADV_TIMEOUT 0
#endif

// <o> JOINING_MODE_CONN_SUP_TIMEOUT - If COMMISSIONING_ENABLED is defined: Connection Supervision Timeout in 10 ms units in Joining mode, see BLE_GAP_CP_LIMITS.

// <i> Minimum BLE_GAP_CP_CONN_SUP_TIMEOUT_MIN, maximum BLE_GAP_CP_CONN_SUP_TIMEOUT_MAX, unit UNIT_10_MS.
#ifndef JOINING_MODE_CONN_SUP_TIMEOUT
#define JOINING_MODE_CONN_SUP_TIMEOUT 43
#endif

// <o> JOINING_MODE_MAX_CONN_INTERVAL - If COMMISSIONING_ENABLED is defined: Maximum Connection Interval in 1.25 ms units in Joining mode, see BLE_GAP_CP_LIMITS.

// <i> Minimum BLE_GAP_CP_MAX_CONN_INTVL_MIN, maximum BLE_GAP_CP_MAX_CONN_INTVL_MAX, unit UNIT_1_25_MS.
#ifndef JOINING_MODE_MAX_CONN_INTERVAL
#define JOINING_MODE_MAX_CONN_INTERVAL 24
#endif

// <o> JOINING_MODE_MIN_CONN_INTERVAL - If COMMISSIONING_ENABLED is defined: Minimum Connection Interval in 1.25 ms units in Joining mode, see BLE_GAP_CP_LIMITS.

// <i> Minimum BLE_GAP_CP_MIN_CONN_INTVL_MIN, maximum BLE_GAP_CP_MIN_CONN_INTVL_MAX, unit UNIT_1_25_MS.
#ifndef JOINING_MODE_MIN_CONN_INTERVAL
#define JOINING_MODE_MIN_CONN_INTERVAL 6
#endif

// <o> JOINING_MODE_SLAVE_LATENCY - If COMMISSIONING_ENABLED is defined: Slave Latency in number of connection events in Joining mode, see BLE_GAP_CP_LIMITS.

// <i> Minimum 0, maximum BLE_GAP_CP_SLAVE_LATENCY_MAX.
#ifndef JOINING_MODE_SLAVE_LATENCY
#define JOINING_MODE_SLAVE_LATENCY 6
#endif

// <o> MAX_CONN_INTERVAL - Maximum Connection Interval in 1.25 ms units, see BLE_GAP_CP_LIMITS.

// <i> Minimum BLE_GAP_CP_MAX_CONN_INTVL_MIN, maximum BLE_GAP_CP_MAX_CONN_INTVL_MAX, unit UNIT_1_25_MS.
#ifndef MAX_CONN_INTERVAL
#define MAX_CONN_INTERVAL 24
#endif

// <o> MIN_CONN_INTERVAL - Minimum Connection Interval in 1.25 ms units, see BLE_GAP_CP_LIMITS.

// <i> Minimum BLE_GAP_CP_MIN_CONN_INTVL_MIN, maximum BLE_GAP_CP_MIN_CONN_INTVL_MAX, unit UNIT_1_25_MS.
#ifndef MIN_CONN_INTERVAL
#define MIN_CONN_INTERVAL 6
#endif

// <o> SLAVE_LATENCY - Slave Latency in number of connection events, see BLE_GAP_CP_LIMITS.

// <i> Minimum 0, maximum BLE_GAP_CP_SLAVE_LATENCY_MAX.
#ifndef SLAVE_LATENCY
#define SLAVE_LATENCY 6
#endif

// </h>
// <h> ipv6_sntp
//==========================================================
#ifndef ipv6_sntp
#define ipv6_sntp 
#endif

// <e> SNTP_CLIENT_CONFIG_LOG_ENABLED
//==========================================================
#ifndef SNTP_CLIENT_CONFIG_LOG_ENABLED
#define SNTP_CLIENT_CONFIG_LOG_ENABLED 0
#endif

// <o> SNTP_CLIENT_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SNTP_CLIENT_CONFIG_DEBUG_COLOR
#define SNTP_CLIENT_CONFIG_DEBUG_COLOR 0
#endif

// <o> SNTP_CLIENT_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SNTP_CLIENT_CONFIG_INFO_COLOR
#define SNTP_CLIENT_CONFIG_INFO_COLOR 0
#endif

// <o> SNTP_CLIENT_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef SNTP_CLIENT_CONFIG_LOG_LEVEL
#define SNTP_CLIENT_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> SNTP_CLIENT_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef SNTP_CLIENT_DISABLE_API_PARAM_CHECK
#define SNTP_CLIENT_DISABLE_API_PARAM_CHECK 0
#endif

// <o> SNTP_MAX_RETRANSMISSION_COUNT - Maximum number of retransmissions. 0-255

// <i> Set this define to to disable retransmissions attempts.
#ifndef SNTP_MAX_RETRANSMISSION_COUNT
#define SNTP_MAX_RETRANSMISSION_COUNT 2
#endif

// <o> SNTP_RETRANSMISSION_INTERVAL - Interval between retransmissions in seconds. 0-255

#ifndef SNTP_RETRANSMISSION_INTERVAL
#define SNTP_RETRANSMISSION_INTERVAL 2
#endif

// </h>
// <h> ipv6_stack
//==========================================================
#ifndef ipv6_stack
#define ipv6_stack 
#endif

// <e> IPV6_CONFIG_LOG_ENABLED
//==========================================================
#ifndef IPV6_CONFIG_LOG_ENABLED
#define IPV6_CONFIG_LOG_ENABLED 0
#endif

// <o> IPV6_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IPV6_CONFIG_DEBUG_COLOR
#define IPV6_CONFIG_DEBUG_COLOR 0
#endif

// <o> IPV6_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef IPV6_CONFIG_INFO_COLOR
#define IPV6_CONFIG_INFO_COLOR 0
#endif

// <o> IPV6_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef IPV6_CONFIG_LOG_LEVEL
#define IPV6_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> IPV6_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef IPV6_DISABLE_API_PARAM_CHECK
#define IPV6_DISABLE_API_PARAM_CHECK 0
#endif

// <q> IPV6_ENABLE_USNUPORTED_PROTOCOLS_TO_APPLICATION - Enables call application event handler if getting unsupported transport protocols.

// <i> Set this parameter to 1 to enable event while getting unsupported transport protocol. In the current implementation, it means, all transport protocols besides ICMPv6 or UDP.
#ifndef IPV6_ENABLE_USNUPORTED_PROTOCOLS_TO_APPLICATION
#define IPV6_ENABLE_USNUPORTED_PROTOCOLS_TO_APPLICATION 0
#endif

// <o> IPV6_MAX_ADDRESS_PER_INTERFACE - Number of IPv6 addresses supported per interface. 1-255

// <i> Number of IPv6 address supported including link local address.
#ifndef IPV6_MAX_ADDRESS_PER_INTERFACE
#define IPV6_MAX_ADDRESS_PER_INTERFACE 3
#endif

// <o> IPV6_MAX_INTERFACE - Number of IPv6 network interface. 1-255

#ifndef IPV6_MAX_INTERFACE
#define IPV6_MAX_INTERFACE 1
#endif

// </h>
// <h> ipv6_udp
//==========================================================
#ifndef ipv6_udp
#define ipv6_udp 
#endif

// <e> UDP6_CONFIG_LOG_ENABLED
//==========================================================
#ifndef UDP6_CONFIG_LOG_ENABLED
#define UDP6_CONFIG_LOG_ENABLED 0
#endif

// <o> UDP6_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef UDP6_CONFIG_DEBUG_COLOR
#define UDP6_CONFIG_DEBUG_COLOR 0
#endif

// <o> UDP6_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef UDP6_CONFIG_INFO_COLOR
#define UDP6_CONFIG_INFO_COLOR 0
#endif

// <o> UDP6_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef UDP6_CONFIG_LOG_LEVEL
#define UDP6_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> UDP6_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef UDP6_DISABLE_API_PARAM_CHECK
#define UDP6_DISABLE_API_PARAM_CHECK 0
#endif

// <o> UDP6_MAX_SOCKET_COUNT - The max number of sockets to support for UDP module. 1-255

#ifndef UDP6_MAX_SOCKET_COUNT
#define UDP6_MAX_SOCKET_COUNT 3
#endif

// </h>
// <h> lwm2m_config
//==========================================================
#ifndef lwm2m_config
#define lwm2m_config 
#endif

// <o> LWM2M_COAP_HANDLER_MAX_INSTANCES - Maximum number of object instance supported by the device. 1-65535

// <i> Maximum number of object instances. Objects are not included as an instance as the handlers are kept in a seperate buffer.
#ifndef LWM2M_COAP_HANDLER_MAX_INSTANCES
#define LWM2M_COAP_HANDLER_MAX_INSTANCES 5
#endif

// <o> LWM2M_COAP_HANDLER_MAX_OBJECTS - Maximum number of objects supported by the device. 1-65535

// <i> As objects are default resource handler for the LWM2M instances when no instance is registred, this has to be defined to set of memory for the objects that are going to be registered as handlers.
#ifndef LWM2M_COAP_HANDLER_MAX_OBJECTS
#define LWM2M_COAP_HANDLER_MAX_OBJECTS 5
#endif

// <e> LWM2M_CONFIG_LOG_ENABLED
//==========================================================
#ifndef LWM2M_CONFIG_LOG_ENABLED
#define LWM2M_CONFIG_LOG_ENABLED 0
#endif

// <o> LWM2M_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef LWM2M_CONFIG_DEBUG_COLOR
#define LWM2M_CONFIG_DEBUG_COLOR 0
#endif

// <o> LWM2M_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef LWM2M_CONFIG_INFO_COLOR
#define LWM2M_CONFIG_INFO_COLOR 0
#endif

// <o> LWM2M_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef LWM2M_CONFIG_LOG_LEVEL
#define LWM2M_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> LWM2M_DISABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase but be redundant once application is developed. Disabling this can result in some code saving.
#ifndef LWM2M_DISABLE_API_PARAM_CHECK
#define LWM2M_DISABLE_API_PARAM_CHECK 0
#endif

// <o> LWM2M_MAX_SERVERS - Maximum number of LWM2M servers to connect to. 1-65535

// <i> As bootstrap server is not counted as a server in this sense, the number should reflect how many servers the device is suppose to register to.
#ifndef LWM2M_MAX_SERVERS
#define LWM2M_MAX_SERVERS 1
#endif

// <o> LWM2M_REGISTER_MAX_LOCATION_LEN - Max number of bytes allocated for location string from remote server. 1-255

// <i> Upon registration the device will get a location string to be used as identifier for later communication with the server it is registered to. This setting defines the maximum length of the location string a server can return upon registration with a server.
#ifndef LWM2M_REGISTER_MAX_LOCATION_LEN
#define LWM2M_REGISTER_MAX_LOCATION_LEN 20
#endif

// </h>
// <h> mqtt_config
//==========================================================
#ifndef mqtt_config
#define mqtt_config 
#endif

// <e> MQTT_CONFIG_LOG_ENABLED
//==========================================================
#ifndef MQTT_CONFIG_LOG_ENABLED
#define MQTT_CONFIG_LOG_ENABLED 0
#endif

// <o> MQTT_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef MQTT_CONFIG_DEBUG_COLOR
#define MQTT_CONFIG_DEBUG_COLOR 0
#endif

// <o> MQTT_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef MQTT_CONFIG_INFO_COLOR
#define MQTT_CONFIG_INFO_COLOR 0
#endif

// <o> MQTT_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef MQTT_CONFIG_LOG_LEVEL
#define MQTT_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> MQTT_KEEPALIVE - Keep alive time for MQTT (in seconds). Sending of Ping Requests to keep the connection alive are governed by this value. A keep alive value of zero (0) has the effect of turning off the keep alive mechanism. 0-65535

#ifndef MQTT_KEEPALIVE
#define MQTT_KEEPALIVE 60
#endif

// <o> MQTT_MAX_CLIENTS - Maximum number of clients that can be managed by the module. 1-255

#ifndef MQTT_MAX_CLIENTS
#define MQTT_MAX_CLIENTS 1
#endif

// <o> MQTT_MAX_PACKET_LENGTH - Maximum MQTT packet size that can be sent (including the fixed and variable header). 5-268435460

#ifndef MQTT_MAX_PACKET_LENGTH
#define MQTT_MAX_PACKET_LENGTH 128
#endif

// </h>
// <h> socket_common
//==========================================================
#ifndef socket_common
#define socket_common 
#endif

// <q> SOCKET_AUTOINIT_ENABLE - Enable or disable automatic initialization of socket module.

// <i> The automatic setup allows the socket API to initialize the entire stack so that you can compile and run PC applications using the socket API with no modifications needed. Disabling autoinit is only recommended if you need to do custom modifications to the initialization procedure.
#ifndef SOCKET_AUTOINIT_ENABLE
#define SOCKET_AUTOINIT_ENABLE 0
#endif

// <e> SOCKET_CONFIG_LOG_ENABLED
//==========================================================
#ifndef SOCKET_CONFIG_LOG_ENABLED
#define SOCKET_CONFIG_LOG_ENABLED 0
#endif

// <o> SOCKET_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SOCKET_CONFIG_DEBUG_COLOR
#define SOCKET_CONFIG_DEBUG_COLOR 0
#endif

// <o> SOCKET_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SOCKET_CONFIG_INFO_COLOR
#define SOCKET_CONFIG_INFO_COLOR 0
#endif

// <o> SOCKET_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef SOCKET_CONFIG_LOG_LEVEL
#define SOCKET_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> SOCKET_ENABLE_API_PARAM_CHECK - Enable or disable API parameter check.

// <i> API parameter checks are added to ensure right parameters are passed to the module. These checks are useful during development phase, but redundant when in production. Disabling this can result in some code saving.
#ifndef SOCKET_ENABLE_API_PARAM_CHECK
#define SOCKET_ENABLE_API_PARAM_CHECK 0
#endif

// <o> SOCKET_MAX_SOCKET_COUNT - The max number of sockets to support for socket module. 1-255

#ifndef SOCKET_MAX_SOCKET_COUNT
#define SOCKET_MAX_SOCKET_COUNT 1
#endif

// <q> SOCKET_TRANSPORT_ENABLE - Enable or disable transport layer in socket module.

// <i> The transport layer is required if you are going to use the Nordic IPv6 stack or the LwIP stack as used by Nordic. If you want to use the socket layer for configuration sockets only, you can disable transport as it can result in some code saving.
#ifndef SOCKET_TRANSPORT_ENABLE
#define SOCKET_TRANSPORT_ENABLE 0
#endif

// </h>
// </h>
// <h> nRF_IoT_Commissioning
//==========================================================
#ifndef nRF_IoT_Commissioning
#define nRF_IoT_Commissioning 
#endif

// <e> COMMISSIONING_CONFIG_LOG_ENABLED
//==========================================================
#ifndef COMMISSIONING_CONFIG_LOG_ENABLED
#define COMMISSIONING_CONFIG_LOG_ENABLED 0
#endif

// <o> COMMISSIONING_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef COMMISSIONING_CONFIG_DEBUG_COLOR
#define COMMISSIONING_CONFIG_DEBUG_COLOR 0
#endif

// <o> COMMISSIONING_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef COMMISSIONING_CONFIG_INFO_COLOR
#define COMMISSIONING_CONFIG_INFO_COLOR 0
#endif

// <o> COMMISSIONING_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef COMMISSIONING_CONFIG_LOG_LEVEL
#define COMMISSIONING_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NCFGS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NCFGS_CONFIG_LOG_ENABLED
#define NCFGS_CONFIG_LOG_ENABLED 0
#endif

// <o> NCFGS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NCFGS_CONFIG_DEBUG_COLOR
#define NCFGS_CONFIG_DEBUG_COLOR 0
#endif

// <o> NCFGS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NCFGS_CONFIG_INFO_COLOR
#define NCFGS_CONFIG_INFO_COLOR 0
#endif

// <o> NCFGS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NCFGS_CONFIG_LOG_LEVEL
#define NCFGS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </h>
// <h> nRF_Libraries
//==========================================================
#ifndef nRF_Libraries
#define nRF_Libraries 
#endif

// <h> app_button
//==========================================================
#ifndef app_button
#define app_button 
#endif

// <q> BUTTON_ENABLED - Enables Button module

#ifndef BUTTON_ENABLED
#define BUTTON_ENABLED 0
#endif

// <q> BUTTON_HIGH_ACCURACY_ENABLED - Enables GPIOTE high accuracy for buttons

#ifndef BUTTON_HIGH_ACCURACY_ENABLED
#define BUTTON_HIGH_ACCURACY_ENABLED 0
#endif

// </h>
// <q> APP_FIFO_ENABLED - app_fifo - Software FIFO implementation

#ifndef APP_FIFO_ENABLED
#define APP_FIFO_ENABLED 0
#endif

// <q> APP_GPIOTE_ENABLED - app_gpiote - GPIOTE events dispatcher

#ifndef APP_GPIOTE_ENABLED
#define APP_GPIOTE_ENABLED 0
#endif

// <q> APP_PWM_ENABLED - app_pwm - PWM functionality

#ifndef APP_PWM_ENABLED
#define APP_PWM_ENABLED 0
#endif

// <e> APP_SCHEDULER_ENABLED
//==========================================================
#ifndef APP_SCHEDULER_ENABLED
#define APP_SCHEDULER_ENABLED 0
#endif

// <q> APP_SCHEDULER_WITH_PAUSE - Enabling pause feature

#ifndef APP_SCHEDULER_WITH_PAUSE
#define APP_SCHEDULER_WITH_PAUSE 0
#endif

// <q> APP_SCHEDULER_WITH_PROFILER - Enabling scheduler profiling

#ifndef APP_SCHEDULER_WITH_PROFILER
#define APP_SCHEDULER_WITH_PROFILER 0
#endif

// </e>
// <e> APP_SDCARD_ENABLED
//==========================================================
#ifndef APP_SDCARD_ENABLED
#define APP_SDCARD_ENABLED 0
#endif

// <o> APP_SDCARD_FREQ_DATA - SPI frequency

// <33554432=> 125
// <67108864=> 250
// <134217728=> 500
// <268435456=> 1
// <536870912=> 2
// <1073741824=> 4
// <2147483648=> 8
#ifndef APP_SDCARD_FREQ_DATA
#define APP_SDCARD_FREQ_DATA 1073741824
#endif

// <o> APP_SDCARD_FREQ_INIT - SPI frequency

// <33554432=> 125
// <67108864=> 250
// <134217728=> 500
// <268435456=> 1
// <536870912=> 2
// <1073741824=> 4
// <2147483648=> 8
#ifndef APP_SDCARD_FREQ_INIT
#define APP_SDCARD_FREQ_INIT 67108864
#endif

// <o> APP_SDCARD_SPI_INSTANCE - SPI instance used

// <0=> 
// <1=> 1
// <2=> 2
#ifndef APP_SDCARD_SPI_INSTANCE
#define APP_SDCARD_SPI_INSTANCE 0
#endif

// </e>
// <e> APP_TIMER_ENABLED
//==========================================================
#ifndef APP_TIMER_ENABLED
#define APP_TIMER_ENABLED 0
#endif

// <h> App
//==========================================================
#ifndef App
#define App 
#endif

// <q> APP_TIMER_CONFIG_SWI_NUMBER - Configure SWI instance used.

#ifndef APP_TIMER_CONFIG_SWI_NUMBER
#define APP_TIMER_CONFIG_SWI_NUMBER 0
#endif

// <q> APP_TIMER_WITH_PROFILER - Enable app_timer profiling

#ifndef APP_TIMER_WITH_PROFILER
#define APP_TIMER_WITH_PROFILER 0
#endif

// </h>
// <o> APP_TIMER_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef APP_TIMER_CONFIG_IRQ_PRIORITY
#define APP_TIMER_CONFIG_IRQ_PRIORITY 7
#endif

// <o> APP_TIMER_CONFIG_OP_QUEUE_SIZE - Capacity of timer requests queue.

// <i> will fail.
#ifndef APP_TIMER_CONFIG_OP_QUEUE_SIZE
#define APP_TIMER_CONFIG_OP_QUEUE_SIZE 10
#endif

// <o> APP_TIMER_CONFIG_RTC_FREQUENCY - Configure RTC prescaler.

// <0=> 32768
// <1=> 16384
// <3=> 8192
// <7=> 4096
// <15=> 2048
// <31=> 1024
#ifndef APP_TIMER_CONFIG_RTC_FREQUENCY
#define APP_TIMER_CONFIG_RTC_FREQUENCY 0
#endif

// <q> APP_TIMER_CONFIG_USE_SCHEDULER - Enable scheduling app_timer events to app_scheduler

#ifndef APP_TIMER_CONFIG_USE_SCHEDULER
#define APP_TIMER_CONFIG_USE_SCHEDULER 0
#endif

// <q> APP_TIMER_KEEPS_RTC_ACTIVE - Enable RTC always on

// <i> This option can be used when app_timer is used for timestamping.
#ifndef APP_TIMER_KEEPS_RTC_ACTIVE
#define APP_TIMER_KEEPS_RTC_ACTIVE 0
#endif

// <o> APP_TIMER_SAFE_WINDOW_MS - Maximum possible latency (in milliseconds) of handling app_timer event.

// <i> without corrupting app_timer behavior.
#ifndef APP_TIMER_SAFE_WINDOW_MS
#define APP_TIMER_SAFE_WINDOW_MS 300000
#endif

// </e>
// <e> APP_UART_ENABLED
//==========================================================
#ifndef APP_UART_ENABLED
#define APP_UART_ENABLED 0
#endif

// <o> APP_UART_DRIVER_INSTANCE - UART instance used

// <0=> 
#ifndef APP_UART_DRIVER_INSTANCE
#define APP_UART_DRIVER_INSTANCE 0
#endif

// </e>
// <q> APP_USBD_AUDIO_ENABLED - app_usbd_audio - USB AUDIO class

#ifndef APP_USBD_AUDIO_ENABLED
#define APP_USBD_AUDIO_ENABLED 0
#endif

// <h> app_usbd_cdc_acm
//==========================================================
#ifndef app_usbd_cdc_acm
#define app_usbd_cdc_acm 
#endif

// <q> APP_USBD_CDC_ACM_ENABLED - Enabling USBD CDC ACM Class library

#ifndef APP_USBD_CDC_ACM_ENABLED
#define APP_USBD_CDC_ACM_ENABLED 0
#endif

// <q> APP_USBD_CDC_ACM_ZLP_ON_EPSIZE_WRITE - Send ZLP on write with same size as endpoint

// <i> This may limit throughput if a lot of binary data is sent, but in terminal mode operation it makes sure that the data is always displayed right after it is sent.
#ifndef APP_USBD_CDC_ACM_ZLP_ON_EPSIZE_WRITE
#define APP_USBD_CDC_ACM_ZLP_ON_EPSIZE_WRITE 0
#endif

// </h>
// <q> APP_USBD_CDC_ACM_ENABLED - app_usbd_cdc_acm - USB CDC ACM class

#ifndef APP_USBD_CDC_ACM_ENABLED
#define APP_USBD_CDC_ACM_ENABLED 0
#endif

// <q> APP_USBD_DUMMY_ENABLED - app_usbd_dummy - USBD Dummy class

#ifndef APP_USBD_DUMMY_ENABLED
#define APP_USBD_DUMMY_ENABLED 0
#endif

// <e> APP_USBD_ENABLED
//==========================================================
#ifndef APP_USBD_ENABLED
#define APP_USBD_ENABLED 0
#endif

// <o> APP_USBD_CONFIG_DESC_STRING_SIZE - Maximum size of the NULL-terminated string of the string descriptor. 31-254

// <i> Any value higher than 31 creates an additional buffer just for descriptor strings.
#ifndef APP_USBD_CONFIG_DESC_STRING_SIZE
#define APP_USBD_CONFIG_DESC_STRING_SIZE 31
#endif

// <q> APP_USBD_CONFIG_DESC_STRING_UTF_ENABLED - Enable UTF8 conversion.

// <i> Comma-separated list of supported languages.
#ifndef APP_USBD_CONFIG_DESC_STRING_UTF_ENABLED
#define APP_USBD_CONFIG_DESC_STRING_UTF_ENABLED 0
#endif

// <e> APP_USBD_CONFIG_EVENT_QUEUE_ENABLE
//==========================================================
#ifndef APP_USBD_CONFIG_EVENT_QUEUE_ENABLE
#define APP_USBD_CONFIG_EVENT_QUEUE_ENABLE 0
#endif

// <o> APP_USBD_CONFIG_EVENT_QUEUE_SIZE - The size of event queue 16-64

// <i> The size of the queue for the events that would be processed in the main loop.
#ifndef APP_USBD_CONFIG_EVENT_QUEUE_SIZE
#define APP_USBD_CONFIG_EVENT_QUEUE_SIZE 32
#endif

// <o> APP_USBD_CONFIG_SOF_HANDLING_MODE - Change SOF events handling mode.

// <i> Interrupt - SOF events are processed in interrupt.
// <0=> Normal
// <1=> Compress
// <2=> Interrupt
#ifndef APP_USBD_CONFIG_SOF_HANDLING_MODE
#define APP_USBD_CONFIG_SOF_HANDLING_MODE 1
#endif

// </e>
// <e> APP_USBD_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_USBD_CONFIG_LOG_ENABLED
#define APP_USBD_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_USBD_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_CONFIG_DEBUG_COLOR
#define APP_USBD_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_USBD_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_CONFIG_INFO_COLOR
#define APP_USBD_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_USBD_CONFIG_LOG_LEVEL
#define APP_USBD_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> APP_USBD_CONFIG_MAX_POWER - MaxPower field in configuration descriptor in milliamps 0-500

#ifndef APP_USBD_CONFIG_MAX_POWER
#define APP_USBD_CONFIG_MAX_POWER 500
#endif

// <q> APP_USBD_CONFIG_POWER_EVENTS_PROCESS - Process power events

// <i> Enable processing power events in USB event handler.
#ifndef APP_USBD_CONFIG_POWER_EVENTS_PROCESS
#define APP_USBD_CONFIG_POWER_EVENTS_PROCESS 0
#endif

// <q> APP_USBD_CONFIG_SELF_POWERED - Self powered

#ifndef APP_USBD_CONFIG_SELF_POWERED
#define APP_USBD_CONFIG_SELF_POWERED 0
#endif

// <q> APP_USBD_CONFIG_SOF_TIMESTAMP_PROVIDE - Provide a function that generates timestamps for logs based on the current SOF

// <i> This means that it will work even if the logging in this very module is disabled.
#ifndef APP_USBD_CONFIG_SOF_TIMESTAMP_PROVIDE
#define APP_USBD_CONFIG_SOF_TIMESTAMP_PROVIDE 0
#endif

// <o> APP_USBD_DEVICE_VER_MAJOR - Device version, major part 0-99

// <i> Device version, will be converted automatically to BCD notation. Use just decimal values.
#ifndef APP_USBD_DEVICE_VER_MAJOR
#define APP_USBD_DEVICE_VER_MAJOR 1
#endif

// <o> APP_USBD_DEVICE_VER_MINOR - Device version, minor part 0-99

// <i> Device version, will be converted automatically to BCD notation. Use just decimal values.
#ifndef APP_USBD_DEVICE_VER_MINOR
#define APP_USBD_DEVICE_VER_MINOR 0
#endif

// <o> APP_USBD_DEVICE_VER_SUB - Sub-minor device version 0-9

// <i> Sub-minor device version, will be converted automatically to BCD notation. Use just decimal values.
#ifndef APP_USBD_DEVICE_VER_SUB
#define APP_USBD_DEVICE_VER_SUB 0
#endif

// <o> APP_USBD_PID - Product ID 0x0000-0xFFFF

// <i> Selected Product ID
#ifndef APP_USBD_PID
#define APP_USBD_PID 0
#endif

// <e> APP_USBD_STRING_ID_CONFIGURATION
//==========================================================
#ifndef APP_USBD_STRING_ID_CONFIGURATION
#define APP_USBD_STRING_ID_CONFIGURATION 0
#endif

// <q> APP_USBD_STRING_CONFIGURATION_EXTERN - Define whether @ref APP_USBD_STRINGS_CONFIGURATION is created by macro or declared as global variable.

// <i> Configuration string that is defined the same way like in @ref APP_USBD_STRINGS_MANUFACTURER.
#ifndef APP_USBD_STRING_CONFIGURATION_EXTERN
#define APP_USBD_STRING_CONFIGURATION_EXTERN 0
#endif

// </e>
// <e> APP_USBD_STRING_ID_MANUFACTURER
//==========================================================
#ifndef APP_USBD_STRING_ID_MANUFACTURER
#define APP_USBD_STRING_ID_MANUFACTURER 0
#endif

// <q> APP_USBD_STRINGS_MANUFACTURER_EXTERN - Define whether @ref APP_USBD_STRINGS_MANUFACTURER is created by macro or declared as a global variable.

// <i> The order of manufacturer names must be the same like in @ref APP_USBD_STRINGS_LANGIDS.
#ifndef APP_USBD_STRINGS_MANUFACTURER_EXTERN
#define APP_USBD_STRINGS_MANUFACTURER_EXTERN 0
#endif

// </e>
// <e> APP_USBD_STRING_ID_PRODUCT
//==========================================================
#ifndef APP_USBD_STRING_ID_PRODUCT
#define APP_USBD_STRING_ID_PRODUCT 0
#endif

// <q> APP_USBD_STRINGS_PRODUCT_EXTERN - Define whether @ref APP_USBD_STRINGS_PRODUCT is created by macro or declared as a global variable.

// <i> List of product names that is defined the same way like in @ref APP_USBD_STRINGS_MANUFACTURER.
#ifndef APP_USBD_STRINGS_PRODUCT_EXTERN
#define APP_USBD_STRINGS_PRODUCT_EXTERN 0
#endif

// </e>
// <e> APP_USBD_STRING_ID_SERIAL
//==========================================================
#ifndef APP_USBD_STRING_ID_SERIAL
#define APP_USBD_STRING_ID_SERIAL 0
#endif

// <q> APP_USBD_STRING_SERIAL_EXTERN - Define whether @ref APP_USBD_STRING_SERIAL is created by macro or declared as a global variable.

// <i> Serial number that is defined the same way like in @ref APP_USBD_STRINGS_MANUFACTURER.
#ifndef APP_USBD_STRING_SERIAL_EXTERN
#define APP_USBD_STRING_SERIAL_EXTERN 0
#endif

// </e>
// <o> APP_USBD_VID - Vendor ID 0x0000-0xFFFF

// <i> Vendor ID ordered from USB IF: http://www.usb.org/developers/vendor/
#ifndef APP_USBD_VID
#define APP_USBD_VID 0
#endif

// </e>
// <q> APP_USBD_HID_ENABLED - app_usbd_hid - USB HID class

#ifndef APP_USBD_HID_ENABLED
#define APP_USBD_HID_ENABLED 0
#endif

// <q> APP_USBD_HID_GENERIC_ENABLED - app_usbd_hid_generic - USB HID generic

#ifndef APP_USBD_HID_GENERIC_ENABLED
#define APP_USBD_HID_GENERIC_ENABLED 0
#endif

// <q> APP_USBD_HID_KBD_ENABLED - app_usbd_hid_kbd - USB HID keyboard

#ifndef APP_USBD_HID_KBD_ENABLED
#define APP_USBD_HID_KBD_ENABLED 0
#endif

// <q> APP_USBD_HID_MOUSE_ENABLED - app_usbd_hid_mouse - USB HID mouse

#ifndef APP_USBD_HID_MOUSE_ENABLED
#define APP_USBD_HID_MOUSE_ENABLED 0
#endif

// <q> APP_USBD_MSC_ENABLED - app_usbd_msc - USB MSC class

#ifndef APP_USBD_MSC_ENABLED
#define APP_USBD_MSC_ENABLED 0
#endif

// <q> APP_USBD_NRF_DFU_TRIGGER_ENABLED - app_usbd_nrf_dfu_trigger - USBD Nordic DFU Trigger class

#ifndef APP_USBD_NRF_DFU_TRIGGER_ENABLED
#define APP_USBD_NRF_DFU_TRIGGER_ENABLED 0
#endif

// <q> CRC16_ENABLED - crc16 - CRC16 calculation routines

#ifndef CRC16_ENABLED
#define CRC16_ENABLED 0
#endif

// <q> CRC32_ENABLED - crc32 - CRC32 calculation routines

#ifndef CRC32_ENABLED
#define CRC32_ENABLED 0
#endif

// <q> ECC_ENABLED - ecc - Elliptic Curve Cryptography Library

#ifndef ECC_ENABLED
#define ECC_ENABLED 0
#endif

// <e> FDS_ENABLED
//==========================================================
#ifndef FDS_ENABLED
#define FDS_ENABLED 0
#endif

// <h> Backend
//==========================================================
#ifndef Backend
#define Backend 
#endif

// <o> FDS_BACKEND - FDS flash backend.

// <i> NRF_FSTORAGE_NVMC uses the nrf_fstorage_nvmc implementation. Use this setting if you don't use the SoftDevice.
// <1=> NRF_FSTORAGE_NVMC
// <2=> NRF_FSTORAGE_SD
#ifndef FDS_BACKEND
#define FDS_BACKEND 2
#endif

// </h>
// <h> CRC
//==========================================================
#ifndef CRC
#define CRC 
#endif

// <e> FDS_CRC_CHECK_ON_READ
//==========================================================
#ifndef FDS_CRC_CHECK_ON_READ
#define FDS_CRC_CHECK_ON_READ 0
#endif

// <o> FDS_CRC_CHECK_ON_WRITE - Perform a CRC check on newly written records.

// <i> This setting can be used to make sure that the record data was not altered while being written to flash.
// <1=> Enabled
// <0=> Disabled
#ifndef FDS_CRC_CHECK_ON_WRITE
#define FDS_CRC_CHECK_ON_WRITE 0
#endif

// </e>
// </h>
// <h> Pages
//==========================================================
#ifndef Pages
#define Pages 
#endif

// <o> FDS_VIRTUAL_PAGE_SIZE - The size of a virtual flash page.

// <i> The size of a virtual page must be a multiple of the size of a physical page.
// <1024=> 1024
// <2048=> 2048
#ifndef FDS_VIRTUAL_PAGE_SIZE
#define FDS_VIRTUAL_PAGE_SIZE 1024
#endif

// <o> FDS_VIRTUAL_PAGES - Number of virtual flash pages to use.

// <i> The total amount of flash memory that is used by FDS amounts to @ref FDS_VIRTUAL_PAGES * @ref FDS_VIRTUAL_PAGE_SIZE * 4 bytes.
#ifndef FDS_VIRTUAL_PAGES
#define FDS_VIRTUAL_PAGES 3
#endif

// <o> FDS_VIRTUAL_PAGES_RESERVED - The number of virtual flash pages that are used by other modules.

// <i> As a result the reserved space can be used by other modules.
#ifndef FDS_VIRTUAL_PAGES_RESERVED
#define FDS_VIRTUAL_PAGES_RESERVED 0
#endif

// </h>
// <h> Queue
//==========================================================
#ifndef Queue
#define Queue 
#endif

// <o> FDS_OP_QUEUE_SIZE - Size of the internal queue.

// <i> Increase this value if you frequently get synchronous FDS_ERR_NO_SPACE_IN_QUEUES errors.
#ifndef FDS_OP_QUEUE_SIZE
#define FDS_OP_QUEUE_SIZE 4
#endif

// </h>
// <h> Users
//==========================================================
#ifndef Users
#define Users 
#endif

// <o> FDS_MAX_USERS - Maximum number of callbacks that can be registered.

#ifndef FDS_MAX_USERS
#define FDS_MAX_USERS 4
#endif

// </h>
// </e>
// <e> HARDFAULT_HANDLER_ENABLED
//==========================================================
#ifndef HARDFAULT_HANDLER_ENABLED
#define HARDFAULT_HANDLER_ENABLED 0
#endif

// <q> HARDFAULT_HANDLER_GDB_PSP_BACKTRACE - Bypass the GDB problem with multiple stack pointers backtrace

// <i> Before a HardFault handler exits, the stack will be reverted to its previous value.
#ifndef HARDFAULT_HANDLER_GDB_PSP_BACKTRACE
#define HARDFAULT_HANDLER_GDB_PSP_BACKTRACE 0
#endif

// </e>
// <e> HCI_MEM_POOL_ENABLED
//==========================================================
#ifndef HCI_MEM_POOL_ENABLED
#define HCI_MEM_POOL_ENABLED 0
#endif

// <o> HCI_RX_BUF_QUEUE_SIZE - RX buffer queue size.

#ifndef HCI_RX_BUF_QUEUE_SIZE
#define HCI_RX_BUF_QUEUE_SIZE 4
#endif

// <o> HCI_RX_BUF_SIZE - RX buffer size in bytes.

#ifndef HCI_RX_BUF_SIZE
#define HCI_RX_BUF_SIZE 600
#endif

// <o> HCI_TX_BUF_SIZE - TX buffer size in bytes.

#ifndef HCI_TX_BUF_SIZE
#define HCI_TX_BUF_SIZE 600
#endif

// </e>
// <e> HCI_SLIP_ENABLED
//==========================================================
#ifndef HCI_SLIP_ENABLED
#define HCI_SLIP_ENABLED 0
#endif

// <o> HCI_UART_BAUDRATE - Default Baudrate

// <323584=> 1200
// <643072=> 2400
// <1290240=> 4800
// <2576384=> 9600
// <3862528=> 14400
// <5152768=> 19200
// <7716864=> 28800
// <10289152=> 38400
// <15400960=> 57600
// <20615168=> 76800
// <30801920=> 115200
// <61865984=> 230400
// <67108864=> 250000
// <121634816=> 460800
// <251658240=> 921600
// <268435456=> 1000000
#ifndef HCI_UART_BAUDRATE
#define HCI_UART_BAUDRATE 30801920
#endif

// <o> HCI_UART_CTS_PIN - UART CTS pin

#ifndef HCI_UART_CTS_PIN
#define HCI_UART_CTS_PIN 31
#endif

// <o> HCI_UART_FLOW_CONTROL - Hardware Flow Control

// <0=> Disabled
// <1=> Enabled
#ifndef HCI_UART_FLOW_CONTROL
#define HCI_UART_FLOW_CONTROL 0
#endif

// <o> HCI_UART_RTS_PIN - UART RTS pin

#ifndef HCI_UART_RTS_PIN
#define HCI_UART_RTS_PIN 31
#endif

// <o> HCI_UART_RX_PIN - UART RX pin

#ifndef HCI_UART_RX_PIN
#define HCI_UART_RX_PIN 31
#endif

// <o> HCI_UART_TX_PIN - UART TX pin

#ifndef HCI_UART_TX_PIN
#define HCI_UART_TX_PIN 31
#endif

// </e>
// <e> HCI_TRANSPORT_ENABLED
//==========================================================
#ifndef HCI_TRANSPORT_ENABLED
#define HCI_TRANSPORT_ENABLED 0
#endif

// <o> HCI_MAX_PACKET_SIZE_IN_BITS - Maximum size of a single application packet in bits.

#ifndef HCI_MAX_PACKET_SIZE_IN_BITS
#define HCI_MAX_PACKET_SIZE_IN_BITS 8000
#endif

// </e>
// <q> LED_SOFTBLINK_ENABLED - led_softblink - led_softblink module

#ifndef LED_SOFTBLINK_ENABLED
#define LED_SOFTBLINK_ENABLED 0
#endif

// <q> LOW_POWER_PWM_ENABLED - low_power_pwm - low_power_pwm module

#ifndef LOW_POWER_PWM_ENABLED
#define LOW_POWER_PWM_ENABLED 0
#endif

// <e> MEM_MANAGER_ENABLED
//==========================================================
#ifndef MEM_MANAGER_ENABLED
#define MEM_MANAGER_ENABLED 0
#endif

// <e> MEM_MANAGER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef MEM_MANAGER_CONFIG_LOG_ENABLED
#define MEM_MANAGER_CONFIG_LOG_ENABLED 0
#endif

// <o> MEM_MANAGER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef MEM_MANAGER_CONFIG_DEBUG_COLOR
#define MEM_MANAGER_CONFIG_DEBUG_COLOR 0
#endif

// <o> MEM_MANAGER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef MEM_MANAGER_CONFIG_INFO_COLOR
#define MEM_MANAGER_CONFIG_INFO_COLOR 0
#endif

// <o> MEM_MANAGER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef MEM_MANAGER_CONFIG_LOG_LEVEL
#define MEM_MANAGER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <q> MEM_MANAGER_DISABLE_API_PARAM_CHECK - Disable API parameter checks in the module.

#ifndef MEM_MANAGER_DISABLE_API_PARAM_CHECK
#define MEM_MANAGER_DISABLE_API_PARAM_CHECK 0
#endif

// <o> MEMORY_MANAGER_LARGE_BLOCK_COUNT - Size of each memory blocks identified as 'large' block. 0-255

#ifndef MEMORY_MANAGER_LARGE_BLOCK_COUNT
#define MEMORY_MANAGER_LARGE_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_LARGE_BLOCK_SIZE - Size of each memory blocks identified as 'large' block.

// <i> Size of each memory blocks identified as 'large' block. Memory block are recommended to be word-sized.
#ifndef MEMORY_MANAGER_LARGE_BLOCK_SIZE
#define MEMORY_MANAGER_LARGE_BLOCK_SIZE 256
#endif

// <o> MEMORY_MANAGER_MEDIUM_BLOCK_COUNT - Size of each memory blocks identified as 'medium' block. 0-255

#ifndef MEMORY_MANAGER_MEDIUM_BLOCK_COUNT
#define MEMORY_MANAGER_MEDIUM_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_MEDIUM_BLOCK_SIZE - Size of each memory blocks identified as 'medium' block.

// <i> Size of each memory blocks identified as 'medium' block. Memory block are recommended to be word-sized.
#ifndef MEMORY_MANAGER_MEDIUM_BLOCK_SIZE
#define MEMORY_MANAGER_MEDIUM_BLOCK_SIZE 256
#endif

// <o> MEMORY_MANAGER_SMALL_BLOCK_COUNT - Size of each memory blocks identified as 'small' block. 0-255

#ifndef MEMORY_MANAGER_SMALL_BLOCK_COUNT
#define MEMORY_MANAGER_SMALL_BLOCK_COUNT 1
#endif

// <o> MEMORY_MANAGER_SMALL_BLOCK_SIZE - Size of each memory blocks identified as 'small' block.

// <i> Size of each memory blocks identified as 'small' block. Memory block are recommended to be word-sized.
#ifndef MEMORY_MANAGER_SMALL_BLOCK_SIZE
#define MEMORY_MANAGER_SMALL_BLOCK_SIZE 32
#endif

// <o> MEMORY_MANAGER_XLARGE_BLOCK_COUNT - Size of each memory blocks identified as 'extra large' block. 0-255

#ifndef MEMORY_MANAGER_XLARGE_BLOCK_COUNT
#define MEMORY_MANAGER_XLARGE_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_XLARGE_BLOCK_SIZE - Size of each memory blocks identified as 'extra large' block.

// <i> Size of each memory blocks identified as 'extra large' block. Memory block are recommended to be word-sized.
#ifndef MEMORY_MANAGER_XLARGE_BLOCK_SIZE
#define MEMORY_MANAGER_XLARGE_BLOCK_SIZE 1320
#endif

// <o> MEMORY_MANAGER_XSMALL_BLOCK_COUNT - Size of each memory blocks identified as 'extra small' block. 0-255

#ifndef MEMORY_MANAGER_XSMALL_BLOCK_COUNT
#define MEMORY_MANAGER_XSMALL_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_XSMALL_BLOCK_SIZE - Size of each memory blocks identified as 'extra small' block.

// <i> Size of each memory blocks identified as 'extra large' block. Memory block are recommended to be word-sized.
#ifndef MEMORY_MANAGER_XSMALL_BLOCK_SIZE
#define MEMORY_MANAGER_XSMALL_BLOCK_SIZE 64
#endif

// <o> MEMORY_MANAGER_XXLARGE_BLOCK_COUNT - Size of each memory blocks identified as 'extra extra large' block. 0-255

#ifndef MEMORY_MANAGER_XXLARGE_BLOCK_COUNT
#define MEMORY_MANAGER_XXLARGE_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_XXLARGE_BLOCK_SIZE - Size of each memory blocks identified as 'extra extra large' block.

// <i> Size of each memory blocks identified as 'extra extra large' block. Memory block are recommended to be word-sized.
#ifndef MEMORY_MANAGER_XXLARGE_BLOCK_SIZE
#define MEMORY_MANAGER_XXLARGE_BLOCK_SIZE 3444
#endif

// <o> MEMORY_MANAGER_XXSMALL_BLOCK_COUNT - Size of each memory blocks identified as 'extra extra small' block. 0-255

#ifndef MEMORY_MANAGER_XXSMALL_BLOCK_COUNT
#define MEMORY_MANAGER_XXSMALL_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_XXSMALL_BLOCK_SIZE - Size of each memory blocks identified as 'extra extra small' block.

// <i> Size of each memory blocks identified as 'extra extra small' block. Memory block are recommended to be word-sized.
#ifndef MEMORY_MANAGER_XXSMALL_BLOCK_SIZE
#define MEMORY_MANAGER_XXSMALL_BLOCK_SIZE 32
#endif

// </e>
// <e> NRF_BALLOC_ENABLED
//==========================================================
#ifndef NRF_BALLOC_ENABLED
#define NRF_BALLOC_ENABLED 0
#endif

// <e> NRF_BALLOC_CONFIG_DEBUG_ENABLED
//==========================================================
#ifndef NRF_BALLOC_CONFIG_DEBUG_ENABLED
#define NRF_BALLOC_CONFIG_DEBUG_ENABLED 0
#endif

// <q> NRF_BALLOC_CLI_CMDS - Enable CLI commands specific to the module

#ifndef NRF_BALLOC_CLI_CMDS
#define NRF_BALLOC_CLI_CMDS 0
#endif

// <q> NRF_BALLOC_CONFIG_BASIC_CHECKS_ENABLED - Enables basic checks in this module.

#ifndef NRF_BALLOC_CONFIG_BASIC_CHECKS_ENABLED
#define NRF_BALLOC_CONFIG_BASIC_CHECKS_ENABLED 0
#endif

// <q> NRF_BALLOC_CONFIG_DATA_TRASHING_CHECK_ENABLED - Enables free memory corruption check in this module.

#ifndef NRF_BALLOC_CONFIG_DATA_TRASHING_CHECK_ENABLED
#define NRF_BALLOC_CONFIG_DATA_TRASHING_CHECK_ENABLED 0
#endif

// <q> NRF_BALLOC_CONFIG_DOUBLE_FREE_CHECK_ENABLED - Enables double memory free check in this module.

#ifndef NRF_BALLOC_CONFIG_DOUBLE_FREE_CHECK_ENABLED
#define NRF_BALLOC_CONFIG_DOUBLE_FREE_CHECK_ENABLED 0
#endif

// <o> NRF_BALLOC_CONFIG_HEAD_GUARD_WORDS - Number of words used as head guard. 0-255

#ifndef NRF_BALLOC_CONFIG_HEAD_GUARD_WORDS
#define NRF_BALLOC_CONFIG_HEAD_GUARD_WORDS 1
#endif

// <o> NRF_BALLOC_CONFIG_TAIL_GUARD_WORDS - Number of words used as tail guard. 0-255

#ifndef NRF_BALLOC_CONFIG_TAIL_GUARD_WORDS
#define NRF_BALLOC_CONFIG_TAIL_GUARD_WORDS 1
#endif

// </e>
// </e>
// <q> NRF_BLOCK_DEV_EMPTY_ENABLED - nrf_block_dev_empty - Empty block device

#ifndef NRF_BLOCK_DEV_EMPTY_ENABLED
#define NRF_BLOCK_DEV_EMPTY_ENABLED 0
#endif

// <q> NRF_BLOCK_DEV_QSPI_ENABLED - nrf_block_dev_qspi - QSPI block device

#ifndef NRF_BLOCK_DEV_QSPI_ENABLED
#define NRF_BLOCK_DEV_QSPI_ENABLED 0
#endif

// <q> NRF_BLOCK_DEV_RAM_ENABLED - nrf_block_dev_ram - RAM block device

#ifndef NRF_BLOCK_DEV_RAM_ENABLED
#define NRF_BLOCK_DEV_RAM_ENABLED 0
#endif

// <h> nrf_cli
//==========================================================
#ifndef nrf_cli
#define nrf_cli 
#endif

// <o> NRF_CLI_ARGC_MAX - Maximum number of parameters passed to the command handler.

#ifndef NRF_CLI_ARGC_MAX
#define NRF_CLI_ARGC_MAX 12
#endif

// <q> NRF_CLI_BUILD_IN_CMDS_ENABLED - CLI built-in commands.

#ifndef NRF_CLI_BUILD_IN_CMDS_ENABLED
#define NRF_CLI_BUILD_IN_CMDS_ENABLED 0
#endif

// <o> NRF_CLI_CMD_BUFF_SIZE - Maximum buffer size for a single command.

#ifndef NRF_CLI_CMD_BUFF_SIZE
#define NRF_CLI_CMD_BUFF_SIZE 128
#endif

// <q> NRF_CLI_ECHO_STATUS - CLI echo status. If set, echo is ON.

#ifndef NRF_CLI_ECHO_STATUS
#define NRF_CLI_ECHO_STATUS 0
#endif

// <q> NRF_CLI_ENABLED - Enable/disable the CLI module.

#ifndef NRF_CLI_ENABLED
#define NRF_CLI_ENABLED 0
#endif

// <e> NRF_CLI_HISTORY_ENABLED
//==========================================================
#ifndef NRF_CLI_HISTORY_ENABLED
#define NRF_CLI_HISTORY_ENABLED 0
#endif

// <o> NRF_CLI_HISTORY_ELEMENT_COUNT - Number of history memory objects.

#ifndef NRF_CLI_HISTORY_ELEMENT_COUNT
#define NRF_CLI_HISTORY_ELEMENT_COUNT 8
#endif

// <o> NRF_CLI_HISTORY_ELEMENT_SIZE - Size of one memory object reserved for CLI history.

#ifndef NRF_CLI_HISTORY_ELEMENT_SIZE
#define NRF_CLI_HISTORY_ELEMENT_SIZE 32
#endif

// </e>
// <q> NRF_CLI_LOG_BACKEND - Enable logger backend interface.

#ifndef NRF_CLI_LOG_BACKEND
#define NRF_CLI_LOG_BACKEND 0
#endif

// <q> NRF_CLI_METAKEYS_ENABLED - Enable additional control keys for CLI commands like ctrl+a, ctrl+e, ctrl+w, ctrl+u

#ifndef NRF_CLI_METAKEYS_ENABLED
#define NRF_CLI_METAKEYS_ENABLED 0
#endif

// <o> NRF_CLI_PRINTF_BUFF_SIZE - Maximum print buffer size.

#ifndef NRF_CLI_PRINTF_BUFF_SIZE
#define NRF_CLI_PRINTF_BUFF_SIZE 23
#endif

// <q> NRF_CLI_STATISTICS_ENABLED - Enable CLI statistics.

#ifndef NRF_CLI_STATISTICS_ENABLED
#define NRF_CLI_STATISTICS_ENABLED 0
#endif

// <q> NRF_CLI_USES_TASK_MANAGER_ENABLED - Enable CLI to use task_manager

#ifndef NRF_CLI_USES_TASK_MANAGER_ENABLED
#define NRF_CLI_USES_TASK_MANAGER_ENABLED 0
#endif

// <q> NRF_CLI_VT100_COLORS_ENABLED - CLI VT100 colors.

#ifndef NRF_CLI_VT100_COLORS_ENABLED
#define NRF_CLI_VT100_COLORS_ENABLED 0
#endif

// <q> NRF_CLI_WILDCARD_ENABLED - Enable wildcard functionality for CLI commands.

#ifndef NRF_CLI_WILDCARD_ENABLED
#define NRF_CLI_WILDCARD_ENABLED 0
#endif

// </h>
// <e> NRF_CLI_BLE_UART_ENABLED
//==========================================================
#ifndef NRF_CLI_BLE_UART_ENABLED
#define NRF_CLI_BLE_UART_ENABLED 0
#endif

// <o> NRF_CLI_BLE_UART_MAX_CLIENTS - Maximum number of simultaneous clients.

#ifndef NRF_CLI_BLE_UART_MAX_CLIENTS
#define NRF_CLI_BLE_UART_MAX_CLIENTS 1
#endif

// </e>
// <h> nrf_cli_cdc_acm
//==========================================================
#ifndef nrf_cli_cdc_acm
#define nrf_cli_cdc_acm 
#endif

// <o> NRF_CLI_CDC_ACM_COMM_INTERFACE - COMM interface number.

#ifndef NRF_CLI_CDC_ACM_COMM_INTERFACE
#define NRF_CLI_CDC_ACM_COMM_INTERFACE NRF_DRV_USBD_EPIN2
#endif

// <o> NRF_CLI_CDC_ACM_DATA_INTERFACE - DATA interface number.

#ifndef NRF_CLI_CDC_ACM_DATA_INTERFACE
#define NRF_CLI_CDC_ACM_DATA_INTERFACE NRF_DRV_USBD_EPOUT1
#endif

// <q> NRF_CLI_CDC_ACM_ENABLED - Enable/disable the CLI CDC ACM module.

#ifndef NRF_CLI_CDC_ACM_ENABLED
#define NRF_CLI_CDC_ACM_ENABLED 0
#endif

// </h>
// <h> nrf_cli_libuarte
//==========================================================
#ifndef nrf_cli_libuarte
#define nrf_cli_libuarte 
#endif

// <q> NRF_CLI_LIBUARTE_ENABLED - Enable/disable the CLI libUARTE module.

#ifndef NRF_CLI_LIBUARTE_ENABLED
#define NRF_CLI_LIBUARTE_ENABLED 0
#endif

// <o> NRF_CLI_LIBUARTE_TIMEOUT_RTC_INSTANCE - UARTE timeout RTC instance

// <0=> RTC0
// <1=> RTC1
// <2=> RTC2
// <255=> TIMER
#ifndef NRF_CLI_LIBUARTE_TIMEOUT_RTC_INSTANCE
#define NRF_CLI_LIBUARTE_TIMEOUT_RTC_INSTANCE 2
#endif

// <o> NRF_CLI_LIBUARTE_TIMEOUT_TIMER_INSTANCE - UARTE timeout TIMER instance

// <0=> TIMER0
// <1=> TIMER1
// <2=> TIMER2
// <3=> TIMER3
// <4=> TIMER4
// <255=> RTC
#ifndef NRF_CLI_LIBUARTE_TIMEOUT_TIMER_INSTANCE
#define NRF_CLI_LIBUARTE_TIMEOUT_TIMER_INSTANCE 255
#endif

// <o> NRF_CLI_LIBUARTE_TIMER_INSTANCE - UARTE TIMER instance

// <0=> TIMER0
// <1=> TIMER1
// <2=> TIMER2
// <3=> TIMER3
// <4=> TIMER4
#ifndef NRF_CLI_LIBUARTE_TIMER_INSTANCE
#define NRF_CLI_LIBUARTE_TIMER_INSTANCE 2
#endif

// <o> NRF_CLI_LIBUARTE_UARTE_INSTANCE - UARTE instance

// <0=> UARTE0
#ifndef NRF_CLI_LIBUARTE_UARTE_INSTANCE
#define NRF_CLI_LIBUARTE_UARTE_INSTANCE 0
#endif

// </h>
// <e> NRF_CLI_RTT_ENABLED
//==========================================================
#ifndef NRF_CLI_RTT_ENABLED
#define NRF_CLI_RTT_ENABLED 0
#endif

// <o> NRF_CLI_RTT_TERMINAL_ID - RTT terminal ID for CLI.

#ifndef NRF_CLI_RTT_TERMINAL_ID
#define NRF_CLI_RTT_TERMINAL_ID 0
#endif

// <o> NRF_CLI_RTT_TX_RETRY_CNT - Writing to RTT retries.

// <i> and scheme with retry is applied again.
#ifndef NRF_CLI_RTT_TX_RETRY_CNT
#define NRF_CLI_RTT_TX_RETRY_CNT 5
#endif

// <o> NRF_CLI_RTT_TX_RETRY_DELAY_MS - Period before retrying writing to RTT

#ifndef NRF_CLI_RTT_TX_RETRY_DELAY_MS
#define NRF_CLI_RTT_TX_RETRY_DELAY_MS 10
#endif

// </e>
// <q> NRF_CLI_UART_ENABLED - nrf_cli_uart - UART command line interface transport

#ifndef NRF_CLI_UART_ENABLED
#define NRF_CLI_UART_ENABLED 0
#endif

// <e> NRF_CSENSE_ENABLED
//==========================================================
#ifndef NRF_CSENSE_ENABLED
#define NRF_CSENSE_ENABLED 0
#endif

// <o> NRF_CSENSE_MAX_PADS_NUMBER - Maximum number of pads used for one instance.

#ifndef NRF_CSENSE_MAX_PADS_NUMBER
#define NRF_CSENSE_MAX_PADS_NUMBER 20
#endif

// <o> NRF_CSENSE_MAX_VALUE - Maximum normalized value obtained from measurement.

#ifndef NRF_CSENSE_MAX_VALUE
#define NRF_CSENSE_MAX_VALUE 1000
#endif

// <o> NRF_CSENSE_MIN_PAD_VALUE - Minimum normalized value on a pad required to take its value into account.

#ifndef NRF_CSENSE_MIN_PAD_VALUE
#define NRF_CSENSE_MIN_PAD_VALUE 20
#endif

// <o> NRF_CSENSE_OUTPUT_PIN - Output pin used by the low-level module.

// <i> This is used when capacitive sensor does not use COMP.
#ifndef NRF_CSENSE_OUTPUT_PIN
#define NRF_CSENSE_OUTPUT_PIN 26
#endif

// <o> NRF_CSENSE_PAD_DEVIATION - Minimum value measured on a pad required to take it into account while calculating the step.

#ifndef NRF_CSENSE_PAD_DEVIATION
#define NRF_CSENSE_PAD_DEVIATION 70
#endif

// <o> NRF_CSENSE_PAD_HYSTERESIS - Minimum value of change required to determine that a pad was touched.

#ifndef NRF_CSENSE_PAD_HYSTERESIS
#define NRF_CSENSE_PAD_HYSTERESIS 15
#endif

// </e>
// <e> NRF_DRV_CSENSE_ENABLED
//==========================================================
#ifndef NRF_DRV_CSENSE_ENABLED
#define NRF_DRV_CSENSE_ENABLED 0
#endif

// <e> USE_COMP
//==========================================================
#ifndef USE_COMP
#define USE_COMP 0
#endif

// <o> MEASUREMENT_PERIOD - Single measurement period.

// <i> I_SOURCE, VUP, and VDOWN are values used to initialize COMP and C is the capacitance of the used pad.
#ifndef MEASUREMENT_PERIOD
#define MEASUREMENT_PERIOD 20
#endif

// <o> TIMER0_FOR_CSENSE - First TIMER instance used by the driver (not used on nRF51).

#ifndef TIMER0_FOR_CSENSE
#define TIMER0_FOR_CSENSE 1
#endif

// <o> TIMER1_FOR_CSENSE - Second TIMER instance used by the driver (not used on nRF51).

#ifndef TIMER1_FOR_CSENSE
#define TIMER1_FOR_CSENSE 2
#endif

// </e>
// </e>
// <h> nrf_fprintf
//==========================================================
#ifndef nrf_fprintf
#define nrf_fprintf 
#endif

// <q> NRF_FPRINTF_DOUBLE_ENABLED - Enable IEEE-754 double precision formatting.

#ifndef NRF_FPRINTF_DOUBLE_ENABLED
#define NRF_FPRINTF_DOUBLE_ENABLED 0
#endif

// <q> NRF_FPRINTF_ENABLED - Enable/disable fprintf module.

#ifndef NRF_FPRINTF_ENABLED
#define NRF_FPRINTF_ENABLED 0
#endif

// <q> NRF_FPRINTF_FLAG_AUTOMATIC_CR_ON_LF_ENABLED - For each printed LF, function will add CR.

#ifndef NRF_FPRINTF_FLAG_AUTOMATIC_CR_ON_LF_ENABLED
#define NRF_FPRINTF_FLAG_AUTOMATIC_CR_ON_LF_ENABLED 0
#endif

// </h>
// <q> NRF_FPRINTF_ENABLED - nrf_fprintf - fprintf function.

#ifndef NRF_FPRINTF_ENABLED
#define NRF_FPRINTF_ENABLED 0
#endif

// <e> NRF_FSTORAGE_ENABLED
//==========================================================
#ifndef NRF_FSTORAGE_ENABLED
#define NRF_FSTORAGE_ENABLED 0
#endif

// <h> nrf_fstorage
//==========================================================
#ifndef nrf_fstorage
#define nrf_fstorage 
#endif

// <q> NRF_FSTORAGE_PARAM_CHECK_DISABLED - Disable user input validation

// <i> Recommended setting: OFF, only enable this setting if size is a major concern.
#ifndef NRF_FSTORAGE_PARAM_CHECK_DISABLED
#define NRF_FSTORAGE_PARAM_CHECK_DISABLED 0
#endif

// </h>
// <h> nrf_fstorage_sd
//==========================================================
#ifndef nrf_fstorage_sd
#define nrf_fstorage_sd 
#endif

// <o> NRF_FSTORAGE_SD_MAX_RETRIES - Maximum number of attempts at executing an operation when the SoftDevice is busy

// <i> The SoftDevice might fail to schedule flash access due to high BLE activity.
#ifndef NRF_FSTORAGE_SD_MAX_RETRIES
#define NRF_FSTORAGE_SD_MAX_RETRIES 8
#endif

// <o> NRF_FSTORAGE_SD_MAX_WRITE_SIZE - Maximum number of bytes to be written to flash in a single operation

// <i> That is 1024 bytes for nRF51 ICs and 4096 bytes for nRF52 ICs.
#ifndef NRF_FSTORAGE_SD_MAX_WRITE_SIZE
#define NRF_FSTORAGE_SD_MAX_WRITE_SIZE 4096
#endif

// <o> NRF_FSTORAGE_SD_QUEUE_SIZE - Size of the internal queue of operations

// <i> Increase this value if API calls frequently return the error @ref NRF_ERROR_NO_MEM.
#ifndef NRF_FSTORAGE_SD_QUEUE_SIZE
#define NRF_FSTORAGE_SD_QUEUE_SIZE 4
#endif

// </h>
// </e>
// <q> NRF_GFX_ENABLED - nrf_gfx - GFX module

#ifndef NRF_GFX_ENABLED
#define NRF_GFX_ENABLED 0
#endif

// <q> NRF_LIBUARTE_ASYNC_WITH_APP_TIMER - nrf_libuarte_async - libUARTE_async library

#ifndef NRF_LIBUARTE_ASYNC_WITH_APP_TIMER
#define NRF_LIBUARTE_ASYNC_WITH_APP_TIMER 0
#endif

// <h> nrf_libuarte_drv
//==========================================================
#ifndef nrf_libuarte_drv
#define nrf_libuarte_drv 
#endif

// <q> NRF_LIBUARTE_DRV_HWFC_ENABLED - Enable HWFC support in the driver

#ifndef NRF_LIBUARTE_DRV_HWFC_ENABLED
#define NRF_LIBUARTE_DRV_HWFC_ENABLED 0
#endif

// <q> NRF_LIBUARTE_DRV_UARTE0 - UARTE0 instance

#ifndef NRF_LIBUARTE_DRV_UARTE0
#define NRF_LIBUARTE_DRV_UARTE0 0
#endif

// <q> NRF_LIBUARTE_DRV_UARTE1 - UARTE1 instance

#ifndef NRF_LIBUARTE_DRV_UARTE1
#define NRF_LIBUARTE_DRV_UARTE1 0
#endif

// </h>
// <q> NRF_MEMOBJ_ENABLED - nrf_memobj - Linked memory allocator module

#ifndef NRF_MEMOBJ_ENABLED
#define NRF_MEMOBJ_ENABLED 0
#endif

// <e> NRF_PWR_MGMT_ENABLED
//==========================================================
#ifndef NRF_PWR_MGMT_ENABLED
#define NRF_PWR_MGMT_ENABLED 0
#endif

// <q> NRF_PWR_MGMT_CONFIG_AUTO_SHUTDOWN_RETRY - Blocked shutdown procedure will be retried every second.

#ifndef NRF_PWR_MGMT_CONFIG_AUTO_SHUTDOWN_RETRY
#define NRF_PWR_MGMT_CONFIG_AUTO_SHUTDOWN_RETRY 0
#endif

// <q> NRF_PWR_MGMT_CONFIG_CPU_USAGE_MONITOR_ENABLED - Enables CPU usage monitor.

// <i> Module will trace percentage of CPU usage in one second intervals.
#ifndef NRF_PWR_MGMT_CONFIG_CPU_USAGE_MONITOR_ENABLED
#define NRF_PWR_MGMT_CONFIG_CPU_USAGE_MONITOR_ENABLED 0
#endif

// <e> NRF_PWR_MGMT_CONFIG_DEBUG_PIN_ENABLED
//==========================================================
#ifndef NRF_PWR_MGMT_CONFIG_DEBUG_PIN_ENABLED
#define NRF_PWR_MGMT_CONFIG_DEBUG_PIN_ENABLED 0
#endif

// <o> NRF_PWR_MGMT_SLEEP_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef NRF_PWR_MGMT_SLEEP_DEBUG_PIN
#define NRF_PWR_MGMT_SLEEP_DEBUG_PIN 31
#endif

// </e>
// <q> NRF_PWR_MGMT_CONFIG_FPU_SUPPORT_ENABLED - Enables FPU event cleaning.

#ifndef NRF_PWR_MGMT_CONFIG_FPU_SUPPORT_ENABLED
#define NRF_PWR_MGMT_CONFIG_FPU_SUPPORT_ENABLED 0
#endif

// <o> NRF_PWR_MGMT_CONFIG_HANDLER_PRIORITY_COUNT - The number of priorities for module handlers.

// <i> The number of stages of the shutdown process.
#ifndef NRF_PWR_MGMT_CONFIG_HANDLER_PRIORITY_COUNT
#define NRF_PWR_MGMT_CONFIG_HANDLER_PRIORITY_COUNT 3
#endif

// <e> NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_ENABLED
//==========================================================
#ifndef NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_ENABLED
#define NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_ENABLED 0
#endif

// <o> NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_S - Standby timeout (in seconds).

// <i> Shutdown procedure will begin no earlier than after this number of seconds.
#ifndef NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_S
#define NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_S 3
#endif

// </e>
// <q> NRF_PWR_MGMT_CONFIG_USE_SCHEDULER - Module will use @ref app_scheduler.

#ifndef NRF_PWR_MGMT_CONFIG_USE_SCHEDULER
#define NRF_PWR_MGMT_CONFIG_USE_SCHEDULER 0
#endif

// </e>
// <e> NRF_QUEUE_ENABLED
//==========================================================
#ifndef NRF_QUEUE_ENABLED
#define NRF_QUEUE_ENABLED 0
#endif

// <q> NRF_QUEUE_CLI_CMDS - Enable CLI commands specific to the module

#ifndef NRF_QUEUE_CLI_CMDS
#define NRF_QUEUE_CLI_CMDS 0
#endif

// </e>
// <q> NRF_SECTION_ITER_ENABLED - nrf_section_iter - Section iterator

#ifndef NRF_SECTION_ITER_ENABLED
#define NRF_SECTION_ITER_ENABLED 0
#endif

// <q> NRF_SERIAL_ENABLED - nrf_serial - Serial port interface

#ifndef NRF_SERIAL_ENABLED
#define NRF_SERIAL_ENABLED 0
#endif

// <q> NRF_SORTLIST_ENABLED - nrf_sortlist - Sorted list

#ifndef NRF_SORTLIST_ENABLED
#define NRF_SORTLIST_ENABLED 0
#endif

// <q> NRF_SPI_MNGR_ENABLED - nrf_spi_mngr - SPI transaction manager

#ifndef NRF_SPI_MNGR_ENABLED
#define NRF_SPI_MNGR_ENABLED 0
#endif

// <q> NRF_STRERROR_ENABLED - nrf_strerror - Library for converting error code to string.

#ifndef NRF_STRERROR_ENABLED
#define NRF_STRERROR_ENABLED 0
#endif

// <q> NRF_TWI_MNGR_ENABLED - nrf_twi_mngr - TWI transaction manager

#ifndef NRF_TWI_MNGR_ENABLED
#define NRF_TWI_MNGR_ENABLED 0
#endif

// <q> RETARGET_ENABLED - retarget - Retargeting stdio functions

#ifndef RETARGET_ENABLED
#define RETARGET_ENABLED 0
#endif

// <e> SIMPLE_TIMER_ENABLED
//==========================================================
#ifndef SIMPLE_TIMER_ENABLED
#define SIMPLE_TIMER_ENABLED 0
#endif

// <o> SIMPLE_TIMER_CONFIG_FREQUENCY - Timer frequency if in Timer mode

// <0=> 16
// <1=> 8
// <2=> 4
// <3=> 2
// <4=> 1
// <5=> 500
// <6=> 250
// <7=> 125
// <8=> 62.5
// <9=> 31.25
#ifndef SIMPLE_TIMER_CONFIG_FREQUENCY
#define SIMPLE_TIMER_CONFIG_FREQUENCY 4
#endif

// <o> SIMPLE_TIMER_CONFIG_INSTANCE - TIMER instance used

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
#ifndef SIMPLE_TIMER_CONFIG_INSTANCE
#define SIMPLE_TIMER_CONFIG_INSTANCE 1
#endif

// </e>
// <q> SLIP_ENABLED - slip - SLIP encoding and decoding

#ifndef SLIP_ENABLED
#define SLIP_ENABLED 0
#endif

// <e> TASK_MANAGER_ENABLED
//==========================================================
#ifndef TASK_MANAGER_ENABLED
#define TASK_MANAGER_ENABLED 0
#endif

// <q> TASK_MANAGER_CLI_CMDS - Enable CLI commands specific to the module

#ifndef TASK_MANAGER_CLI_CMDS
#define TASK_MANAGER_CLI_CMDS 0
#endif

// <o> TASK_MANAGER_CONFIG_MAX_TASKS - Maximum number of tasks which can be created

#ifndef TASK_MANAGER_CONFIG_MAX_TASKS
#define TASK_MANAGER_CONFIG_MAX_TASKS 2
#endif

// <o> TASK_MANAGER_CONFIG_STACK_GUARD - Configures stack guard.

// <0=> Disabled
// <4=> 32
// <5=> 64
// <6=> 128
// <7=> 256
// <8=> 512
#ifndef TASK_MANAGER_CONFIG_STACK_GUARD
#define TASK_MANAGER_CONFIG_STACK_GUARD 7
#endif

// <q> TASK_MANAGER_CONFIG_STACK_PROFILER_ENABLED - Enable stack profiling.

#ifndef TASK_MANAGER_CONFIG_STACK_PROFILER_ENABLED
#define TASK_MANAGER_CONFIG_STACK_PROFILER_ENABLED 0
#endif

// <o> TASK_MANAGER_CONFIG_STACK_SIZE - Stack size for every task (power of 2)

#ifndef TASK_MANAGER_CONFIG_STACK_SIZE
#define TASK_MANAGER_CONFIG_STACK_SIZE 1024
#endif

// </e>
// </h>
// <h> nRF_Log
//==========================================================
#ifndef nRF_Log
#define nRF_Log 
#endif

// <h> nrf_log
//==========================================================
#ifndef nrf_log
#define nrf_log 
#endif

// <h> nrf_log
//==========================================================
#ifndef nrf_log
#define nrf_log 
#endif

// <h> nrf_log
//==========================================================
#ifndef nrf_log
#define nrf_log 
#endif

// <e> APP_TIMER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_TIMER_CONFIG_LOG_ENABLED
#define APP_TIMER_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_TIMER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_TIMER_CONFIG_DEBUG_COLOR
#define APP_TIMER_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_TIMER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_TIMER_CONFIG_INFO_COLOR
#define APP_TIMER_CONFIG_INFO_COLOR 0
#endif

// <o> APP_TIMER_CONFIG_INITIAL_LOG_LEVEL - Initial severity level if dynamic filtering is enabled.

// <i> increased on instance basis.
// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_TIMER_CONFIG_INITIAL_LOG_LEVEL
#define APP_TIMER_CONFIG_INITIAL_LOG_LEVEL 3
#endif

// <o> APP_TIMER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_TIMER_CONFIG_LOG_LEVEL
#define APP_TIMER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> APP_USBD_CDC_ACM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_USBD_CDC_ACM_CONFIG_LOG_ENABLED
#define APP_USBD_CDC_ACM_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_USBD_CDC_ACM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_CDC_ACM_CONFIG_DEBUG_COLOR
#define APP_USBD_CDC_ACM_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_USBD_CDC_ACM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_CDC_ACM_CONFIG_INFO_COLOR
#define APP_USBD_CDC_ACM_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_CDC_ACM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_USBD_CDC_ACM_CONFIG_LOG_LEVEL
#define APP_USBD_CDC_ACM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> APP_USBD_DUMMY_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_USBD_DUMMY_CONFIG_LOG_ENABLED
#define APP_USBD_DUMMY_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_USBD_DUMMY_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_DUMMY_CONFIG_DEBUG_COLOR
#define APP_USBD_DUMMY_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_USBD_DUMMY_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_DUMMY_CONFIG_INFO_COLOR
#define APP_USBD_DUMMY_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_DUMMY_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_USBD_DUMMY_CONFIG_LOG_LEVEL
#define APP_USBD_DUMMY_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> APP_USBD_MSC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_USBD_MSC_CONFIG_LOG_ENABLED
#define APP_USBD_MSC_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_USBD_MSC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_MSC_CONFIG_DEBUG_COLOR
#define APP_USBD_MSC_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_USBD_MSC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_MSC_CONFIG_INFO_COLOR
#define APP_USBD_MSC_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_MSC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_USBD_MSC_CONFIG_LOG_LEVEL
#define APP_USBD_MSC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_ENABLED
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_USBD_NRF_DFU_TRIGGER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_DEBUG_COLOR
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_USBD_NRF_DFU_TRIGGER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_INFO_COLOR
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_LEVEL
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> CLOCK_CONFIG_LOG_ENABLED
//==========================================================
#ifndef CLOCK_CONFIG_LOG_ENABLED
#define CLOCK_CONFIG_LOG_ENABLED 0
#endif

// <o> CLOCK_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef CLOCK_CONFIG_DEBUG_COLOR
#define CLOCK_CONFIG_DEBUG_COLOR 0
#endif

// <o> CLOCK_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef CLOCK_CONFIG_INFO_COLOR
#define CLOCK_CONFIG_INFO_COLOR 0
#endif

// <o> CLOCK_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef CLOCK_CONFIG_LOG_LEVEL
#define CLOCK_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> COMP_CONFIG_LOG_ENABLED
//==========================================================
#ifndef COMP_CONFIG_LOG_ENABLED
#define COMP_CONFIG_LOG_ENABLED 0
#endif

// <o> COMP_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef COMP_CONFIG_DEBUG_COLOR
#define COMP_CONFIG_DEBUG_COLOR 0
#endif

// <o> COMP_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef COMP_CONFIG_INFO_COLOR
#define COMP_CONFIG_INFO_COLOR 0
#endif

// <o> COMP_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef COMP_CONFIG_LOG_LEVEL
#define COMP_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> GPIOTE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef GPIOTE_CONFIG_LOG_ENABLED
#define GPIOTE_CONFIG_LOG_ENABLED 0
#endif

// <o> GPIOTE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef GPIOTE_CONFIG_DEBUG_COLOR
#define GPIOTE_CONFIG_DEBUG_COLOR 0
#endif

// <o> GPIOTE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef GPIOTE_CONFIG_INFO_COLOR
#define GPIOTE_CONFIG_INFO_COLOR 0
#endif

// <o> GPIOTE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef GPIOTE_CONFIG_LOG_LEVEL
#define GPIOTE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> LPCOMP_CONFIG_LOG_ENABLED
//==========================================================
#ifndef LPCOMP_CONFIG_LOG_ENABLED
#define LPCOMP_CONFIG_LOG_ENABLED 0
#endif

// <o> LPCOMP_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef LPCOMP_CONFIG_DEBUG_COLOR
#define LPCOMP_CONFIG_DEBUG_COLOR 0
#endif

// <o> LPCOMP_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef LPCOMP_CONFIG_INFO_COLOR
#define LPCOMP_CONFIG_INFO_COLOR 0
#endif

// <o> LPCOMP_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef LPCOMP_CONFIG_LOG_LEVEL
#define LPCOMP_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_ATFIFO_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_ATFIFO_CONFIG_LOG_ENABLED
#define NRF_ATFIFO_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_ATFIFO_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_ATFIFO_CONFIG_DEBUG_COLOR
#define NRF_ATFIFO_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_ATFIFO_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_ATFIFO_CONFIG_INFO_COLOR
#define NRF_ATFIFO_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_ATFIFO_CONFIG_LOG_INIT_FILTER_LEVEL - Initial severity level if dynamic filtering is enabled

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_ATFIFO_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_ATFIFO_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_ATFIFO_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_ATFIFO_CONFIG_LOG_LEVEL
#define NRF_ATFIFO_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_BALLOC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_BALLOC_CONFIG_LOG_ENABLED
#define NRF_BALLOC_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_BALLOC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_BALLOC_CONFIG_DEBUG_COLOR
#define NRF_BALLOC_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_BALLOC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_BALLOC_CONFIG_INFO_COLOR
#define NRF_BALLOC_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL - Initial severity level if dynamic filtering is enabled.

// <i> increased on instance basis.
// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL
#define NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL 3
#endif

// <o> NRF_BALLOC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_BALLOC_CONFIG_LOG_LEVEL
#define NRF_BALLOC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_CLI_BLE_UART_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_CLI_BLE_UART_CONFIG_LOG_ENABLED
#define NRF_CLI_BLE_UART_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_CLI_BLE_UART_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_BLE_UART_CONFIG_DEBUG_COLOR
#define NRF_CLI_BLE_UART_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_CLI_BLE_UART_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_BLE_UART_CONFIG_INFO_COLOR
#define NRF_CLI_BLE_UART_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_CLI_BLE_UART_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_CLI_BLE_UART_CONFIG_LOG_LEVEL
#define NRF_CLI_BLE_UART_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_CLI_LIBUARTE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_CLI_LIBUARTE_CONFIG_LOG_ENABLED
#define NRF_CLI_LIBUARTE_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_CLI_LIBUARTE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_LIBUARTE_CONFIG_DEBUG_COLOR
#define NRF_CLI_LIBUARTE_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_CLI_LIBUARTE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_LIBUARTE_CONFIG_INFO_COLOR
#define NRF_CLI_LIBUARTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_CLI_LIBUARTE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_CLI_LIBUARTE_CONFIG_LOG_LEVEL
#define NRF_CLI_LIBUARTE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_CLI_UART_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_CLI_UART_CONFIG_LOG_ENABLED
#define NRF_CLI_UART_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_CLI_UART_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_UART_CONFIG_DEBUG_COLOR
#define NRF_CLI_UART_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_CLI_UART_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_UART_CONFIG_INFO_COLOR
#define NRF_CLI_UART_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_CLI_UART_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_CLI_UART_CONFIG_LOG_LEVEL
#define NRF_CLI_UART_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_LIBUARTE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_LIBUARTE_CONFIG_LOG_ENABLED
#define NRF_LIBUARTE_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_LIBUARTE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LIBUARTE_CONFIG_DEBUG_COLOR
#define NRF_LIBUARTE_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_LIBUARTE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LIBUARTE_CONFIG_INFO_COLOR
#define NRF_LIBUARTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_LIBUARTE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_LIBUARTE_CONFIG_LOG_LEVEL
#define NRF_LIBUARTE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_MEMOBJ_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_MEMOBJ_CONFIG_LOG_ENABLED
#define NRF_MEMOBJ_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_MEMOBJ_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_MEMOBJ_CONFIG_DEBUG_COLOR
#define NRF_MEMOBJ_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_MEMOBJ_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_MEMOBJ_CONFIG_INFO_COLOR
#define NRF_MEMOBJ_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_MEMOBJ_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_MEMOBJ_CONFIG_LOG_LEVEL
#define NRF_MEMOBJ_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_MPU_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_MPU_CONFIG_LOG_ENABLED
#define NRF_MPU_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_MPU_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_MPU_CONFIG_DEBUG_COLOR
#define NRF_MPU_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_MPU_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_MPU_CONFIG_INFO_COLOR
#define NRF_MPU_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_MPU_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_MPU_CONFIG_LOG_LEVEL
#define NRF_MPU_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_PWR_MGMT_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_PWR_MGMT_CONFIG_LOG_ENABLED
#define NRF_PWR_MGMT_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_PWR_MGMT_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_PWR_MGMT_CONFIG_DEBUG_COLOR
#define NRF_PWR_MGMT_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_PWR_MGMT_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_PWR_MGMT_CONFIG_INFO_COLOR
#define NRF_PWR_MGMT_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_PWR_MGMT_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_PWR_MGMT_CONFIG_LOG_LEVEL
#define NRF_PWR_MGMT_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_QUEUE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_QUEUE_CONFIG_LOG_ENABLED
#define NRF_QUEUE_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_QUEUE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_QUEUE_CONFIG_DEBUG_COLOR
#define NRF_QUEUE_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_QUEUE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_QUEUE_CONFIG_INFO_COLOR
#define NRF_QUEUE_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL - Initial severity level if dynamic filtering is enabled

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_QUEUE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_QUEUE_CONFIG_LOG_LEVEL
#define NRF_QUEUE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_SDH_ANT_LOG_ENABLED
//==========================================================
#ifndef NRF_SDH_ANT_LOG_ENABLED
#define NRF_SDH_ANT_LOG_ENABLED 0
#endif

// <o> NRF_SDH_ANT_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_ANT_DEBUG_COLOR
#define NRF_SDH_ANT_DEBUG_COLOR 0
#endif

// <o> NRF_SDH_ANT_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_ANT_INFO_COLOR
#define NRF_SDH_ANT_INFO_COLOR 0
#endif

// <o> NRF_SDH_ANT_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_SDH_ANT_LOG_LEVEL
#define NRF_SDH_ANT_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_SDH_BLE_LOG_ENABLED
//==========================================================
#ifndef NRF_SDH_BLE_LOG_ENABLED
#define NRF_SDH_BLE_LOG_ENABLED 0
#endif

// <o> NRF_SDH_BLE_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_BLE_DEBUG_COLOR
#define NRF_SDH_BLE_DEBUG_COLOR 0
#endif

// <o> NRF_SDH_BLE_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_BLE_INFO_COLOR
#define NRF_SDH_BLE_INFO_COLOR 0
#endif

// <o> NRF_SDH_BLE_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_SDH_BLE_LOG_LEVEL
#define NRF_SDH_BLE_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_SDH_LOG_ENABLED
//==========================================================
#ifndef NRF_SDH_LOG_ENABLED
#define NRF_SDH_LOG_ENABLED 0
#endif

// <o> NRF_SDH_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_DEBUG_COLOR
#define NRF_SDH_DEBUG_COLOR 0
#endif

// <o> NRF_SDH_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_INFO_COLOR
#define NRF_SDH_INFO_COLOR 0
#endif

// <o> NRF_SDH_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_SDH_LOG_LEVEL
#define NRF_SDH_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_SDH_SOC_LOG_ENABLED
//==========================================================
#ifndef NRF_SDH_SOC_LOG_ENABLED
#define NRF_SDH_SOC_LOG_ENABLED 0
#endif

// <o> NRF_SDH_SOC_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_SOC_DEBUG_COLOR
#define NRF_SDH_SOC_DEBUG_COLOR 0
#endif

// <o> NRF_SDH_SOC_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_SOC_INFO_COLOR
#define NRF_SDH_SOC_INFO_COLOR 0
#endif

// <o> NRF_SDH_SOC_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_SDH_SOC_LOG_LEVEL
#define NRF_SDH_SOC_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_SORTLIST_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_SORTLIST_CONFIG_LOG_ENABLED
#define NRF_SORTLIST_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_SORTLIST_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SORTLIST_CONFIG_DEBUG_COLOR
#define NRF_SORTLIST_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_SORTLIST_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SORTLIST_CONFIG_INFO_COLOR
#define NRF_SORTLIST_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_SORTLIST_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_SORTLIST_CONFIG_LOG_LEVEL
#define NRF_SORTLIST_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_STACK_GUARD_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_STACK_GUARD_CONFIG_LOG_ENABLED
#define NRF_STACK_GUARD_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_STACK_GUARD_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_STACK_GUARD_CONFIG_DEBUG_COLOR
#define NRF_STACK_GUARD_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_STACK_GUARD_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_STACK_GUARD_CONFIG_INFO_COLOR
#define NRF_STACK_GUARD_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_STACK_GUARD_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_STACK_GUARD_CONFIG_LOG_LEVEL
#define NRF_STACK_GUARD_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_TWI_SENSOR_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_TWI_SENSOR_CONFIG_LOG_ENABLED
#define NRF_TWI_SENSOR_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_TWI_SENSOR_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_TWI_SENSOR_CONFIG_DEBUG_COLOR
#define NRF_TWI_SENSOR_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_TWI_SENSOR_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_TWI_SENSOR_CONFIG_INFO_COLOR
#define NRF_TWI_SENSOR_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_TWI_SENSOR_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_TWI_SENSOR_CONFIG_LOG_LEVEL
#define NRF_TWI_SENSOR_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> PDM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef PDM_CONFIG_LOG_ENABLED
#define PDM_CONFIG_LOG_ENABLED 0
#endif

// <o> PDM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PDM_CONFIG_DEBUG_COLOR
#define PDM_CONFIG_DEBUG_COLOR 0
#endif

// <o> PDM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PDM_CONFIG_INFO_COLOR
#define PDM_CONFIG_INFO_COLOR 0
#endif

// <o> PDM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef PDM_CONFIG_LOG_LEVEL
#define PDM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> PPI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef PPI_CONFIG_LOG_ENABLED
#define PPI_CONFIG_LOG_ENABLED 0
#endif

// <o> PPI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PPI_CONFIG_DEBUG_COLOR
#define PPI_CONFIG_DEBUG_COLOR 0
#endif

// <o> PPI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PPI_CONFIG_INFO_COLOR
#define PPI_CONFIG_INFO_COLOR 0
#endif

// <o> PPI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef PPI_CONFIG_LOG_LEVEL
#define PPI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> PWM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef PWM_CONFIG_LOG_ENABLED
#define PWM_CONFIG_LOG_ENABLED 0
#endif

// <o> PWM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PWM_CONFIG_DEBUG_COLOR
#define PWM_CONFIG_DEBUG_COLOR 0
#endif

// <o> PWM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PWM_CONFIG_INFO_COLOR
#define PWM_CONFIG_INFO_COLOR 0
#endif

// <o> PWM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef PWM_CONFIG_LOG_LEVEL
#define PWM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> QDEC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef QDEC_CONFIG_LOG_ENABLED
#define QDEC_CONFIG_LOG_ENABLED 0
#endif

// <o> QDEC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef QDEC_CONFIG_DEBUG_COLOR
#define QDEC_CONFIG_DEBUG_COLOR 0
#endif

// <o> QDEC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef QDEC_CONFIG_INFO_COLOR
#define QDEC_CONFIG_INFO_COLOR 0
#endif

// <o> QDEC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef QDEC_CONFIG_LOG_LEVEL
#define QDEC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> RNG_CONFIG_LOG_ENABLED
//==========================================================
#ifndef RNG_CONFIG_LOG_ENABLED
#define RNG_CONFIG_LOG_ENABLED 0
#endif

// <o> RNG_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef RNG_CONFIG_DEBUG_COLOR
#define RNG_CONFIG_DEBUG_COLOR 0
#endif

// <o> RNG_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef RNG_CONFIG_INFO_COLOR
#define RNG_CONFIG_INFO_COLOR 0
#endif

// <o> RNG_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef RNG_CONFIG_LOG_LEVEL
#define RNG_CONFIG_LOG_LEVEL 3
#endif

// <q> RNG_CONFIG_RANDOM_NUMBER_LOG_ENABLED - Enables logging of random numbers.

#ifndef RNG_CONFIG_RANDOM_NUMBER_LOG_ENABLED
#define RNG_CONFIG_RANDOM_NUMBER_LOG_ENABLED 0
#endif

// </e>
// <e> RTC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef RTC_CONFIG_LOG_ENABLED
#define RTC_CONFIG_LOG_ENABLED 0
#endif

// <o> RTC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef RTC_CONFIG_DEBUG_COLOR
#define RTC_CONFIG_DEBUG_COLOR 0
#endif

// <o> RTC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef RTC_CONFIG_INFO_COLOR
#define RTC_CONFIG_INFO_COLOR 0
#endif

// <o> RTC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef RTC_CONFIG_LOG_LEVEL
#define RTC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> SAADC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef SAADC_CONFIG_LOG_ENABLED
#define SAADC_CONFIG_LOG_ENABLED 0
#endif

// <o> SAADC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SAADC_CONFIG_DEBUG_COLOR
#define SAADC_CONFIG_DEBUG_COLOR 0
#endif

// <o> SAADC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SAADC_CONFIG_INFO_COLOR
#define SAADC_CONFIG_INFO_COLOR 0
#endif

// <o> SAADC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef SAADC_CONFIG_LOG_LEVEL
#define SAADC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> SER_HAL_TRANSPORT_CONFIG_LOG_ENABLED
//==========================================================
#ifndef SER_HAL_TRANSPORT_CONFIG_LOG_ENABLED
#define SER_HAL_TRANSPORT_CONFIG_LOG_ENABLED 0
#endif

// <o> SER_HAL_TRANSPORT_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SER_HAL_TRANSPORT_CONFIG_DEBUG_COLOR
#define SER_HAL_TRANSPORT_CONFIG_DEBUG_COLOR 0
#endif

// <o> SER_HAL_TRANSPORT_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SER_HAL_TRANSPORT_CONFIG_INFO_COLOR
#define SER_HAL_TRANSPORT_CONFIG_INFO_COLOR 0
#endif

// <o> SER_HAL_TRANSPORT_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef SER_HAL_TRANSPORT_CONFIG_LOG_LEVEL
#define SER_HAL_TRANSPORT_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> SPI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef SPI_CONFIG_LOG_ENABLED
#define SPI_CONFIG_LOG_ENABLED 0
#endif

// <o> SPI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SPI_CONFIG_DEBUG_COLOR
#define SPI_CONFIG_DEBUG_COLOR 0
#endif

// <o> SPI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SPI_CONFIG_INFO_COLOR
#define SPI_CONFIG_INFO_COLOR 0
#endif

// <o> SPI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef SPI_CONFIG_LOG_LEVEL
#define SPI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> SPIS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef SPIS_CONFIG_LOG_ENABLED
#define SPIS_CONFIG_LOG_ENABLED 0
#endif

// <o> SPIS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SPIS_CONFIG_DEBUG_COLOR
#define SPIS_CONFIG_DEBUG_COLOR 0
#endif

// <o> SPIS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SPIS_CONFIG_INFO_COLOR
#define SPIS_CONFIG_INFO_COLOR 0
#endif

// <o> SPIS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef SPIS_CONFIG_LOG_LEVEL
#define SPIS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> TASK_MANAGER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef TASK_MANAGER_CONFIG_LOG_ENABLED
#define TASK_MANAGER_CONFIG_LOG_ENABLED 0
#endif

// <o> TASK_MANAGER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TASK_MANAGER_CONFIG_DEBUG_COLOR
#define TASK_MANAGER_CONFIG_DEBUG_COLOR 0
#endif

// <o> TASK_MANAGER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TASK_MANAGER_CONFIG_INFO_COLOR
#define TASK_MANAGER_CONFIG_INFO_COLOR 0
#endif

// <o> TASK_MANAGER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef TASK_MANAGER_CONFIG_LOG_LEVEL
#define TASK_MANAGER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> TIMER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef TIMER_CONFIG_LOG_ENABLED
#define TIMER_CONFIG_LOG_ENABLED 0
#endif

// <o> TIMER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TIMER_CONFIG_DEBUG_COLOR
#define TIMER_CONFIG_DEBUG_COLOR 0
#endif

// <o> TIMER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TIMER_CONFIG_INFO_COLOR
#define TIMER_CONFIG_INFO_COLOR 0
#endif

// <o> TIMER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef TIMER_CONFIG_LOG_LEVEL
#define TIMER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> TWI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef TWI_CONFIG_LOG_ENABLED
#define TWI_CONFIG_LOG_ENABLED 0
#endif

// <o> TWI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TWI_CONFIG_DEBUG_COLOR
#define TWI_CONFIG_DEBUG_COLOR 0
#endif

// <o> TWI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TWI_CONFIG_INFO_COLOR
#define TWI_CONFIG_INFO_COLOR 0
#endif

// <o> TWI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef TWI_CONFIG_LOG_LEVEL
#define TWI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> TWIS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef TWIS_CONFIG_LOG_ENABLED
#define TWIS_CONFIG_LOG_ENABLED 0
#endif

// <o> TWIS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TWIS_CONFIG_DEBUG_COLOR
#define TWIS_CONFIG_DEBUG_COLOR 0
#endif

// <o> TWIS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TWIS_CONFIG_INFO_COLOR
#define TWIS_CONFIG_INFO_COLOR 0
#endif

// <o> TWIS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef TWIS_CONFIG_LOG_LEVEL
#define TWIS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> UART_CONFIG_LOG_ENABLED
//==========================================================
#ifndef UART_CONFIG_LOG_ENABLED
#define UART_CONFIG_LOG_ENABLED 0
#endif

// <o> UART_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef UART_CONFIG_DEBUG_COLOR
#define UART_CONFIG_DEBUG_COLOR 0
#endif

// <o> UART_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef UART_CONFIG_INFO_COLOR
#define UART_CONFIG_INFO_COLOR 0
#endif

// <o> UART_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef UART_CONFIG_LOG_LEVEL
#define UART_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> USBD_CONFIG_LOG_ENABLED
//==========================================================
#ifndef USBD_CONFIG_LOG_ENABLED
#define USBD_CONFIG_LOG_ENABLED 0
#endif

// <o> USBD_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef USBD_CONFIG_DEBUG_COLOR
#define USBD_CONFIG_DEBUG_COLOR 0
#endif

// <o> USBD_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef USBD_CONFIG_INFO_COLOR
#define USBD_CONFIG_INFO_COLOR 0
#endif

// <o> USBD_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef USBD_CONFIG_LOG_LEVEL
#define USBD_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> WDT_CONFIG_LOG_ENABLED
//==========================================================
#ifndef WDT_CONFIG_LOG_ENABLED
#define WDT_CONFIG_LOG_ENABLED 0
#endif

// <o> WDT_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef WDT_CONFIG_DEBUG_COLOR
#define WDT_CONFIG_DEBUG_COLOR 0
#endif

// <o> WDT_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef WDT_CONFIG_INFO_COLOR
#define WDT_CONFIG_INFO_COLOR 0
#endif

// <o> WDT_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef WDT_CONFIG_LOG_LEVEL
#define WDT_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </h>
// </h>
// <e> NRF_LOG_ENABLED
//==========================================================
#ifndef NRF_LOG_ENABLED
#define NRF_LOG_ENABLED 0
#endif

// <h> Log
//==========================================================
#ifndef Log
#define Log 
#endif

// <o> NRF_LOG_MSGPOOL_ELEMENT_COUNT - Number of elements in the pool of memory objects

// <i> RAM memory usage.
#ifndef NRF_LOG_MSGPOOL_ELEMENT_COUNT
#define NRF_LOG_MSGPOOL_ELEMENT_COUNT 8
#endif

// <o> NRF_LOG_MSGPOOL_ELEMENT_SIZE - Size of a single element in the pool of memory objects.

// <i> a timestamp and up to 2 arguments in a single memory object.
#ifndef NRF_LOG_MSGPOOL_ELEMENT_SIZE
#define NRF_LOG_MSGPOOL_ELEMENT_SIZE 20
#endif

// </h>
// <q> NRF_LOG_ALLOW_OVERFLOW - Configures behavior when circular buffer is full.

// <i> marker is injected informing about overflow.
#ifndef NRF_LOG_ALLOW_OVERFLOW
#define NRF_LOG_ALLOW_OVERFLOW 0
#endif

// <o> NRF_LOG_BUFSIZE - Size of the buffer for storing logs (in bytes).

// <i> If NRF_LOG_DEFERRED = then buffer size can be reduced to minimum.
// <128=> 128
// <256=> 256
// <512=> 512
// <1024=> 1024
// <2048=> 2048
// <4096=> 4096
// <8192=> 8192
// <16384=> 16384
#ifndef NRF_LOG_BUFSIZE
#define NRF_LOG_BUFSIZE 1024
#endif

// <q> NRF_LOG_CLI_CMDS - Enable CLI commands for the module.

#ifndef NRF_LOG_CLI_CMDS
#define NRF_LOG_CLI_CMDS 0
#endif

// <o> NRF_LOG_DEFAULT_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_LOG_DEFAULT_LEVEL
#define NRF_LOG_DEFAULT_LEVEL 3
#endif

// <q> NRF_LOG_DEFERRED - Enable deffered logger.

// <i> Log data is buffered and can be processed in idle.
#ifndef NRF_LOG_DEFERRED
#define NRF_LOG_DEFERRED 0
#endif

// <q> NRF_LOG_FILTERS_ENABLED - Enable dynamic filtering of logs.

#ifndef NRF_LOG_FILTERS_ENABLED
#define NRF_LOG_FILTERS_ENABLED 0
#endif

// <e> NRF_LOG_USES_COLORS
//==========================================================
#ifndef NRF_LOG_USES_COLORS
#define NRF_LOG_USES_COLORS 0
#endif

// <o> NRF_LOG_COLOR_DEFAULT - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LOG_COLOR_DEFAULT
#define NRF_LOG_COLOR_DEFAULT 0
#endif

// <o> NRF_LOG_ERROR_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LOG_ERROR_COLOR
#define NRF_LOG_ERROR_COLOR 2
#endif

// <o> NRF_LOG_WARNING_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LOG_WARNING_COLOR
#define NRF_LOG_WARNING_COLOR 4
#endif

// </e>
// <e> NRF_LOG_USES_TIMESTAMP
//==========================================================
#ifndef NRF_LOG_USES_TIMESTAMP
#define NRF_LOG_USES_TIMESTAMP 0
#endif

// <o> NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY - Default frequency of the timestamp (in Hz)

#ifndef NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY
#define NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY 32768
#endif

// </e>
// </e>
// </h>
// <e> NRF_LOG_BACKEND_FLASH_ENABLED
//==========================================================
#ifndef NRF_LOG_BACKEND_FLASH_ENABLED
#define NRF_LOG_BACKEND_FLASH_ENABLED 0
#endif

// <h> Flash
//==========================================================
#ifndef Flash
#define Flash 
#endif

// <o> NRF_LOG_BACKEND_FLASH_START_PAGE - Starting page.

// <i> If 0, then pages directly after the application are used.
#ifndef NRF_LOG_BACKEND_FLASH_START_PAGE
#define NRF_LOG_BACKEND_FLASH_START_PAGE 0
#endif

// <o> NRF_LOG_BACKEND_PAGES - Number of pages.

#ifndef NRF_LOG_BACKEND_PAGES
#define NRF_LOG_BACKEND_PAGES 1
#endif

// </h>
// <e> NRF_LOG_BACKEND_CRASHLOG_ENABLED
//==========================================================
#ifndef NRF_LOG_BACKEND_CRASHLOG_ENABLED
#define NRF_LOG_BACKEND_CRASHLOG_ENABLED 0
#endif

// <o> NRF_LOG_BACKEND_CRASHLOG_FIFO_SIZE - Number of log messages held to be flushed in panic.

// <i> increasing the pool of logger messages (see log message pool configuration).
#ifndef NRF_LOG_BACKEND_CRASHLOG_FIFO_SIZE
#define NRF_LOG_BACKEND_CRASHLOG_FIFO_SIZE 8
#endif

// </e>
// <q> NRF_LOG_BACKEND_FLASH_CLI_CMDS - Enable CLI commands for this module.

#ifndef NRF_LOG_BACKEND_FLASH_CLI_CMDS
#define NRF_LOG_BACKEND_FLASH_CLI_CMDS 0
#endif

// <o> NRF_LOG_BACKEND_FLASH_SER_BUFFER_SIZE - Size of the buffer used for serialize log message.

// <i> hexdump message. Buffer size must be multiple of 4.
#ifndef NRF_LOG_BACKEND_FLASH_SER_BUFFER_SIZE
#define NRF_LOG_BACKEND_FLASH_SER_BUFFER_SIZE 64
#endif

// <e> NRF_LOG_BACKEND_FLASHLOG_ENABLED
//==========================================================
#ifndef NRF_LOG_BACKEND_FLASHLOG_ENABLED
#define NRF_LOG_BACKEND_FLASHLOG_ENABLED 0
#endif

// <o> NRF_LOG_BACKEND_FLASHLOG_QUEUE_SIZE - Logger messages queue size.

// <i> increasing the pool of logger messages (see log message pool configuration).
#ifndef NRF_LOG_BACKEND_FLASHLOG_QUEUE_SIZE
#define NRF_LOG_BACKEND_FLASHLOG_QUEUE_SIZE 8
#endif

// </e>
// </e>
// <e> NRF_LOG_BACKEND_RTT_ENABLED
//==========================================================
#ifndef NRF_LOG_BACKEND_RTT_ENABLED
#define NRF_LOG_BACKEND_RTT_ENABLED 0
#endif

// <o> NRF_LOG_BACKEND_RTT_TEMP_BUFFER_SIZE - Size of buffer for partially processed strings.

// <i> longer one will be fragmented.
#ifndef NRF_LOG_BACKEND_RTT_TEMP_BUFFER_SIZE
#define NRF_LOG_BACKEND_RTT_TEMP_BUFFER_SIZE 64
#endif

// <o> NRF_LOG_BACKEND_RTT_TX_RETRY_CNT - Writing to RTT retries.

// <i> and scheme with retry is applied again.
#ifndef NRF_LOG_BACKEND_RTT_TX_RETRY_CNT
#define NRF_LOG_BACKEND_RTT_TX_RETRY_CNT 3
#endif

// <o> NRF_LOG_BACKEND_RTT_TX_RETRY_DELAY_MS - Period before retrying writing to RTT

#ifndef NRF_LOG_BACKEND_RTT_TX_RETRY_DELAY_MS
#define NRF_LOG_BACKEND_RTT_TX_RETRY_DELAY_MS 1
#endif

// </e>
// <e> NRF_LOG_BACKEND_UART_ENABLED
//==========================================================
#ifndef NRF_LOG_BACKEND_UART_ENABLED
#define NRF_LOG_BACKEND_UART_ENABLED 0
#endif

// <o> NRF_LOG_BACKEND_UART_BAUDRATE - Default Baudrate

// <323584=> 1200
// <643072=> 2400
// <1290240=> 4800
// <2576384=> 9600
// <3862528=> 14400
// <5152768=> 19200
// <7716864=> 28800
// <10289152=> 38400
// <15400960=> 57600
// <20615168=> 76800
// <30801920=> 115200
// <61865984=> 230400
// <67108864=> 250000
// <121634816=> 460800
// <251658240=> 921600
// <268435456=> 1000000
#ifndef NRF_LOG_BACKEND_UART_BAUDRATE
#define NRF_LOG_BACKEND_UART_BAUDRATE 30801920
#endif

// <o> NRF_LOG_BACKEND_UART_TEMP_BUFFER_SIZE - Size of buffer for partially processed strings.

// <i> longer one will be fragmented.
#ifndef NRF_LOG_BACKEND_UART_TEMP_BUFFER_SIZE
#define NRF_LOG_BACKEND_UART_TEMP_BUFFER_SIZE 64
#endif

// <o> NRF_LOG_BACKEND_UART_TX_PIN - UART TX pin

#ifndef NRF_LOG_BACKEND_UART_TX_PIN
#define NRF_LOG_BACKEND_UART_TX_PIN 31
#endif

// </e>
// <e> NRF_LOG_ENABLED
//==========================================================
#ifndef NRF_LOG_ENABLED
#define NRF_LOG_ENABLED 0
#endif

// <h> Log
//==========================================================
#ifndef Log
#define Log 
#endif

// <o> NRF_LOG_MSGPOOL_ELEMENT_COUNT - Number of elements in the pool of memory objects

// <i> RAM memory usage.
#ifndef NRF_LOG_MSGPOOL_ELEMENT_COUNT
#define NRF_LOG_MSGPOOL_ELEMENT_COUNT 8
#endif

// <o> NRF_LOG_MSGPOOL_ELEMENT_SIZE - Size of a single element in the pool of memory objects.

// <i> a timestamp and up to 2 arguments in a single memory object.
#ifndef NRF_LOG_MSGPOOL_ELEMENT_SIZE
#define NRF_LOG_MSGPOOL_ELEMENT_SIZE 20
#endif

// </h>
// <h> nrf_log
//==========================================================
#ifndef nrf_log
#define nrf_log 
#endif

// <h> nrf_log
//==========================================================
#ifndef nrf_log
#define nrf_log 
#endif

// <e> APP_BUTTON_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_BUTTON_CONFIG_LOG_ENABLED
#define APP_BUTTON_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_BUTTON_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_BUTTON_CONFIG_DEBUG_COLOR
#define APP_BUTTON_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_BUTTON_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_BUTTON_CONFIG_INFO_COLOR
#define APP_BUTTON_CONFIG_INFO_COLOR 0
#endif

// <o> APP_BUTTON_CONFIG_INITIAL_LOG_LEVEL - Initial severity level if dynamic filtering is enabled.

// <i> increased on instance basis.
// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_BUTTON_CONFIG_INITIAL_LOG_LEVEL
#define APP_BUTTON_CONFIG_INITIAL_LOG_LEVEL 3
#endif

// <o> APP_BUTTON_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_BUTTON_CONFIG_LOG_LEVEL
#define APP_BUTTON_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> APP_TIMER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_TIMER_CONFIG_LOG_ENABLED
#define APP_TIMER_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_TIMER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_TIMER_CONFIG_DEBUG_COLOR
#define APP_TIMER_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_TIMER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_TIMER_CONFIG_INFO_COLOR
#define APP_TIMER_CONFIG_INFO_COLOR 0
#endif

// <o> APP_TIMER_CONFIG_INITIAL_LOG_LEVEL - Initial severity level if dynamic filtering is enabled.

// <i> increased on instance basis.
// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_TIMER_CONFIG_INITIAL_LOG_LEVEL
#define APP_TIMER_CONFIG_INITIAL_LOG_LEVEL 3
#endif

// <o> APP_TIMER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_TIMER_CONFIG_LOG_LEVEL
#define APP_TIMER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> APP_USBD_CDC_ACM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_USBD_CDC_ACM_CONFIG_LOG_ENABLED
#define APP_USBD_CDC_ACM_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_USBD_CDC_ACM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_CDC_ACM_CONFIG_DEBUG_COLOR
#define APP_USBD_CDC_ACM_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_USBD_CDC_ACM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_CDC_ACM_CONFIG_INFO_COLOR
#define APP_USBD_CDC_ACM_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_CDC_ACM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_USBD_CDC_ACM_CONFIG_LOG_LEVEL
#define APP_USBD_CDC_ACM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> APP_USBD_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_USBD_CONFIG_LOG_ENABLED
#define APP_USBD_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_USBD_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_CONFIG_DEBUG_COLOR
#define APP_USBD_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_USBD_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_CONFIG_INFO_COLOR
#define APP_USBD_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_USBD_CONFIG_LOG_LEVEL
#define APP_USBD_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> APP_USBD_DUMMY_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_USBD_DUMMY_CONFIG_LOG_ENABLED
#define APP_USBD_DUMMY_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_USBD_DUMMY_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_DUMMY_CONFIG_DEBUG_COLOR
#define APP_USBD_DUMMY_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_USBD_DUMMY_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_DUMMY_CONFIG_INFO_COLOR
#define APP_USBD_DUMMY_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_DUMMY_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_USBD_DUMMY_CONFIG_LOG_LEVEL
#define APP_USBD_DUMMY_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> APP_USBD_MSC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_USBD_MSC_CONFIG_LOG_ENABLED
#define APP_USBD_MSC_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_USBD_MSC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_MSC_CONFIG_DEBUG_COLOR
#define APP_USBD_MSC_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_USBD_MSC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_MSC_CONFIG_INFO_COLOR
#define APP_USBD_MSC_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_MSC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_USBD_MSC_CONFIG_LOG_LEVEL
#define APP_USBD_MSC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_ENABLED
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_ENABLED 0
#endif

// <o> APP_USBD_NRF_DFU_TRIGGER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_DEBUG_COLOR
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_DEBUG_COLOR 0
#endif

// <o> APP_USBD_NRF_DFU_TRIGGER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_INFO_COLOR
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_LEVEL
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> CLOCK_CONFIG_LOG_ENABLED
//==========================================================
#ifndef CLOCK_CONFIG_LOG_ENABLED
#define CLOCK_CONFIG_LOG_ENABLED 0
#endif

// <o> CLOCK_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef CLOCK_CONFIG_DEBUG_COLOR
#define CLOCK_CONFIG_DEBUG_COLOR 0
#endif

// <o> CLOCK_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef CLOCK_CONFIG_INFO_COLOR
#define CLOCK_CONFIG_INFO_COLOR 0
#endif

// <o> CLOCK_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef CLOCK_CONFIG_LOG_LEVEL
#define CLOCK_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> COMP_CONFIG_LOG_ENABLED
//==========================================================
#ifndef COMP_CONFIG_LOG_ENABLED
#define COMP_CONFIG_LOG_ENABLED 0
#endif

// <o> COMP_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef COMP_CONFIG_DEBUG_COLOR
#define COMP_CONFIG_DEBUG_COLOR 0
#endif

// <o> COMP_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef COMP_CONFIG_INFO_COLOR
#define COMP_CONFIG_INFO_COLOR 0
#endif

// <o> COMP_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef COMP_CONFIG_LOG_LEVEL
#define COMP_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> GPIOTE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef GPIOTE_CONFIG_LOG_ENABLED
#define GPIOTE_CONFIG_LOG_ENABLED 0
#endif

// <o> GPIOTE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef GPIOTE_CONFIG_DEBUG_COLOR
#define GPIOTE_CONFIG_DEBUG_COLOR 0
#endif

// <o> GPIOTE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef GPIOTE_CONFIG_INFO_COLOR
#define GPIOTE_CONFIG_INFO_COLOR 0
#endif

// <o> GPIOTE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef GPIOTE_CONFIG_LOG_LEVEL
#define GPIOTE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> LPCOMP_CONFIG_LOG_ENABLED
//==========================================================
#ifndef LPCOMP_CONFIG_LOG_ENABLED
#define LPCOMP_CONFIG_LOG_ENABLED 0
#endif

// <o> LPCOMP_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef LPCOMP_CONFIG_DEBUG_COLOR
#define LPCOMP_CONFIG_DEBUG_COLOR 0
#endif

// <o> LPCOMP_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef LPCOMP_CONFIG_INFO_COLOR
#define LPCOMP_CONFIG_INFO_COLOR 0
#endif

// <o> LPCOMP_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef LPCOMP_CONFIG_LOG_LEVEL
#define LPCOMP_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> MAX3421E_HOST_CONFIG_LOG_ENABLED
//==========================================================
#ifndef MAX3421E_HOST_CONFIG_LOG_ENABLED
#define MAX3421E_HOST_CONFIG_LOG_ENABLED 0
#endif

// <o> MAX3421E_HOST_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef MAX3421E_HOST_CONFIG_DEBUG_COLOR
#define MAX3421E_HOST_CONFIG_DEBUG_COLOR 0
#endif

// <o> MAX3421E_HOST_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef MAX3421E_HOST_CONFIG_INFO_COLOR
#define MAX3421E_HOST_CONFIG_INFO_COLOR 0
#endif

// <o> MAX3421E_HOST_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef MAX3421E_HOST_CONFIG_LOG_LEVEL
#define MAX3421E_HOST_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_ATFIFO_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_ATFIFO_CONFIG_LOG_ENABLED
#define NRF_ATFIFO_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_ATFIFO_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_ATFIFO_CONFIG_DEBUG_COLOR
#define NRF_ATFIFO_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_ATFIFO_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_ATFIFO_CONFIG_INFO_COLOR
#define NRF_ATFIFO_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_ATFIFO_CONFIG_LOG_INIT_FILTER_LEVEL - Initial severity level if dynamic filtering is enabled

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_ATFIFO_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_ATFIFO_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_ATFIFO_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_ATFIFO_CONFIG_LOG_LEVEL
#define NRF_ATFIFO_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_BALLOC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_BALLOC_CONFIG_LOG_ENABLED
#define NRF_BALLOC_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_BALLOC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_BALLOC_CONFIG_DEBUG_COLOR
#define NRF_BALLOC_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_BALLOC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_BALLOC_CONFIG_INFO_COLOR
#define NRF_BALLOC_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL - Initial severity level if dynamic filtering is enabled.

// <i> increased on instance basis.
// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL
#define NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL 3
#endif

// <o> NRF_BALLOC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_BALLOC_CONFIG_LOG_LEVEL
#define NRF_BALLOC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_ENABLED
#define NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_BLOCK_DEV_EMPTY_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_BLOCK_DEV_EMPTY_CONFIG_DEBUG_COLOR
#define NRF_BLOCK_DEV_EMPTY_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_BLOCK_DEV_EMPTY_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_BLOCK_DEV_EMPTY_CONFIG_INFO_COLOR
#define NRF_BLOCK_DEV_EMPTY_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_INIT_FILTER_LEVEL - Initial severity level if dynamic filtering is enabled

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_LEVEL
#define NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_BLOCK_DEV_QSPI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_BLOCK_DEV_QSPI_CONFIG_LOG_ENABLED
#define NRF_BLOCK_DEV_QSPI_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_BLOCK_DEV_QSPI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_BLOCK_DEV_QSPI_CONFIG_DEBUG_COLOR
#define NRF_BLOCK_DEV_QSPI_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_BLOCK_DEV_QSPI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_BLOCK_DEV_QSPI_CONFIG_INFO_COLOR
#define NRF_BLOCK_DEV_QSPI_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_BLOCK_DEV_QSPI_CONFIG_LOG_INIT_FILTER_LEVEL - Initial severity level if dynamic filtering is enabled

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_BLOCK_DEV_QSPI_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_BLOCK_DEV_QSPI_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_BLOCK_DEV_QSPI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_BLOCK_DEV_QSPI_CONFIG_LOG_LEVEL
#define NRF_BLOCK_DEV_QSPI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_BLOCK_DEV_RAM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_BLOCK_DEV_RAM_CONFIG_LOG_ENABLED
#define NRF_BLOCK_DEV_RAM_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_BLOCK_DEV_RAM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_BLOCK_DEV_RAM_CONFIG_DEBUG_COLOR
#define NRF_BLOCK_DEV_RAM_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_BLOCK_DEV_RAM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_BLOCK_DEV_RAM_CONFIG_INFO_COLOR
#define NRF_BLOCK_DEV_RAM_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_BLOCK_DEV_RAM_CONFIG_LOG_INIT_FILTER_LEVEL - Initial severity level if dynamic filtering is enabled

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_BLOCK_DEV_RAM_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_BLOCK_DEV_RAM_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_BLOCK_DEV_RAM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_BLOCK_DEV_RAM_CONFIG_LOG_LEVEL
#define NRF_BLOCK_DEV_RAM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_CLI_BLE_UART_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_CLI_BLE_UART_CONFIG_LOG_ENABLED
#define NRF_CLI_BLE_UART_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_CLI_BLE_UART_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_BLE_UART_CONFIG_DEBUG_COLOR
#define NRF_CLI_BLE_UART_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_CLI_BLE_UART_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_BLE_UART_CONFIG_INFO_COLOR
#define NRF_CLI_BLE_UART_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_CLI_BLE_UART_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_CLI_BLE_UART_CONFIG_LOG_LEVEL
#define NRF_CLI_BLE_UART_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_CLI_LIBUARTE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_CLI_LIBUARTE_CONFIG_LOG_ENABLED
#define NRF_CLI_LIBUARTE_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_CLI_LIBUARTE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_LIBUARTE_CONFIG_DEBUG_COLOR
#define NRF_CLI_LIBUARTE_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_CLI_LIBUARTE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_LIBUARTE_CONFIG_INFO_COLOR
#define NRF_CLI_LIBUARTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_CLI_LIBUARTE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_CLI_LIBUARTE_CONFIG_LOG_LEVEL
#define NRF_CLI_LIBUARTE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_CLI_UART_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_CLI_UART_CONFIG_LOG_ENABLED
#define NRF_CLI_UART_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_CLI_UART_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_UART_CONFIG_DEBUG_COLOR
#define NRF_CLI_UART_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_CLI_UART_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_CLI_UART_CONFIG_INFO_COLOR
#define NRF_CLI_UART_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_CLI_UART_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_CLI_UART_CONFIG_LOG_LEVEL
#define NRF_CLI_UART_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_LIBUARTE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_LIBUARTE_CONFIG_LOG_ENABLED
#define NRF_LIBUARTE_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_LIBUARTE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LIBUARTE_CONFIG_DEBUG_COLOR
#define NRF_LIBUARTE_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_LIBUARTE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LIBUARTE_CONFIG_INFO_COLOR
#define NRF_LIBUARTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_LIBUARTE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_LIBUARTE_CONFIG_LOG_LEVEL
#define NRF_LIBUARTE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_MEMOBJ_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_MEMOBJ_CONFIG_LOG_ENABLED
#define NRF_MEMOBJ_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_MEMOBJ_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_MEMOBJ_CONFIG_DEBUG_COLOR
#define NRF_MEMOBJ_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_MEMOBJ_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_MEMOBJ_CONFIG_INFO_COLOR
#define NRF_MEMOBJ_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_MEMOBJ_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_MEMOBJ_CONFIG_LOG_LEVEL
#define NRF_MEMOBJ_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_MPU_LIB_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_MPU_LIB_CONFIG_LOG_ENABLED
#define NRF_MPU_LIB_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_MPU_LIB_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_MPU_LIB_CONFIG_DEBUG_COLOR
#define NRF_MPU_LIB_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_MPU_LIB_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_MPU_LIB_CONFIG_INFO_COLOR
#define NRF_MPU_LIB_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_MPU_LIB_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_MPU_LIB_CONFIG_LOG_LEVEL
#define NRF_MPU_LIB_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_PWR_MGMT_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_PWR_MGMT_CONFIG_LOG_ENABLED
#define NRF_PWR_MGMT_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_PWR_MGMT_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_PWR_MGMT_CONFIG_DEBUG_COLOR
#define NRF_PWR_MGMT_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_PWR_MGMT_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_PWR_MGMT_CONFIG_INFO_COLOR
#define NRF_PWR_MGMT_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_PWR_MGMT_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_PWR_MGMT_CONFIG_LOG_LEVEL
#define NRF_PWR_MGMT_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_QUEUE_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_QUEUE_CONFIG_LOG_ENABLED
#define NRF_QUEUE_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_QUEUE_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_QUEUE_CONFIG_DEBUG_COLOR
#define NRF_QUEUE_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_QUEUE_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_QUEUE_CONFIG_INFO_COLOR
#define NRF_QUEUE_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL - Initial severity level if dynamic filtering is enabled

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_QUEUE_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_QUEUE_CONFIG_LOG_LEVEL
#define NRF_QUEUE_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_SDH_ANT_LOG_ENABLED
//==========================================================
#ifndef NRF_SDH_ANT_LOG_ENABLED
#define NRF_SDH_ANT_LOG_ENABLED 0
#endif

// <o> NRF_SDH_ANT_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_ANT_DEBUG_COLOR
#define NRF_SDH_ANT_DEBUG_COLOR 0
#endif

// <o> NRF_SDH_ANT_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_ANT_INFO_COLOR
#define NRF_SDH_ANT_INFO_COLOR 0
#endif

// <o> NRF_SDH_ANT_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_SDH_ANT_LOG_LEVEL
#define NRF_SDH_ANT_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_SDH_BLE_LOG_ENABLED
//==========================================================
#ifndef NRF_SDH_BLE_LOG_ENABLED
#define NRF_SDH_BLE_LOG_ENABLED 0
#endif

// <o> NRF_SDH_BLE_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_BLE_DEBUG_COLOR
#define NRF_SDH_BLE_DEBUG_COLOR 0
#endif

// <o> NRF_SDH_BLE_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_BLE_INFO_COLOR
#define NRF_SDH_BLE_INFO_COLOR 0
#endif

// <o> NRF_SDH_BLE_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_SDH_BLE_LOG_LEVEL
#define NRF_SDH_BLE_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_SDH_LOG_ENABLED
//==========================================================
#ifndef NRF_SDH_LOG_ENABLED
#define NRF_SDH_LOG_ENABLED 0
#endif

// <o> NRF_SDH_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_DEBUG_COLOR
#define NRF_SDH_DEBUG_COLOR 0
#endif

// <o> NRF_SDH_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_INFO_COLOR
#define NRF_SDH_INFO_COLOR 0
#endif

// <o> NRF_SDH_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_SDH_LOG_LEVEL
#define NRF_SDH_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_SDH_SOC_LOG_ENABLED
//==========================================================
#ifndef NRF_SDH_SOC_LOG_ENABLED
#define NRF_SDH_SOC_LOG_ENABLED 0
#endif

// <o> NRF_SDH_SOC_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_SOC_DEBUG_COLOR
#define NRF_SDH_SOC_DEBUG_COLOR 0
#endif

// <o> NRF_SDH_SOC_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SDH_SOC_INFO_COLOR
#define NRF_SDH_SOC_INFO_COLOR 0
#endif

// <o> NRF_SDH_SOC_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_SDH_SOC_LOG_LEVEL
#define NRF_SDH_SOC_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_SORTLIST_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_SORTLIST_CONFIG_LOG_ENABLED
#define NRF_SORTLIST_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_SORTLIST_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SORTLIST_CONFIG_DEBUG_COLOR
#define NRF_SORTLIST_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_SORTLIST_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_SORTLIST_CONFIG_INFO_COLOR
#define NRF_SORTLIST_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_SORTLIST_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_SORTLIST_CONFIG_LOG_LEVEL
#define NRF_SORTLIST_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_STACK_GUARD_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_STACK_GUARD_CONFIG_LOG_ENABLED
#define NRF_STACK_GUARD_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_STACK_GUARD_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_STACK_GUARD_CONFIG_DEBUG_COLOR
#define NRF_STACK_GUARD_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_STACK_GUARD_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_STACK_GUARD_CONFIG_INFO_COLOR
#define NRF_STACK_GUARD_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_STACK_GUARD_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_STACK_GUARD_CONFIG_LOG_LEVEL
#define NRF_STACK_GUARD_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRF_TWI_SENSOR_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRF_TWI_SENSOR_CONFIG_LOG_ENABLED
#define NRF_TWI_SENSOR_CONFIG_LOG_ENABLED 0
#endif

// <o> NRF_TWI_SENSOR_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_TWI_SENSOR_CONFIG_DEBUG_COLOR
#define NRF_TWI_SENSOR_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRF_TWI_SENSOR_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_TWI_SENSOR_CONFIG_INFO_COLOR
#define NRF_TWI_SENSOR_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_TWI_SENSOR_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_TWI_SENSOR_CONFIG_LOG_LEVEL
#define NRF_TWI_SENSOR_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> NRFX_USBD_CONFIG_LOG_ENABLED
//==========================================================
#ifndef NRFX_USBD_CONFIG_LOG_ENABLED
#define NRFX_USBD_CONFIG_LOG_ENABLED 0
#endif

// <o> NRFX_USBD_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_USBD_CONFIG_DEBUG_COLOR
#define NRFX_USBD_CONFIG_DEBUG_COLOR 0
#endif

// <o> NRFX_USBD_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRFX_USBD_CONFIG_INFO_COLOR
#define NRFX_USBD_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_USBD_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRFX_USBD_CONFIG_LOG_LEVEL
#define NRFX_USBD_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> PDM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef PDM_CONFIG_LOG_ENABLED
#define PDM_CONFIG_LOG_ENABLED 0
#endif

// <o> PDM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PDM_CONFIG_DEBUG_COLOR
#define PDM_CONFIG_DEBUG_COLOR 0
#endif

// <o> PDM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PDM_CONFIG_INFO_COLOR
#define PDM_CONFIG_INFO_COLOR 0
#endif

// <o> PDM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef PDM_CONFIG_LOG_LEVEL
#define PDM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> PM_LOG_ENABLED
//==========================================================
#ifndef PM_LOG_ENABLED
#define PM_LOG_ENABLED 0
#endif

// <o> PM_LOG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PM_LOG_DEBUG_COLOR
#define PM_LOG_DEBUG_COLOR 0
#endif

// <o> PM_LOG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PM_LOG_INFO_COLOR
#define PM_LOG_INFO_COLOR 0
#endif

// <o> PM_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef PM_LOG_LEVEL
#define PM_LOG_LEVEL 3
#endif

// </e>
// <e> PPI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef PPI_CONFIG_LOG_ENABLED
#define PPI_CONFIG_LOG_ENABLED 0
#endif

// <o> PPI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PPI_CONFIG_DEBUG_COLOR
#define PPI_CONFIG_DEBUG_COLOR 0
#endif

// <o> PPI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PPI_CONFIG_INFO_COLOR
#define PPI_CONFIG_INFO_COLOR 0
#endif

// <o> PPI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef PPI_CONFIG_LOG_LEVEL
#define PPI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> PWM_CONFIG_LOG_ENABLED
//==========================================================
#ifndef PWM_CONFIG_LOG_ENABLED
#define PWM_CONFIG_LOG_ENABLED 0
#endif

// <o> PWM_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PWM_CONFIG_DEBUG_COLOR
#define PWM_CONFIG_DEBUG_COLOR 0
#endif

// <o> PWM_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef PWM_CONFIG_INFO_COLOR
#define PWM_CONFIG_INFO_COLOR 0
#endif

// <o> PWM_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef PWM_CONFIG_LOG_LEVEL
#define PWM_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> QDEC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef QDEC_CONFIG_LOG_ENABLED
#define QDEC_CONFIG_LOG_ENABLED 0
#endif

// <o> QDEC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef QDEC_CONFIG_DEBUG_COLOR
#define QDEC_CONFIG_DEBUG_COLOR 0
#endif

// <o> QDEC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef QDEC_CONFIG_INFO_COLOR
#define QDEC_CONFIG_INFO_COLOR 0
#endif

// <o> QDEC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef QDEC_CONFIG_LOG_LEVEL
#define QDEC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> RNG_CONFIG_LOG_ENABLED
//==========================================================
#ifndef RNG_CONFIG_LOG_ENABLED
#define RNG_CONFIG_LOG_ENABLED 0
#endif

// <o> RNG_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef RNG_CONFIG_DEBUG_COLOR
#define RNG_CONFIG_DEBUG_COLOR 0
#endif

// <o> RNG_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef RNG_CONFIG_INFO_COLOR
#define RNG_CONFIG_INFO_COLOR 0
#endif

// <o> RNG_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef RNG_CONFIG_LOG_LEVEL
#define RNG_CONFIG_LOG_LEVEL 3
#endif

// <q> RNG_CONFIG_RANDOM_NUMBER_LOG_ENABLED - Enables logging of random numbers.

#ifndef RNG_CONFIG_RANDOM_NUMBER_LOG_ENABLED
#define RNG_CONFIG_RANDOM_NUMBER_LOG_ENABLED 0
#endif

// </e>
// <e> RTC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef RTC_CONFIG_LOG_ENABLED
#define RTC_CONFIG_LOG_ENABLED 0
#endif

// <o> RTC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef RTC_CONFIG_DEBUG_COLOR
#define RTC_CONFIG_DEBUG_COLOR 0
#endif

// <o> RTC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef RTC_CONFIG_INFO_COLOR
#define RTC_CONFIG_INFO_COLOR 0
#endif

// <o> RTC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef RTC_CONFIG_LOG_LEVEL
#define RTC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> SAADC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef SAADC_CONFIG_LOG_ENABLED
#define SAADC_CONFIG_LOG_ENABLED 0
#endif

// <o> SAADC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SAADC_CONFIG_DEBUG_COLOR
#define SAADC_CONFIG_DEBUG_COLOR 0
#endif

// <o> SAADC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SAADC_CONFIG_INFO_COLOR
#define SAADC_CONFIG_INFO_COLOR 0
#endif

// <o> SAADC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef SAADC_CONFIG_LOG_LEVEL
#define SAADC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> SER_HAL_TRANSPORT_CONFIG_LOG_ENABLED
//==========================================================
#ifndef SER_HAL_TRANSPORT_CONFIG_LOG_ENABLED
#define SER_HAL_TRANSPORT_CONFIG_LOG_ENABLED 0
#endif

// <o> SER_HAL_TRANSPORT_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SER_HAL_TRANSPORT_CONFIG_DEBUG_COLOR
#define SER_HAL_TRANSPORT_CONFIG_DEBUG_COLOR 0
#endif

// <o> SER_HAL_TRANSPORT_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SER_HAL_TRANSPORT_CONFIG_INFO_COLOR
#define SER_HAL_TRANSPORT_CONFIG_INFO_COLOR 0
#endif

// <o> SER_HAL_TRANSPORT_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef SER_HAL_TRANSPORT_CONFIG_LOG_LEVEL
#define SER_HAL_TRANSPORT_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> SPI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef SPI_CONFIG_LOG_ENABLED
#define SPI_CONFIG_LOG_ENABLED 0
#endif

// <o> SPI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SPI_CONFIG_DEBUG_COLOR
#define SPI_CONFIG_DEBUG_COLOR 0
#endif

// <o> SPI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SPI_CONFIG_INFO_COLOR
#define SPI_CONFIG_INFO_COLOR 0
#endif

// <o> SPI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef SPI_CONFIG_LOG_LEVEL
#define SPI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> SPIS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef SPIS_CONFIG_LOG_ENABLED
#define SPIS_CONFIG_LOG_ENABLED 0
#endif

// <o> SPIS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SPIS_CONFIG_DEBUG_COLOR
#define SPIS_CONFIG_DEBUG_COLOR 0
#endif

// <o> SPIS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef SPIS_CONFIG_INFO_COLOR
#define SPIS_CONFIG_INFO_COLOR 0
#endif

// <o> SPIS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef SPIS_CONFIG_LOG_LEVEL
#define SPIS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> TASK_MANAGER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef TASK_MANAGER_CONFIG_LOG_ENABLED
#define TASK_MANAGER_CONFIG_LOG_ENABLED 0
#endif

// <o> TASK_MANAGER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TASK_MANAGER_CONFIG_DEBUG_COLOR
#define TASK_MANAGER_CONFIG_DEBUG_COLOR 0
#endif

// <o> TASK_MANAGER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TASK_MANAGER_CONFIG_INFO_COLOR
#define TASK_MANAGER_CONFIG_INFO_COLOR 0
#endif

// <o> TASK_MANAGER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef TASK_MANAGER_CONFIG_LOG_LEVEL
#define TASK_MANAGER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> TIMER_CONFIG_LOG_ENABLED
//==========================================================
#ifndef TIMER_CONFIG_LOG_ENABLED
#define TIMER_CONFIG_LOG_ENABLED 0
#endif

// <o> TIMER_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TIMER_CONFIG_DEBUG_COLOR
#define TIMER_CONFIG_DEBUG_COLOR 0
#endif

// <o> TIMER_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TIMER_CONFIG_INFO_COLOR
#define TIMER_CONFIG_INFO_COLOR 0
#endif

// <o> TIMER_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef TIMER_CONFIG_LOG_LEVEL
#define TIMER_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> TWI_CONFIG_LOG_ENABLED
//==========================================================
#ifndef TWI_CONFIG_LOG_ENABLED
#define TWI_CONFIG_LOG_ENABLED 0
#endif

// <o> TWI_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TWI_CONFIG_DEBUG_COLOR
#define TWI_CONFIG_DEBUG_COLOR 0
#endif

// <o> TWI_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TWI_CONFIG_INFO_COLOR
#define TWI_CONFIG_INFO_COLOR 0
#endif

// <o> TWI_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef TWI_CONFIG_LOG_LEVEL
#define TWI_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> TWIS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef TWIS_CONFIG_LOG_ENABLED
#define TWIS_CONFIG_LOG_ENABLED 0
#endif

// <o> TWIS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TWIS_CONFIG_DEBUG_COLOR
#define TWIS_CONFIG_DEBUG_COLOR 0
#endif

// <o> TWIS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TWIS_CONFIG_INFO_COLOR
#define TWIS_CONFIG_INFO_COLOR 0
#endif

// <o> TWIS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef TWIS_CONFIG_LOG_LEVEL
#define TWIS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> UART_CONFIG_LOG_ENABLED
//==========================================================
#ifndef UART_CONFIG_LOG_ENABLED
#define UART_CONFIG_LOG_ENABLED 0
#endif

// <o> UART_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef UART_CONFIG_DEBUG_COLOR
#define UART_CONFIG_DEBUG_COLOR 0
#endif

// <o> UART_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef UART_CONFIG_INFO_COLOR
#define UART_CONFIG_INFO_COLOR 0
#endif

// <o> UART_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef UART_CONFIG_LOG_LEVEL
#define UART_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> USBD_CONFIG_LOG_ENABLED
//==========================================================
#ifndef USBD_CONFIG_LOG_ENABLED
#define USBD_CONFIG_LOG_ENABLED 0
#endif

// <o> USBD_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef USBD_CONFIG_DEBUG_COLOR
#define USBD_CONFIG_DEBUG_COLOR 0
#endif

// <o> USBD_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef USBD_CONFIG_INFO_COLOR
#define USBD_CONFIG_INFO_COLOR 0
#endif

// <o> USBD_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef USBD_CONFIG_LOG_LEVEL
#define USBD_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <e> WDT_CONFIG_LOG_ENABLED
//==========================================================
#ifndef WDT_CONFIG_LOG_ENABLED
#define WDT_CONFIG_LOG_ENABLED 0
#endif

// <o> WDT_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef WDT_CONFIG_DEBUG_COLOR
#define WDT_CONFIG_DEBUG_COLOR 0
#endif

// <o> WDT_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef WDT_CONFIG_INFO_COLOR
#define WDT_CONFIG_INFO_COLOR 0
#endif

// <o> WDT_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef WDT_CONFIG_LOG_LEVEL
#define WDT_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </h>
// </h>
// <q> NRF_LOG_ALLOW_OVERFLOW - Configures behavior when circular buffer is full.

// <i> marker is injected informing about overflow.
#ifndef NRF_LOG_ALLOW_OVERFLOW
#define NRF_LOG_ALLOW_OVERFLOW 0
#endif

// <o> NRF_LOG_BUFSIZE - Size of the buffer for storing logs (in bytes).

// <i> If NRF_LOG_DEFERRED = then buffer size can be reduced to minimum.
// <128=> 128
// <256=> 256
// <512=> 512
// <1024=> 1024
// <2048=> 2048
// <4096=> 4096
// <8192=> 8192
// <16384=> 16384
#ifndef NRF_LOG_BUFSIZE
#define NRF_LOG_BUFSIZE 1024
#endif

// <q> NRF_LOG_CLI_CMDS - Enable CLI commands for the module.

#ifndef NRF_LOG_CLI_CMDS
#define NRF_LOG_CLI_CMDS 0
#endif

// <o> NRF_LOG_DEFAULT_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NRF_LOG_DEFAULT_LEVEL
#define NRF_LOG_DEFAULT_LEVEL 3
#endif

// <q> NRF_LOG_DEFERRED - Enable deffered logger.

// <i> Log data is buffered and can be processed in idle.
#ifndef NRF_LOG_DEFERRED
#define NRF_LOG_DEFERRED 0
#endif

// <q> NRF_LOG_FILTERS_ENABLED - Enable dynamic filtering of logs.

#ifndef NRF_LOG_FILTERS_ENABLED
#define NRF_LOG_FILTERS_ENABLED 0
#endif

// <q> NRF_LOG_NON_DEFFERED_CRITICAL_REGION_ENABLED - Enable use of critical region for non deffered mode when flushing logs.

// <i> but system will spend significant amount of time in critical section
#ifndef NRF_LOG_NON_DEFFERED_CRITICAL_REGION_ENABLED
#define NRF_LOG_NON_DEFFERED_CRITICAL_REGION_ENABLED 0
#endif

// <o> NRF_LOG_STR_PUSH_BUFFER_SIZE - Size of the buffer dedicated for strings stored using @ref NRF_LOG_PUSH.

// <16=> 16
// <32=> 32
// <64=> 64
// <128=> 128
// <256=> 256
// <512=> 512
// <1024=> 1024
#ifndef NRF_LOG_STR_PUSH_BUFFER_SIZE
#define NRF_LOG_STR_PUSH_BUFFER_SIZE 128
#endif

// <e> NRF_LOG_USES_COLORS
//==========================================================
#ifndef NRF_LOG_USES_COLORS
#define NRF_LOG_USES_COLORS 0
#endif

// <o> NRF_LOG_COLOR_DEFAULT - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LOG_COLOR_DEFAULT
#define NRF_LOG_COLOR_DEFAULT 0
#endif

// <o> NRF_LOG_ERROR_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LOG_ERROR_COLOR
#define NRF_LOG_ERROR_COLOR 2
#endif

// <o> NRF_LOG_WARNING_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NRF_LOG_WARNING_COLOR
#define NRF_LOG_WARNING_COLOR 4
#endif

// </e>
// <e> NRF_LOG_USES_TIMESTAMP
//==========================================================
#ifndef NRF_LOG_USES_TIMESTAMP
#define NRF_LOG_USES_TIMESTAMP 0
#endif

// <o> NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY - Default frequency of the timestamp (in Hz) or to use app_timer frequency.

#ifndef NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY
#define NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY 0
#endif

// </e>
// </e>
// <q> NRF_LOG_STR_FORMATTER_TIMESTAMP_FORMAT_ENABLED - nrf_log_str_formatter - Log string formatter

#ifndef NRF_LOG_STR_FORMATTER_TIMESTAMP_FORMAT_ENABLED
#define NRF_LOG_STR_FORMATTER_TIMESTAMP_FORMAT_ENABLED 0
#endif

// </h>
// <h> nRF_NFC
//==========================================================
#ifndef nRF_NFC
#define nRF_NFC 
#endif

// <q> NFC_AC_REC_ENABLED - nfc_ac_rec - NFC NDEF Alternative Carrier record encoder

#ifndef NFC_AC_REC_ENABLED
#define NFC_AC_REC_ENABLED 0
#endif

// <q> NFC_AC_REC_PARSER_ENABLED - nfc_ac_rec_parser - Alternative Carrier record parser

#ifndef NFC_AC_REC_PARSER_ENABLED
#define NFC_AC_REC_PARSER_ENABLED 0
#endif

// <e> NFC_BLE_OOB_ADVDATA_ENABLED
//==========================================================
#ifndef NFC_BLE_OOB_ADVDATA_ENABLED
#define NFC_BLE_OOB_ADVDATA_ENABLED 0
#endif

// <o> ADVANCED_ADVDATA_SUPPORT - Non-mandatory AD types for BLE OOB pairing are encoded inside the NDEF message (e.g. service UUIDs)

// <1=> Enabled
// <0=> Disabled
#ifndef ADVANCED_ADVDATA_SUPPORT
#define ADVANCED_ADVDATA_SUPPORT 0
#endif

// </e>
// <q> NFC_BLE_OOB_ADVDATA_PARSER_ENABLED - nfc_ble_oob_advdata_parser - BLE OOB pairing AD data parser

#ifndef NFC_BLE_OOB_ADVDATA_PARSER_ENABLED
#define NFC_BLE_OOB_ADVDATA_PARSER_ENABLED 0
#endif

// <e> NFC_BLE_PAIR_LIB_ENABLED
//==========================================================
#ifndef NFC_BLE_PAIR_LIB_ENABLED
#define NFC_BLE_PAIR_LIB_ENABLED 0
#endif

// <e> NFC_BLE_PAIR_LIB_LOG_ENABLED
//==========================================================
#ifndef NFC_BLE_PAIR_LIB_LOG_ENABLED
#define NFC_BLE_PAIR_LIB_LOG_ENABLED 0
#endif

// <o> NFC_BLE_PAIR_LIB_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_BLE_PAIR_LIB_DEBUG_COLOR
#define NFC_BLE_PAIR_LIB_DEBUG_COLOR 0
#endif

// <o> NFC_BLE_PAIR_LIB_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_BLE_PAIR_LIB_INFO_COLOR
#define NFC_BLE_PAIR_LIB_INFO_COLOR 0
#endif

// <o> NFC_BLE_PAIR_LIB_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NFC_BLE_PAIR_LIB_LOG_LEVEL
#define NFC_BLE_PAIR_LIB_LOG_LEVEL 3
#endif

// </e>
// <h> NFC_BLE_PAIR_LIB_SECURITY_PARAMETERS
//==========================================================
#ifndef NFC_BLE_PAIR_LIB_SECURITY_PARAMETERS
#define NFC_BLE_PAIR_LIB_SECURITY_PARAMETERS 
#endif

// <e> BLE_NFC_SEC_PARAM_BOND
//==========================================================
#ifndef BLE_NFC_SEC_PARAM_BOND
#define BLE_NFC_SEC_PARAM_BOND 0
#endif

// <q> BLE_NFC_SEC_PARAM_KDIST_OWN_ENC - Enables Long Term Key and Master Identification distribution by device.

#ifndef BLE_NFC_SEC_PARAM_KDIST_OWN_ENC
#define BLE_NFC_SEC_PARAM_KDIST_OWN_ENC 0
#endif

// <q> BLE_NFC_SEC_PARAM_KDIST_OWN_ID - Enables Identity Resolving Key and Identity Address Information distribution by device.

#ifndef BLE_NFC_SEC_PARAM_KDIST_OWN_ID
#define BLE_NFC_SEC_PARAM_KDIST_OWN_ID 0
#endif

// <q> BLE_NFC_SEC_PARAM_KDIST_PEER_ENC - Enables Long Term Key and Master Identification distribution by peer.

#ifndef BLE_NFC_SEC_PARAM_KDIST_PEER_ENC
#define BLE_NFC_SEC_PARAM_KDIST_PEER_ENC 0
#endif

// <q> BLE_NFC_SEC_PARAM_KDIST_PEER_ID - Enables Identity Resolving Key and Identity Address Information distribution by peer.

#ifndef BLE_NFC_SEC_PARAM_KDIST_PEER_ID
#define BLE_NFC_SEC_PARAM_KDIST_PEER_ID 0
#endif

// </e>
// <o> BLE_NFC_SEC_PARAM_MAX_KEY_SIZE - Maximal size of a security key.

// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
#ifndef BLE_NFC_SEC_PARAM_MAX_KEY_SIZE
#define BLE_NFC_SEC_PARAM_MAX_KEY_SIZE 16
#endif

// <o> BLE_NFC_SEC_PARAM_MIN_KEY_SIZE - Minimal size of a security key.

// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
#ifndef BLE_NFC_SEC_PARAM_MIN_KEY_SIZE
#define BLE_NFC_SEC_PARAM_MIN_KEY_SIZE 7
#endif

// </h>
// </e>
// <q> NFC_BLE_PAIR_MSG_ENABLED - nfc_ble_pair_msg - NDEF message for OOB pairing encoder

#ifndef NFC_BLE_PAIR_MSG_ENABLED
#define NFC_BLE_PAIR_MSG_ENABLED 0
#endif

// <q> NFC_CH_COMMON_ENABLED - nfc_ble_pair_common - OOB pairing common data

#ifndef NFC_CH_COMMON_ENABLED
#define NFC_CH_COMMON_ENABLED 0
#endif

// <q> NFC_EP_OOB_REC_ENABLED - nfc_ep_oob_rec - EP record for BLE pairing encoder

#ifndef NFC_EP_OOB_REC_ENABLED
#define NFC_EP_OOB_REC_ENABLED 0
#endif

// <q> NFC_HS_REC_ENABLED - nfc_hs_rec - Handover Select NDEF record encoder

#ifndef NFC_HS_REC_ENABLED
#define NFC_HS_REC_ENABLED 0
#endif

// <q> NFC_LE_OOB_REC_ENABLED - nfc_le_oob_rec - LE record for BLE pairing encoder

#ifndef NFC_LE_OOB_REC_ENABLED
#define NFC_LE_OOB_REC_ENABLED 0
#endif

// <q> NFC_LE_OOB_REC_PARSER_ENABLED - nfc_le_oob_rec_parser - LE record parser

#ifndef NFC_LE_OOB_REC_PARSER_ENABLED
#define NFC_LE_OOB_REC_PARSER_ENABLED 0
#endif

// <q> NFC_NDEF_LAUNCHAPP_MSG_ENABLED - nfc_launchapp_msg - Encoding data for NDEF Application Launching message for NFC Tag

#ifndef NFC_NDEF_LAUNCHAPP_MSG_ENABLED
#define NFC_NDEF_LAUNCHAPP_MSG_ENABLED 0
#endif

// <q> NFC_NDEF_LAUNCHAPP_REC_ENABLED - nfc_launchapp_rec - Encoding data for NDEF Application Launching record for NFC Tag

#ifndef NFC_NDEF_LAUNCHAPP_REC_ENABLED
#define NFC_NDEF_LAUNCHAPP_REC_ENABLED 0
#endif

// <e> NFC_NDEF_MSG_ENABLED
//==========================================================
#ifndef NFC_NDEF_MSG_ENABLED
#define NFC_NDEF_MSG_ENABLED 0
#endif

// <o> NFC_NDEF_MSG_TAG_TYPE - NFC Tag Type

// <2=> Type
// <4=> Type
#ifndef NFC_NDEF_MSG_TAG_TYPE
#define NFC_NDEF_MSG_TAG_TYPE 2
#endif

// </e>
// <e> NFC_NDEF_MSG_PARSER_ENABLED
//==========================================================
#ifndef NFC_NDEF_MSG_PARSER_ENABLED
#define NFC_NDEF_MSG_PARSER_ENABLED 0
#endif

// <e> NFC_NDEF_MSG_PARSER_LOG_ENABLED
//==========================================================
#ifndef NFC_NDEF_MSG_PARSER_LOG_ENABLED
#define NFC_NDEF_MSG_PARSER_LOG_ENABLED 0
#endif

// <o> NFC_NDEF_MSG_PARSER_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_NDEF_MSG_PARSER_INFO_COLOR
#define NFC_NDEF_MSG_PARSER_INFO_COLOR 0
#endif

// <o> NFC_NDEF_MSG_PARSER_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NFC_NDEF_MSG_PARSER_LOG_LEVEL
#define NFC_NDEF_MSG_PARSER_LOG_LEVEL 3
#endif

// </e>
// </e>
// <q> NFC_NDEF_RECORD_ENABLED - nfc_ndef_record - NFC NDEF Record generator module

#ifndef NFC_NDEF_RECORD_ENABLED
#define NFC_NDEF_RECORD_ENABLED 0
#endif

// <e> NFC_NDEF_RECORD_PARSER_ENABLED
//==========================================================
#ifndef NFC_NDEF_RECORD_PARSER_ENABLED
#define NFC_NDEF_RECORD_PARSER_ENABLED 0
#endif

// <e> NFC_NDEF_RECORD_PARSER_LOG_ENABLED
//==========================================================
#ifndef NFC_NDEF_RECORD_PARSER_LOG_ENABLED
#define NFC_NDEF_RECORD_PARSER_LOG_ENABLED 0
#endif

// <o> NFC_NDEF_RECORD_PARSER_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_NDEF_RECORD_PARSER_INFO_COLOR
#define NFC_NDEF_RECORD_PARSER_INFO_COLOR 0
#endif

// <o> NFC_NDEF_RECORD_PARSER_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NFC_NDEF_RECORD_PARSER_LOG_LEVEL
#define NFC_NDEF_RECORD_PARSER_LOG_LEVEL 3
#endif

// </e>
// </e>
// <q> NFC_NDEF_TEXT_RECORD_ENABLED - nfc_text_rec - Encoding data for a text record for NFC Tag

#ifndef NFC_NDEF_TEXT_RECORD_ENABLED
#define NFC_NDEF_TEXT_RECORD_ENABLED 0
#endif

// <q> NFC_NDEF_URI_MSG_ENABLED - nfc_uri_msg - Encoding data for NDEF message with URI record for NFC Tag

#ifndef NFC_NDEF_URI_MSG_ENABLED
#define NFC_NDEF_URI_MSG_ENABLED 0
#endif

// <q> NFC_NDEF_URI_REC_ENABLED - nfc_uri_rec - Encoding data for a URI record for NFC Tag

#ifndef NFC_NDEF_URI_REC_ENABLED
#define NFC_NDEF_URI_REC_ENABLED 0
#endif

// <e> NFC_PLATFORM_ENABLED
//==========================================================
#ifndef NFC_PLATFORM_ENABLED
#define NFC_PLATFORM_ENABLED 0
#endif

// <e> NFC_PLATFORM_LOG_ENABLED
//==========================================================
#ifndef NFC_PLATFORM_LOG_ENABLED
#define NFC_PLATFORM_LOG_ENABLED 0
#endif

// <o> NFC_PLATFORM_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_PLATFORM_DEBUG_COLOR
#define NFC_PLATFORM_DEBUG_COLOR 0
#endif

// <o> NFC_PLATFORM_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_PLATFORM_INFO_COLOR
#define NFC_PLATFORM_INFO_COLOR 0
#endif

// <o> NFC_PLATFORM_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NFC_PLATFORM_LOG_LEVEL
#define NFC_PLATFORM_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> NFC_T2T_HAL_ENABLED
//==========================================================
#ifndef NFC_T2T_HAL_ENABLED
#define NFC_T2T_HAL_ENABLED 0
#endif

// <e> HAL_NFC_CONFIG_DEBUG_PIN_ENABLED
//==========================================================
#ifndef HAL_NFC_CONFIG_DEBUG_PIN_ENABLED
#define HAL_NFC_CONFIG_DEBUG_PIN_ENABLED 0
#endif

// <o> HAL_NFC_DETECT_EVENT_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef HAL_NFC_DETECT_EVENT_DEBUG_PIN
#define HAL_NFC_DETECT_EVENT_DEBUG_PIN 31
#endif

// <o> HAL_NFC_HCLOCK_OFF_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef HAL_NFC_HCLOCK_OFF_DEBUG_PIN
#define HAL_NFC_HCLOCK_OFF_DEBUG_PIN 31
#endif

// <o> HAL_NFC_HCLOCK_ON_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef HAL_NFC_HCLOCK_ON_DEBUG_PIN
#define HAL_NFC_HCLOCK_ON_DEBUG_PIN 31
#endif

// <o> HAL_NFC_NFC_EVENT_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef HAL_NFC_NFC_EVENT_DEBUG_PIN
#define HAL_NFC_NFC_EVENT_DEBUG_PIN 31
#endif

// <o> HAL_NFC_TIMER4_EVENT_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef HAL_NFC_TIMER4_EVENT_DEBUG_PIN
#define HAL_NFC_TIMER4_EVENT_DEBUG_PIN 31
#endif

// </e>
// <e> HAL_NFC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef HAL_NFC_CONFIG_LOG_ENABLED
#define HAL_NFC_CONFIG_LOG_ENABLED 0
#endif

// <o> HAL_NFC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef HAL_NFC_CONFIG_DEBUG_COLOR
#define HAL_NFC_CONFIG_DEBUG_COLOR 0
#endif

// <o> HAL_NFC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef HAL_NFC_CONFIG_INFO_COLOR
#define HAL_NFC_CONFIG_INFO_COLOR 0
#endif

// <o> HAL_NFC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef HAL_NFC_CONFIG_LOG_LEVEL
#define HAL_NFC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NFCT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NFCT_CONFIG_IRQ_PRIORITY
#define NFCT_CONFIG_IRQ_PRIORITY 7
#endif

// </e>
// <e> NFC_T2T_PARSER_ENABLED
//==========================================================
#ifndef NFC_T2T_PARSER_ENABLED
#define NFC_T2T_PARSER_ENABLED 0
#endif

// <e> NFC_T2T_PARSER_LOG_ENABLED
//==========================================================
#ifndef NFC_T2T_PARSER_LOG_ENABLED
#define NFC_T2T_PARSER_LOG_ENABLED 0
#endif

// <o> NFC_T2T_PARSER_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_T2T_PARSER_INFO_COLOR
#define NFC_T2T_PARSER_INFO_COLOR 0
#endif

// <o> NFC_T2T_PARSER_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NFC_T2T_PARSER_LOG_LEVEL
#define NFC_T2T_PARSER_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> NFC_T4T_APDU_ENABLED
//==========================================================
#ifndef NFC_T4T_APDU_ENABLED
#define NFC_T4T_APDU_ENABLED 0
#endif

// <e> NFC_T4T_APDU_LOG_ENABLED
//==========================================================
#ifndef NFC_T4T_APDU_LOG_ENABLED
#define NFC_T4T_APDU_LOG_ENABLED 0
#endif

// <o> NFC_T4T_APDU_LOG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_T4T_APDU_LOG_COLOR
#define NFC_T4T_APDU_LOG_COLOR 0
#endif

// <o> NFC_T4T_APDU_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NFC_T4T_APDU_LOG_LEVEL
#define NFC_T4T_APDU_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> NFC_T4T_CC_FILE_PARSER_ENABLED
//==========================================================
#ifndef NFC_T4T_CC_FILE_PARSER_ENABLED
#define NFC_T4T_CC_FILE_PARSER_ENABLED 0
#endif

// <e> NFC_T4T_CC_FILE_PARSER_LOG_ENABLED
//==========================================================
#ifndef NFC_T4T_CC_FILE_PARSER_LOG_ENABLED
#define NFC_T4T_CC_FILE_PARSER_LOG_ENABLED 0
#endif

// <o> NFC_T4T_CC_FILE_PARSER_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_T4T_CC_FILE_PARSER_INFO_COLOR
#define NFC_T4T_CC_FILE_PARSER_INFO_COLOR 0
#endif

// <o> NFC_T4T_CC_FILE_PARSER_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NFC_T4T_CC_FILE_PARSER_LOG_LEVEL
#define NFC_T4T_CC_FILE_PARSER_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> NFC_T4T_HAL_ENABLED
//==========================================================
#ifndef NFC_T4T_HAL_ENABLED
#define NFC_T4T_HAL_ENABLED 0
#endif

// <e> HAL_NFC_CONFIG_DEBUG_PIN_ENABLED
//==========================================================
#ifndef HAL_NFC_CONFIG_DEBUG_PIN_ENABLED
#define HAL_NFC_CONFIG_DEBUG_PIN_ENABLED 0
#endif

// <o> HAL_NFC_DETECT_EVENT_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef HAL_NFC_DETECT_EVENT_DEBUG_PIN
#define HAL_NFC_DETECT_EVENT_DEBUG_PIN 31
#endif

// <o> HAL_NFC_HCLOCK_OFF_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef HAL_NFC_HCLOCK_OFF_DEBUG_PIN
#define HAL_NFC_HCLOCK_OFF_DEBUG_PIN 31
#endif

// <o> HAL_NFC_HCLOCK_ON_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef HAL_NFC_HCLOCK_ON_DEBUG_PIN
#define HAL_NFC_HCLOCK_ON_DEBUG_PIN 31
#endif

// <o> HAL_NFC_NFC_EVENT_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef HAL_NFC_NFC_EVENT_DEBUG_PIN
#define HAL_NFC_NFC_EVENT_DEBUG_PIN 31
#endif

// <o> HAL_NFC_TIMER4_EVENT_DEBUG_PIN - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <32=> 32
// <33=> 33
// <34=> 34
// <35=> 35
// <36=> 36
// <37=> 37
// <38=> 38
// <39=> 39
// <40=> 40
// <41=> 41
// <42=> 42
// <43=> 43
// <44=> 44
// <45=> 45
// <46=> 46
// <47=> 47
// <4294967295=> Not
#ifndef HAL_NFC_TIMER4_EVENT_DEBUG_PIN
#define HAL_NFC_TIMER4_EVENT_DEBUG_PIN 31
#endif

// </e>
// <e> HAL_NFC_CONFIG_LOG_ENABLED
//==========================================================
#ifndef HAL_NFC_CONFIG_LOG_ENABLED
#define HAL_NFC_CONFIG_LOG_ENABLED 0
#endif

// <o> HAL_NFC_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef HAL_NFC_CONFIG_DEBUG_COLOR
#define HAL_NFC_CONFIG_DEBUG_COLOR 0
#endif

// <o> HAL_NFC_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef HAL_NFC_CONFIG_INFO_COLOR
#define HAL_NFC_CONFIG_INFO_COLOR 0
#endif

// <o> HAL_NFC_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef HAL_NFC_CONFIG_LOG_LEVEL
#define HAL_NFC_CONFIG_LOG_LEVEL 3
#endif

// </e>
// <o> NFCT_CONFIG_IRQ_PRIORITY - Interrupt priority

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
#ifndef NFCT_CONFIG_IRQ_PRIORITY
#define NFCT_CONFIG_IRQ_PRIORITY 7
#endif

// </e>
// <e> NFC_T4T_HL_DETECTION_PROCEDURES_ENABLED
//==========================================================
#ifndef NFC_T4T_HL_DETECTION_PROCEDURES_ENABLED
#define NFC_T4T_HL_DETECTION_PROCEDURES_ENABLED 0
#endif

// <o> APDU_BUFF_SIZE - Size (in bytes) of the buffer for APDU storage

#ifndef APDU_BUFF_SIZE
#define APDU_BUFF_SIZE 250
#endif

// <o> CC_STORAGE_BUFF_SIZE - Size (in bytes) of the buffer for CC file storage

#ifndef CC_STORAGE_BUFF_SIZE
#define CC_STORAGE_BUFF_SIZE 64
#endif

// <e> NFC_T4T_HL_DETECTION_PROCEDURES_LOG_ENABLED
//==========================================================
#ifndef NFC_T4T_HL_DETECTION_PROCEDURES_LOG_ENABLED
#define NFC_T4T_HL_DETECTION_PROCEDURES_LOG_ENABLED 0
#endif

// <o> NFC_T4T_HL_DETECTION_PROCEDURES_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_T4T_HL_DETECTION_PROCEDURES_INFO_COLOR
#define NFC_T4T_HL_DETECTION_PROCEDURES_INFO_COLOR 0
#endif

// <o> NFC_T4T_HL_DETECTION_PROCEDURES_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NFC_T4T_HL_DETECTION_PROCEDURES_LOG_LEVEL
#define NFC_T4T_HL_DETECTION_PROCEDURES_LOG_LEVEL 3
#endif

// </e>
// </e>
// <e> NFC_T4T_TLV_BLOCK_PARSER_ENABLED
//==========================================================
#ifndef NFC_T4T_TLV_BLOCK_PARSER_ENABLED
#define NFC_T4T_TLV_BLOCK_PARSER_ENABLED 0
#endif

// <e> NFC_T4T_TLV_BLOCK_PARSER_LOG_ENABLED
//==========================================================
#ifndef NFC_T4T_TLV_BLOCK_PARSER_LOG_ENABLED
#define NFC_T4T_TLV_BLOCK_PARSER_LOG_ENABLED 0
#endif

// <o> NFC_T4T_TLV_BLOCK_PARSER_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef NFC_T4T_TLV_BLOCK_PARSER_INFO_COLOR
#define NFC_T4T_TLV_BLOCK_PARSER_INFO_COLOR 0
#endif

// <o> NFC_T4T_TLV_BLOCK_PARSER_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef NFC_T4T_TLV_BLOCK_PARSER_LOG_LEVEL
#define NFC_T4T_TLV_BLOCK_PARSER_LOG_LEVEL 3
#endif

// </e>
// </e>
// </h>
// <h> nRF_Segger_RTT
//==========================================================
#ifndef nRF_Segger_RTT
#define nRF_Segger_RTT 
#endif

// <h> segger_rtt
//==========================================================
#ifndef segger_rtt
#define segger_rtt 
#endif

// <o> SEGGER_RTT_CONFIG_BUFFER_SIZE_DOWN - Size of downstream buffer.

#ifndef SEGGER_RTT_CONFIG_BUFFER_SIZE_DOWN
#define SEGGER_RTT_CONFIG_BUFFER_SIZE_DOWN 16
#endif

// <o> SEGGER_RTT_CONFIG_BUFFER_SIZE_UP - Size of upstream buffer.

// <i> or this value is actually used. It depends on which one is bigger.
#ifndef SEGGER_RTT_CONFIG_BUFFER_SIZE_UP
#define SEGGER_RTT_CONFIG_BUFFER_SIZE_UP 512
#endif

// <o> SEGGER_RTT_CONFIG_DEFAULT_MODE - RTT behavior if the buffer is full.

// <i> - BLOCK - Wait until there is space in the buffer.
// <0=> SKIP
// <1=> TRIM
// <2=> BLOCK_IF_FIFO_FULL
#ifndef SEGGER_RTT_CONFIG_DEFAULT_MODE
#define SEGGER_RTT_CONFIG_DEFAULT_MODE 0
#endif

// <o> SEGGER_RTT_CONFIG_MAX_NUM_DOWN_BUFFERS - Maximum number of downstream buffers.

#ifndef SEGGER_RTT_CONFIG_MAX_NUM_DOWN_BUFFERS
#define SEGGER_RTT_CONFIG_MAX_NUM_DOWN_BUFFERS 2
#endif

// <o> SEGGER_RTT_CONFIG_MAX_NUM_UP_BUFFERS - Maximum number of upstream buffers.

#ifndef SEGGER_RTT_CONFIG_MAX_NUM_UP_BUFFERS
#define SEGGER_RTT_CONFIG_MAX_NUM_UP_BUFFERS 2
#endif

// </h>
// </h>
// <h> nRF_Serialization
//==========================================================
#ifndef nRF_Serialization
#define nRF_Serialization 
#endif

// <h> sercon_mw_ant
//==========================================================
#ifndef sercon_mw_ant
#define sercon_mw_ant 
#endif

// <o> ANT_SER_CONFIG_BURST_QUEUE_SIZE - ANT burst queue size

#ifndef ANT_SER_CONFIG_BURST_QUEUE_SIZE
#define ANT_SER_CONFIG_BURST_QUEUE_SIZE 128
#endif

// <o> ANT_SER_CONFIG_ENCRYPTED_CHANNELS - Encrypted ANT channels

#ifndef ANT_SER_CONFIG_ENCRYPTED_CHANNELS
#define ANT_SER_CONFIG_ENCRYPTED_CHANNELS 0
#endif

// <o> ANT_SER_CONFIG_EVENT_QUEUE_SIZE - Event queue size

#ifndef ANT_SER_CONFIG_EVENT_QUEUE_SIZE
#define ANT_SER_CONFIG_EVENT_QUEUE_SIZE 32
#endif

// <o> ANT_SER_CONFIG_TOTAL_CHANNELS_ALLOCATED - Allocated ANT channels

#ifndef ANT_SER_CONFIG_TOTAL_CHANNELS_ALLOCATED
#define ANT_SER_CONFIG_TOTAL_CHANNELS_ALLOCATED 1
#endif

// </h>
// </h>
// <h> nRF_SoftDevice
//==========================================================
#ifndef nRF_SoftDevice
#define nRF_SoftDevice 
#endif

// <e> NRF_SDH_ANT_ENABLED
//==========================================================
#ifndef NRF_SDH_ANT_ENABLED
#define NRF_SDH_ANT_ENABLED 0
#endif

// <h> ANT
//==========================================================
#ifndef ANT
#define ANT 
#endif

// <h> ANT
//==========================================================
#ifndef ANT
#define ANT 
#endif

// <o> ANT_BPWR_ANT_OBSERVER_PRIO 

// <i> Priority with which ANT events are dispatched to the Bicycle Power Profile.
#ifndef ANT_BPWR_ANT_OBSERVER_PRIO
#define ANT_BPWR_ANT_OBSERVER_PRIO 1
#endif

// <o> ANT_BSC_ANT_OBSERVER_PRIO 

// <i> Priority with which ANT events are dispatched to the Bicycle Speed and Cadence Profile.
#ifndef ANT_BSC_ANT_OBSERVER_PRIO
#define ANT_BSC_ANT_OBSERVER_PRIO 1
#endif

// <o> ANT_ENCRYPT_ANT_OBSERVER_PRIO 

// <i> Priority with which ANT events are dispatched to the Cryptographic ANT stack configuration module.
#ifndef ANT_ENCRYPT_ANT_OBSERVER_PRIO
#define ANT_ENCRYPT_ANT_OBSERVER_PRIO 1
#endif

// <o> ANT_HRM_ANT_OBSERVER_PRIO 

// <i> Priority with which ANT events are dispatched to the Heart Rate Monitor.
#ifndef ANT_HRM_ANT_OBSERVER_PRIO
#define ANT_HRM_ANT_OBSERVER_PRIO 1
#endif

// <o> ANT_SDM_ANT_OBSERVER_PRIO 

// <i> Priority with which ANT events are dispatched to the Stride Based Speed and Distance Monitor Profile.
#ifndef ANT_SDM_ANT_OBSERVER_PRIO
#define ANT_SDM_ANT_OBSERVER_PRIO 1
#endif

// <o> ANT_STATE_INDICATOR_ANT_OBSERVER_PRIO 

// <i> Priority with which ANT events are dispatched to the ANT state indicator module.
#ifndef ANT_STATE_INDICATOR_ANT_OBSERVER_PRIO
#define ANT_STATE_INDICATOR_ANT_OBSERVER_PRIO 1
#endif

// <o> BSP_BTN_ANT_OBSERVER_PRIO 

// <i> Priority with which ANT events are dispatched to the Button Control module.
#ifndef BSP_BTN_ANT_OBSERVER_PRIO
#define BSP_BTN_ANT_OBSERVER_PRIO 1
#endif

// <o> NRF_DFU_ANT_EVT_HANDLER_PRIO - DFU ANT event handling priority.

// <i> Priority used to register the ANT event handler for DFU purposes. Change this if there is other ANT event handlers that should be higher priority.
#ifndef NRF_DFU_ANT_EVT_HANDLER_PRIO
#define NRF_DFU_ANT_EVT_HANDLER_PRIO 1
#endif

// </h>
// <o> NRF_SDH_ANT_BURST_QUEUE_SIZE - ANT burst queue size.

#ifndef NRF_SDH_ANT_BURST_QUEUE_SIZE
#define NRF_SDH_ANT_BURST_QUEUE_SIZE 128
#endif

// <o> NRF_SDH_ANT_ENCRYPTED_CHANNELS - Encrypted ANT channels.

#ifndef NRF_SDH_ANT_ENCRYPTED_CHANNELS
#define NRF_SDH_ANT_ENCRYPTED_CHANNELS 0
#endif

// <o> NRF_SDH_ANT_EVENT_QUEUE_SIZE - Event queue size.

#ifndef NRF_SDH_ANT_EVENT_QUEUE_SIZE
#define NRF_SDH_ANT_EVENT_QUEUE_SIZE 32
#endif

// <o> NRF_SDH_ANT_OBSERVER_PRIO_LEVELS - Total number of priority levels for ANT observers.

// <i> The priority level of a handler determines the order in which it receives events, with respect to other handlers.
#ifndef NRF_SDH_ANT_OBSERVER_PRIO_LEVELS
#define NRF_SDH_ANT_OBSERVER_PRIO_LEVELS 2
#endif

// <o> NRF_SDH_ANT_TOTAL_CHANNELS_ALLOCATED - Allocated ANT channels.

#ifndef NRF_SDH_ANT_TOTAL_CHANNELS_ALLOCATED
#define NRF_SDH_ANT_TOTAL_CHANNELS_ALLOCATED 0
#endif

// </h>
// </e>
// <e> NRF_SDH_BLE_ENABLED
//==========================================================
#ifndef NRF_SDH_BLE_ENABLED
#define NRF_SDH_BLE_ENABLED 0
#endif

// <h> BLE
//==========================================================
#ifndef BLE
#define BLE 
#endif

// <h> BLE
//==========================================================
#ifndef BLE
#define BLE 
#endif

// <o> BLE_ADV_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Advertising module.
#ifndef BLE_ADV_BLE_OBSERVER_PRIO
#define BLE_ADV_BLE_OBSERVER_PRIO 1
#endif

// <o> BLE_ANCS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Apple Notification Service Client.
#ifndef BLE_ANCS_C_BLE_OBSERVER_PRIO
#define BLE_ANCS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_ANS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Alert Notification Service Client.
#ifndef BLE_ANS_C_BLE_OBSERVER_PRIO
#define BLE_ANS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_BAS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Battery Service.
#ifndef BLE_BAS_BLE_OBSERVER_PRIO
#define BLE_BAS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_BAS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Battery Service Client.
#ifndef BLE_BAS_C_BLE_OBSERVER_PRIO
#define BLE_BAS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_BPS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Blood Pressure Service.
#ifndef BLE_BPS_BLE_OBSERVER_PRIO
#define BLE_BPS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_CONN_PARAMS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Connection parameters module.
#ifndef BLE_CONN_PARAMS_BLE_OBSERVER_PRIO
#define BLE_CONN_PARAMS_BLE_OBSERVER_PRIO 1
#endif

// <o> BLE_CONN_STATE_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Connection State module.
#ifndef BLE_CONN_STATE_BLE_OBSERVER_PRIO
#define BLE_CONN_STATE_BLE_OBSERVER_PRIO 0
#endif

// <o> BLE_CSCS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Cycling Speed and Cadence Service.
#ifndef BLE_CSCS_BLE_OBSERVER_PRIO
#define BLE_CSCS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_CTS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Current Time Service Client.
#ifndef BLE_CTS_C_BLE_OBSERVER_PRIO
#define BLE_CTS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_DB_DISC_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Database Discovery module.
#ifndef BLE_DB_DISC_BLE_OBSERVER_PRIO
#define BLE_DB_DISC_BLE_OBSERVER_PRIO 1
#endif

// <o> BLE_DFU_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the DFU Service.
#ifndef BLE_DFU_BLE_OBSERVER_PRIO
#define BLE_DFU_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_DIS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Device Information Client.
#ifndef BLE_DIS_C_BLE_OBSERVER_PRIO
#define BLE_DIS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_GLS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Glucose Service.
#ifndef BLE_GLS_BLE_OBSERVER_PRIO
#define BLE_GLS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_HIDS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Human Interface Device Service.
#ifndef BLE_HIDS_BLE_OBSERVER_PRIO
#define BLE_HIDS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_HRS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Heart Rate Service.
#ifndef BLE_HRS_BLE_OBSERVER_PRIO
#define BLE_HRS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_HRS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Heart Rate Service Client.
#ifndef BLE_HRS_C_BLE_OBSERVER_PRIO
#define BLE_HRS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_HTS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Health Thermometer Service.
#ifndef BLE_HTS_BLE_OBSERVER_PRIO
#define BLE_HTS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_IAS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Immediate Alert Service.
#ifndef BLE_IAS_BLE_OBSERVER_PRIO
#define BLE_IAS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_IAS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Immediate Alert Service Client.
#ifndef BLE_IAS_C_BLE_OBSERVER_PRIO
#define BLE_IAS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_LBS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the LED Button Service.
#ifndef BLE_LBS_BLE_OBSERVER_PRIO
#define BLE_LBS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_LBS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the LED Button Service Client.
#ifndef BLE_LBS_C_BLE_OBSERVER_PRIO
#define BLE_LBS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_LESC_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the BLE LESC module.
#ifndef BLE_LESC_OBSERVER_PRIO
#define BLE_LESC_OBSERVER_PRIO 2
#endif

// <o> BLE_LLS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Link Loss Service.
#ifndef BLE_LLS_BLE_OBSERVER_PRIO
#define BLE_LLS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_LNS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Location Navigation Service.
#ifndef BLE_LNS_BLE_OBSERVER_PRIO
#define BLE_LNS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_NUS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the UART Service.
#ifndef BLE_NUS_BLE_OBSERVER_PRIO
#define BLE_NUS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_NUS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the UART Central Service.
#ifndef BLE_NUS_C_BLE_OBSERVER_PRIO
#define BLE_NUS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_OTS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Object transfer service.
#ifndef BLE_OTS_BLE_OBSERVER_PRIO
#define BLE_OTS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_OTS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Object transfer service client.
#ifndef BLE_OTS_C_BLE_OBSERVER_PRIO
#define BLE_OTS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_RSCS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Running Speed and Cadence Service.
#ifndef BLE_RSCS_BLE_OBSERVER_PRIO
#define BLE_RSCS_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_RSCS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Running Speed and Cadence Client.
#ifndef BLE_RSCS_C_BLE_OBSERVER_PRIO
#define BLE_RSCS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> BLE_TPS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the TX Power Service.
#ifndef BLE_TPS_BLE_OBSERVER_PRIO
#define BLE_TPS_BLE_OBSERVER_PRIO 2
#endif

// <o> BSP_BTN_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Button Control module.
#ifndef BSP_BTN_BLE_OBSERVER_PRIO
#define BSP_BTN_BLE_OBSERVER_PRIO 1
#endif

// <o> NFC_BLE_PAIR_LIB_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the NFC pairing library.
#ifndef NFC_BLE_PAIR_LIB_BLE_OBSERVER_PRIO
#define NFC_BLE_PAIR_LIB_BLE_OBSERVER_PRIO 1
#endif

// <o> NRF_BLE_BMS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Bond Management Service.
#ifndef NRF_BLE_BMS_BLE_OBSERVER_PRIO
#define NRF_BLE_BMS_BLE_OBSERVER_PRIO 2
#endif

// <o> NRF_BLE_CGMS_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Contiuon Glucose Monitoring Service.
#ifndef NRF_BLE_CGMS_BLE_OBSERVER_PRIO
#define NRF_BLE_CGMS_BLE_OBSERVER_PRIO 2
#endif

// <o> NRF_BLE_ES_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Eddystone module.
#ifndef NRF_BLE_ES_BLE_OBSERVER_PRIO
#define NRF_BLE_ES_BLE_OBSERVER_PRIO 2
#endif

// <o> NRF_BLE_GATT_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the GATT module.
#ifndef NRF_BLE_GATT_BLE_OBSERVER_PRIO
#define NRF_BLE_GATT_BLE_OBSERVER_PRIO 1
#endif

// <o> NRF_BLE_GATTS_C_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the GATT Service Client.
#ifndef NRF_BLE_GATTS_C_BLE_OBSERVER_PRIO
#define NRF_BLE_GATTS_C_BLE_OBSERVER_PRIO 2
#endif

// <o> NRF_BLE_GQ_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the GATT Queue module.
#ifndef NRF_BLE_GQ_BLE_OBSERVER_PRIO
#define NRF_BLE_GQ_BLE_OBSERVER_PRIO 1
#endif

// <o> NRF_BLE_QWR_BLE_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the Queued writes module.
#ifndef NRF_BLE_QWR_BLE_OBSERVER_PRIO
#define NRF_BLE_QWR_BLE_OBSERVER_PRIO 2
#endif

// <o> NRF_BLE_SCAN_OBSERVER_PRIO 

// <i> Priority for dispatching the BLE events to the Scanning Module.
#ifndef NRF_BLE_SCAN_OBSERVER_PRIO
#define NRF_BLE_SCAN_OBSERVER_PRIO 1
#endif

// <o> PM_BLE_OBSERVER_PRIO - Priority with which BLE events are dispatched to the Peer Manager module.

#ifndef PM_BLE_OBSERVER_PRIO
#define PM_BLE_OBSERVER_PRIO 1
#endif

// </h>
// <o> NRF_SDH_BLE_CENTRAL_LINK_COUNT - Maximum number of central links.

#ifndef NRF_SDH_BLE_CENTRAL_LINK_COUNT
#define NRF_SDH_BLE_CENTRAL_LINK_COUNT 0
#endif

// <o> NRF_SDH_BLE_GAP_DATA_LENGTH 27-251

// <i> Requested BLE GAP data length to be negotiated.
#ifndef NRF_SDH_BLE_GAP_DATA_LENGTH
#define NRF_SDH_BLE_GAP_DATA_LENGTH 27
#endif

// <o> NRF_SDH_BLE_GAP_EVENT_LENGTH - GAP event length.

// <i> The time set aside for this connection on every connection interval in 1.25 ms units.
#ifndef NRF_SDH_BLE_GAP_EVENT_LENGTH
#define NRF_SDH_BLE_GAP_EVENT_LENGTH 6
#endif

// <o> NRF_SDH_BLE_GATT_MAX_MTU_SIZE - Static maximum MTU size.

#ifndef NRF_SDH_BLE_GATT_MAX_MTU_SIZE
#define NRF_SDH_BLE_GATT_MAX_MTU_SIZE 23
#endif

// <o> NRF_SDH_BLE_GATTS_ATTR_TAB_SIZE - Attribute Table size in bytes. The size must be a multiple of 4.

#ifndef NRF_SDH_BLE_GATTS_ATTR_TAB_SIZE
#define NRF_SDH_BLE_GATTS_ATTR_TAB_SIZE 1408
#endif

// <o> NRF_SDH_BLE_OBSERVER_PRIO_LEVELS - Total number of priority levels for BLE observers.

// <i> The priority level of a handler determines the order in which it receives events, with respect to other handlers.
#ifndef NRF_SDH_BLE_OBSERVER_PRIO_LEVELS
#define NRF_SDH_BLE_OBSERVER_PRIO_LEVELS 4
#endif

// <o> NRF_SDH_BLE_PERIPHERAL_LINK_COUNT - Maximum number of peripheral links.

#ifndef NRF_SDH_BLE_PERIPHERAL_LINK_COUNT
#define NRF_SDH_BLE_PERIPHERAL_LINK_COUNT 1
#endif

// <q> NRF_SDH_BLE_SERVICE_CHANGED - Include the Service Changed characteristic in the Attribute Table.

#ifndef NRF_SDH_BLE_SERVICE_CHANGED
#define NRF_SDH_BLE_SERVICE_CHANGED 0
#endif

// <o> NRF_SDH_BLE_TOTAL_LINK_COUNT - Total link count.

// <i> Maximum number of total concurrent connections using the default configuration.
#ifndef NRF_SDH_BLE_TOTAL_LINK_COUNT
#define NRF_SDH_BLE_TOTAL_LINK_COUNT 1
#endif

// <o> NRF_SDH_BLE_VS_UUID_COUNT - The number of vendor-specific UUIDs.

#ifndef NRF_SDH_BLE_VS_UUID_COUNT
#define NRF_SDH_BLE_VS_UUID_COUNT 2
#endif

// </h>
// </e>
// <e> NRF_SDH_ENABLED
//==========================================================
#ifndef NRF_SDH_ENABLED
#define NRF_SDH_ENABLED 0
#endif

// <h> Clock
//==========================================================
#ifndef Clock
#define Clock 
#endif

// <o> NRF_SDH_CLOCK_LF_ACCURACY - External clock accuracy used in the LL to compute timing.

// <0=> NRF_CLOCK_LF_ACCURACY_250_PPM
// <1=> NRF_CLOCK_LF_ACCURACY_500_PPM
// <2=> NRF_CLOCK_LF_ACCURACY_150_PPM
// <3=> NRF_CLOCK_LF_ACCURACY_100_PPM
// <4=> NRF_CLOCK_LF_ACCURACY_75_PPM
// <5=> NRF_CLOCK_LF_ACCURACY_50_PPM
// <6=> NRF_CLOCK_LF_ACCURACY_30_PPM
// <7=> NRF_CLOCK_LF_ACCURACY_20_PPM
// <8=> NRF_CLOCK_LF_ACCURACY_10_PPM
// <9=> NRF_CLOCK_LF_ACCURACY_5_PPM
// <10=> NRF_CLOCK_LF_ACCURACY_2_PPM
// <11=> NRF_CLOCK_LF_ACCURACY_1_PPM
#ifndef NRF_SDH_CLOCK_LF_ACCURACY
#define NRF_SDH_CLOCK_LF_ACCURACY 7
#endif

// <o> NRF_SDH_CLOCK_LF_RC_CTIV - SoftDevice calibration timer interval.

#ifndef NRF_SDH_CLOCK_LF_RC_CTIV
#define NRF_SDH_CLOCK_LF_RC_CTIV 0
#endif

// <o> NRF_SDH_CLOCK_LF_RC_TEMP_CTIV - SoftDevice calibration timer interval under constant temperature.

// <i> if the temperature has not changed.
#ifndef NRF_SDH_CLOCK_LF_RC_TEMP_CTIV
#define NRF_SDH_CLOCK_LF_RC_TEMP_CTIV 0
#endif

// <o> NRF_SDH_CLOCK_LF_SRC - SoftDevice clock source.

// <0=> NRF_CLOCK_LF_SRC_RC
// <1=> NRF_CLOCK_LF_SRC_XTAL
// <2=> NRF_CLOCK_LF_SRC_SYNTH
#ifndef NRF_SDH_CLOCK_LF_SRC
#define NRF_SDH_CLOCK_LF_SRC 1
#endif

// </h>
// <h> Dispatch
//==========================================================
#ifndef Dispatch
#define Dispatch 
#endif

// <o> NRF_SDH_DISPATCH_MODEL 

// <i> NRF_SDH_DISPATCH_MODEL_POLLING: SoftDevice events are to be fetched manually.
// <0=> NRF_SDH_DISPATCH_MODEL_INTERRUPT
// <1=> NRF_SDH_DISPATCH_MODEL_APPSH
// <2=> NRF_SDH_DISPATCH_MODEL_POLLING
#ifndef NRF_SDH_DISPATCH_MODEL
#define NRF_SDH_DISPATCH_MODEL 0
#endif

// </h>
// <h> SDH
//==========================================================
#ifndef SDH
#define SDH 
#endif

// <o> NRF_SDH_REQ_OBSERVER_PRIO_LEVELS - Total number of priority levels for request observers.

// <i> The priority level of a handler determines the order in which it receives events, with respect to other handlers.
#ifndef NRF_SDH_REQ_OBSERVER_PRIO_LEVELS
#define NRF_SDH_REQ_OBSERVER_PRIO_LEVELS 2
#endif

// <o> NRF_SDH_STACK_OBSERVER_PRIO_LEVELS - Total number of priority levels for stack event observers.

// <i> The priority level of a handler determines the order in which it receives events, with respect to other handlers.
#ifndef NRF_SDH_STACK_OBSERVER_PRIO_LEVELS
#define NRF_SDH_STACK_OBSERVER_PRIO_LEVELS 2
#endif

// <o> NRF_SDH_STATE_OBSERVER_PRIO_LEVELS - Total number of priority levels for state observers.

// <i> The priority level of a handler determines the order in which it receives events, with respect to other handlers.
#ifndef NRF_SDH_STATE_OBSERVER_PRIO_LEVELS
#define NRF_SDH_STATE_OBSERVER_PRIO_LEVELS 2
#endif

// <h> Stack
//==========================================================
#ifndef Stack
#define Stack 
#endif

// <o> NRF_SDH_ANT_STACK_OBSERVER_PRIO 

// <i> Zero is the highest priority.
#ifndef NRF_SDH_ANT_STACK_OBSERVER_PRIO
#define NRF_SDH_ANT_STACK_OBSERVER_PRIO 0
#endif

// <o> NRF_SDH_BLE_STACK_OBSERVER_PRIO 

// <i> Zero is the highest priority.
#ifndef NRF_SDH_BLE_STACK_OBSERVER_PRIO
#define NRF_SDH_BLE_STACK_OBSERVER_PRIO 0
#endif

// <o> NRF_SDH_SOC_STACK_OBSERVER_PRIO 

// <i> Zero is the highest priority.
#ifndef NRF_SDH_SOC_STACK_OBSERVER_PRIO
#define NRF_SDH_SOC_STACK_OBSERVER_PRIO 0
#endif

// </h>
// <h> State
//==========================================================
#ifndef State
#define State 
#endif

// <o> CLOCK_CONFIG_STATE_OBSERVER_PRIO 

// <i> Priority with which state events are dispatched to the Clock driver.
#ifndef CLOCK_CONFIG_STATE_OBSERVER_PRIO
#define CLOCK_CONFIG_STATE_OBSERVER_PRIO 0
#endif

// <o> POWER_CONFIG_STATE_OBSERVER_PRIO 

// <i> Priority with which state events are dispatched to the Power driver.
#ifndef POWER_CONFIG_STATE_OBSERVER_PRIO
#define POWER_CONFIG_STATE_OBSERVER_PRIO 0
#endif

// <o> RNG_CONFIG_STATE_OBSERVER_PRIO 

// <i> Priority with which state events are dispatched to this module.
#ifndef RNG_CONFIG_STATE_OBSERVER_PRIO
#define RNG_CONFIG_STATE_OBSERVER_PRIO 0
#endif

// </h>
// </h>
// </e>
// <e> NRF_SDH_SOC_ENABLED
//==========================================================
#ifndef NRF_SDH_SOC_ENABLED
#define NRF_SDH_SOC_ENABLED 0
#endif

// <h> SoC
//==========================================================
#ifndef SoC
#define SoC 
#endif

// <o> NRF_SDH_SOC_OBSERVER_PRIO_LEVELS - Total number of priority levels for SoC observers.

// <i> The priority level of a handler determines the order in which it receives events, with respect to other handlers.
#ifndef NRF_SDH_SOC_OBSERVER_PRIO_LEVELS
#define NRF_SDH_SOC_OBSERVER_PRIO_LEVELS 2
#endif

// <h> SoC
//==========================================================
#ifndef SoC
#define SoC 
#endif

// <o> BLE_ADV_SOC_OBSERVER_PRIO 

// <i> Priority with which SoC events are dispatched to the Advertising module.
#ifndef BLE_ADV_SOC_OBSERVER_PRIO
#define BLE_ADV_SOC_OBSERVER_PRIO 1
#endif

// <o> BLE_DFU_SOC_OBSERVER_PRIO 

// <i> Priority with which BLE events are dispatched to the DFU Service.
#ifndef BLE_DFU_SOC_OBSERVER_PRIO
#define BLE_DFU_SOC_OBSERVER_PRIO 1
#endif

// <o> CLOCK_CONFIG_SOC_OBSERVER_PRIO 

// <i> Priority with which SoC events are dispatched to the Clock driver.
#ifndef CLOCK_CONFIG_SOC_OBSERVER_PRIO
#define CLOCK_CONFIG_SOC_OBSERVER_PRIO 0
#endif

// <o> POWER_CONFIG_SOC_OBSERVER_PRIO 

// <i> Priority with which SoC events are dispatched to the Power driver.
#ifndef POWER_CONFIG_SOC_OBSERVER_PRIO
#define POWER_CONFIG_SOC_OBSERVER_PRIO 0
#endif

// </h>
// </h>
// </e>
// </h>
// <h> nRF_TLS
//==========================================================
#ifndef nRF_TLS
#define nRF_TLS 
#endif

// <e> TLS_CONFIG_LOG_ENABLED
//==========================================================
#ifndef TLS_CONFIG_LOG_ENABLED
#define TLS_CONFIG_LOG_ENABLED 0
#endif

// <o> TLS_CONFIG_DEBUG_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TLS_CONFIG_DEBUG_COLOR
#define TLS_CONFIG_DEBUG_COLOR 0
#endif

// <o> TLS_CONFIG_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef TLS_CONFIG_INFO_COLOR
#define TLS_CONFIG_INFO_COLOR 0
#endif

// <o> TLS_CONFIG_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef TLS_CONFIG_LOG_LEVEL
#define TLS_CONFIG_LOG_LEVEL 3
#endif

// </e>
// </h>
// <h> nRF_USB_DFU
//==========================================================
#ifndef nRF_USB_DFU
#define nRF_USB_DFU 
#endif

// <o> NRF_DFU_SERIAL_USB_RX_BUFFERS - nrf_dfu_serial_usb - USB DFU transport

// <i> to received packets being dropped.
#ifndef NRF_DFU_SERIAL_USB_RX_BUFFERS
#define NRF_DFU_SERIAL_USB_RX_BUFFERS 3
#endif

// </h>
// <h> Third
//==========================================================
#ifndef Third
#define Third 
#endif

// <e> ADAFRUIT_PN532_ENABLED
//==========================================================
#ifndef ADAFRUIT_PN532_ENABLED
#define ADAFRUIT_PN532_ENABLED 0
#endif

// <e> ADAFRUIT_PN532_LOG_ENABLED
//==========================================================
#ifndef ADAFRUIT_PN532_LOG_ENABLED
#define ADAFRUIT_PN532_LOG_ENABLED 0
#endif

// <o> ADAFRUIT_PN532_INFO_COLOR - ANSI escape code prefix.

// <0=> Default
// <1=> Black
// <2=> Red
// <3=> Green
// <4=> Yellow
// <5=> Blue
// <6=> Magenta
// <7=> Cyan
// <8=> White
#ifndef ADAFRUIT_PN532_INFO_COLOR
#define ADAFRUIT_PN532_INFO_COLOR 0
#endif

// <o> ADAFRUIT_PN532_LOG_LEVEL - Default Severity level

// <0=> Off
// <1=> Error
// <2=> Warning
// <3=> Info
// <4=> Debug
#ifndef ADAFRUIT_PN532_LOG_LEVEL
#define ADAFRUIT_PN532_LOG_LEVEL 3
#endif

// </e>
// <o> PN532_CONFIG_SCL - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef PN532_CONFIG_SCL
#define PN532_CONFIG_SCL 27
#endif

// <o> PN532_CONFIG_SDA - Pin number

// <0=> 
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7
// <8=> 8
// <9=> 9
// <10=> 10
// <11=> 11
// <12=> 12
// <13=> 13
// <14=> 14
// <15=> 15
// <16=> 16
// <17=> 17
// <18=> 18
// <19=> 19
// <20=> 20
// <21=> 21
// <22=> 22
// <23=> 23
// <24=> 24
// <25=> 25
// <26=> 26
// <27=> 27
// <28=> 28
// <29=> 29
// <30=> 30
// <31=> 31
// <4294967295=> Not
#ifndef PN532_CONFIG_SDA
#define PN532_CONFIG_SDA 26
#endif

// <o> PN532_CONFIG_TWI_INSTANCE - TWI instance to be used

// <0=> 
// <1=> 1
// <2=> 2
#ifndef PN532_CONFIG_TWI_INSTANCE
#define PN532_CONFIG_TWI_INSTANCE 0
#endif

// <o> PN532_IRQ 

#ifndef PN532_IRQ
#define PN532_IRQ 13
#endif

// <o> PN532_PACKBUFF_SIZE - Size of the buffer used for sending commands and storing responses.

#ifndef PN532_PACKBUFF_SIZE
#define PN532_PACKBUFF_SIZE 256
#endif

// <o> PN532_RESET 

#ifndef PN532_RESET
#define PN532_RESET 14
#endif

// </e>
// <q> CJSON_HOOKS_ENABLE_LOGS - cjson - cJSON library

#ifndef CJSON_HOOKS_ENABLE_LOGS
#define CJSON_HOOKS_ENABLE_LOGS 0
#endif

// <q> TILE_SUPPORT_ENABLED - tile - Software Component

#ifndef TILE_SUPPORT_ENABLED
#define TILE_SUPPORT_ENABLED 0
#endif

// </h>
// <<< end of configuration section >>>
#endif //SDK_CONFIG_H
