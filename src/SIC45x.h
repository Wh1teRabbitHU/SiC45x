#ifndef SIC45x_Header
#define SIC45x_Header

#include <PMBus.h>

// IC addresses - Address pin is low
#define SIC45X_PMB_ADDR0_0_845				0b0010000
#define SIC45X_PMB_ADDR0_1_3				0b0010001
#define SIC45X_PMB_ADDR0_1_78				0b0010010
#define SIC45X_PMB_ADDR0_2_32				0b0010011
#define SIC45X_PMB_ADDR0_2_87				0b0010100
#define SIC45X_PMB_ADDR0_3_48				0b0010101
#define SIC45X_PMB_ADDR0_4_12				0b0010110
#define SIC45X_PMB_ADDR0_4_75				0b0010111
#define SIC45X_PMB_ADDR0_5_49				0b0011000
#define SIC45X_PMB_ADDR0_6_19				0b0011001
#define SIC45X_PMB_ADDR0_6_98				0b0011010
#define SIC45X_PMB_ADDR0_7_87				0b0011011
#define SIC45X_PMB_ADDR0_8_87				0b0011100
#define SIC45X_PMB_ADDR0_10_0				0b0011101
#define SIC45X_PMB_ADDR0_11_0				0b0011110

// IC addresses - Address pin is high
#define SIC45X_PMB_ADDR1_0_845				0b1010000
#define SIC45X_PMB_ADDR1_1_3				0b1010001
#define SIC45X_PMB_ADDR1_1_78				0b1010010
#define SIC45X_PMB_ADDR1_2_32				0b1010011
#define SIC45X_PMB_ADDR1_2_87				0b1010100
#define SIC45X_PMB_ADDR1_3_48				0b1010101
#define SIC45X_PMB_ADDR1_4_12				0b1010110
#define SIC45X_PMB_ADDR1_4_75				0b1010111
#define SIC45X_PMB_ADDR1_5_49				0b1011000
#define SIC45X_PMB_ADDR1_6_19				0b1011001
#define SIC45X_PMB_ADDR1_6_98				0b1011010
#define SIC45X_PMB_ADDR1_7_87				0b1011011
#define SIC45X_PMB_ADDR1_8_87				0b1011100
#define SIC45X_PMB_ADDR1_10_0				0b1011101
#define SIC45X_PMB_ADDR1_11_0				0b1011110

// Register addresses
#define SIC45X_OPERATION_ADDR				0x01
#define SIC45X_ON_OFF_CONF_ADDR				0x02
#define SIC45X_CLEAR_FAULTS_ADDR			0x03
#define SIC45X_WRITE_PROTECT_ADDR			0x10
#define SIC45X_STORE_USER_ALL_ADDR			0x15
#define SIC45X_RESTORE_USER_ALL_ADDR		0x16
#define SIC45X_CAPABILITY_ADDR				0x19
#define SIC45X_SMBALERT_MASK_ADDR			0x1B
#define SIC45X_VOUT_MODE_ADDR				0x20
#define SIC45X_VOUT_COMMAND_ADDR			0x21
#define SIC45X_VOUT_TRIM_ADDR				0x22
#define SIC45X_VOUT_MAX_ADDR				0x24
#define SIC45X_VOUT_MARGIN_HIGH_ADDR		0x25
#define SIC45X_VOUT_MARGIN_LOW_ADDR			0x26
#define SIC45X_VOUT_TRANSITION_RATE_ADDR	0x27
#define SIC45X_VOUT_SCALE_LOOP_ADDR			0x29
#define SIC45X_FREQUENCY_SWITCH_ADDR		0x33
#define SIC45X_VIN_ON_ADDR					0x35
#define SIC45X_VIN_OFF_ADDR					0x36
#define SIC45X_INTERLEAVE_ADDR				0x37
#define SIC45X_VOUT_OV_FAULT_LIMIT_ADDR		0x40
#define SIC45X_VOUT_OV_FAULT_RESPONSE_ADDR	0x41
#define SIC45X_VOUT_OV_WARN_LIMIT_ADDR		0x42
#define SIC45X_VOUT_UV_WARN_LIMIT_ADDR		0x43
#define SIC45X_VOUT_UV_FAULT_LIMIT_ADDR		0x44
#define SIC45X_VOUT_UV_FAULT_RESPONSE_ADDR	0x45
#define SIC45X_IOUT_OC_FAULT_LIMIT_ADDR		0x46
#define SIC45X_IOUT_OC_FAULT_RESPONSE_ADDR	0x47
#define SIC45X_IOUT_OC_WARN_LIMIT_ADDR		0x4A
#define SIC45X_OT_FAULT_LIMIT_ADDR			0x4F
#define SIC45X_OT_FAULT_RESPONSE_ADDR		0x50
#define SIC45X_OT_WARN_LIMIT_ADDR			0x51
#define SIC45X_VIN_OV_FAULT_LIMIT_ADDR		0x55
#define SIC45X_VIN_OV_FAULT_RESPONSE_ADDR	0x56
#define SIC45X_VIN_UV_WARN_LIMIT_ADDR		0x58
#define SIC45X_IIN_OC_WARN_LIMIT_ADDR		0x5D
#define SIC45X_POWER_GOOD_ON_ADDR			0x5E
#define SIC45X_POWER_GOOD_OFF_ADDR			0x5F
#define SIC45X_TON_DELAY_ADDR				0x60
#define SIC45X_TON_RISE_ADDR				0x61
#define SIC45X_TON_MAX_FAULT_LIMIT_ADDR		0x62
#define SIC45X_TON_MAX_FAULT_RESPONSE_ADDR	0x63
#define SIC45X_TOFF_DELAY_ADDR				0x64
#define SIC45X_TOFF_FALL_ADDR				0x65
#define SIC45X_TOFF_MAX_WARN_LIMIT_ADDR		0x66
#define SIC45X_STATUS_BYTE_ADDR				0x78
#define SIC45X_STATUS_WORD_ADDR				0x79
#define SIC45X_STATUS_VOUT_ADDR				0x7A
#define SIC45X_STATUS_IOUT_ADDR				0x7B
#define SIC45X_STATUS_INPUT_ADDR			0x7C
#define SIC45X_STATUS_TEMPERATURE_ADDR		0x7D
#define SIC45X_STATUS_CML_ADDR				0x7E
#define SIC45X_STATUS_MFR_SPECIFIC_ADDR		0x80
#define SIC45X_READ_VIN_ADDR				0x88
#define SIC45X_READ_IIN_ADDR				0x89
#define SIC45X_READ_VOUT_ADDR				0x8B
#define SIC45X_READ_IOUT_ADDR				0x8C
#define SIC45X_READ_TEMPERATURE_ADDR		0x8D
#define SIC45X_READ_DUTY_CYCLE_ADDR			0x94
#define SIC45X_READ_POUT_ADDR				0x96
#define SIC45X_READ_PIN_ADDR				0x97
#define SIC45X_PMBUS_REVISION_ADDR			0x98
#define SIC45X_MFR_SERIAL_ADDR				0x9E
#define SIC45X_IC_DEVICE_ID_ADDR			0xAD
#define SIC45X_MFR_BASE_ADDRESS_ADDR		0xD7
#define SIC45X_MFR_BASE_ADDRESS_2_ADDR		0xE2

// Default values
#define SIC45X_OPERATION_DEF_VAL				0x88
#define SIC45X_ON_OFF_CONF_DEF_VAL				0x1F
#define SIC45X_WRITE_PROTECT_DEF_VAL			0x00
#define SIC45X_CAPABILITY_DEF_VAL				0xD0
#define SIC45X_SMBALERT_MASK_DEF_VAL			0x0000
#define SIC45X_VOUT_MODE_DEF_VAL				0x17
#define SIC45X_VOUT_COMMAND_DEF_VAL				0x0133
#define SIC45X_VOUT_MAX_DEF_VAL					0x1C00
#define SIC45X_VOUT_MARGIN_HIGH_DEF_VAL			0x0142
#define SIC45X_VOUT_MARGIN_LOW_DEF_VAL			0x0123
#define SIC45X_VOUT_TRANSITION_RATE_DEF_VAL		0xE002
#define SIC45X_VOUT_SCALE_LOOP_DEF_VAL			0xE808
#define SIC45X_FREQUENCY_SWITCH_DEF_VAL			0x0258
#define SIC45X_VIN_ON_DEF_VAL					0xF814
#define SIC45X_VIN_OFF_DEF_VAL					0x0100
#define SIC45X_INTERLEAVE_DEF_VAL				0x0100
#define SIC45X_VOUT_OV_FAULT_LIMIT_DEF_VAL		0x0161
#define SIC45X_VOUT_OV_FAULT_RESPONSE_DEF_VAL	0xF8
#define SIC45X_VOUT_OV_WARN_LIMIT_DEF_VAL		0x0151
#define SIC45X_VOUT_UV_WARN_LIMIT_DEF_VAL		0x0114
#define SIC45X_VOUT_UV_FAULT_LIMIT_DEF_VAL		0x00F5
#define SIC45X_VOUT_UV_FAULT_RESPONSE_DEF_VAL	0xB9
#define SIC45X_IOUT_OC_FAULT_LIMIT_455_DEF_VAL	0xF870
#define SIC45X_IOUT_OC_FAULT_LIMIT_456_DEF_VAL	0xF846
#define SIC45X_IOUT_OC_FAULT_LIMIT_458_DEF_VAL	0xF82A
#define SIC45X_IOUT_OC_FAULT_RESPONSE_DEF_VAL	0xA1
#define SIC45X_IOUT_OC_WARN_LIMIT_455_DEF_VAL	0xF868
#define SIC45X_IOUT_OC_WARN_LIMIT_456_DEF_VAL	0xF841
#define SIC45X_IOUT_OC_WARN_LIMIT_458_DEF_VAL	0xF827
#define SIC45X_OT_FAULT_LIMIT_DEF_VAL			0x007D
#define SIC45X_OT_FAULT_RESPONSE_DEF_VAL		0xF9
#define SIC45X_OT_WARN_LIMIT_DEF_VAL			0x0069
#define SIC45X_VIN_OV_FAULT_LIMIT_DEF_VAL		0xF81E
#define SIC45X_VIN_OV_FAULT_RESPONSE_DEF_VAL	0xB8
#define SIC45X_VIN_UV_WARN_LIMIT_DEF_VAL		0xF812
#define SIC45X_IIN_OC_WARN_LIMIT_DEF_VAL		0xF80A
#define SIC45X_POWER_GOOD_ON_DEF_VAL			0x0114
#define SIC45X_POWER_GOOD_OFF_DEF_VAL			0x0105
#define SIC45X_TON_DELAY_DEF_VAL				0x0000
#define SIC45X_TON_RISE_DEF_VAL					0x0005
#define SIC45X_TON_MAX_FAULT_LIMIT_DEF_VAL		0x0014
#define SIC45X_TON_MAX_FAULT_RESPONSE_DEF_VAL	0xB9
#define SIC45X_TOFF_DELAY_DEF_VAL				0x0000
#define SIC45X_TOFF_FALL_DEF_VAL				0x0005
#define SIC45X_TOFF_MAX_WARN_LIMIT_DEF_VAL		0x003C
#define SIC45X_STATUS_BYTE_DEF_VAL				0x00
#define SIC45X_STATUS_WORD_DEF_VAL				0x0000
#define SIC45X_STATUS_VOUT_DEF_VAL				0x00
#define SIC45X_STATUS_IOUT_DEF_VAL				0x00
#define SIC45X_STATUS_INPUT_DEF_VAL				0x00
#define SIC45X_STATUS_TEMPERATURE_DEF_VAL		0x00
#define SIC45X_STATUS_CML_DEF_VAL				0x00
#define SIC45X_STATUS_MFR_SPECIFIC_DEF_VAL		0x00
#define SIC45X_PMBUS_REVISION_DEF_VAL			0x33
#define SIC45X_IC_DEVICE_ID_DEF_VAL				0x0000
#define SIC45X_MFR_BASE_ADDRESS_DEF_VAL			0x10
#define SIC45X_MFR_BASE_ADDRESS_2_DEF_VAL		0x50

typedef struct SIC45X_Operation_Config_t {
	uint8_t onOff;
	uint8_t offB;
	uint8_t margin;
	uint8_t marginFault;
} SIC45X_Operation_Config_t;

typedef struct SIC45X_OnOff_Config_t {
	uint8_t powerUp;
	uint8_t command;
	uint8_t enable;
	uint8_t enablePolarity;
	uint8_t offB1;
} SIC45X_OnOff_Config_t;

typedef struct SIC45X_Capability_Data_t {
	uint8_t packetErrorChecking;
	uint8_t busSpeed;
	uint8_t alert;
	uint8_t numericFormat;
	uint8_t avsBusSupported;
} SIC45X_Capability_Data_t;

typedef struct SIC45X_FaultResponse_Data_t {
	uint8_t rsp;
	uint8_t retry;
	uint8_t delay;
	uint8_t cycle;
} SIC45X_FaultResponse_Data_t;

typedef struct SIC45X_Status_Data_t {
	uint8_t busy;
	uint8_t off;
	uint8_t voutOverVoltageFault;
	uint8_t voutOverCurrentFault;
	uint8_t vinUnderVoltageFault;
	uint8_t temperatureFault;
	uint8_t comMemLogicFault;
	uint8_t miscFault;
	uint8_t voutFault;
	uint8_t ioutPoutFault;
	uint8_t inputFault;
	uint8_t manufacturerFault;
	uint8_t powerGood;
} SIC45X_Status_Data_t;

typedef struct SIC45X_StatusVout_Data_t {
	uint8_t overVoltageFault;
	uint8_t overVoltageWarning;
	uint8_t underVoltageWarning;
	uint8_t underVoltageFault;
	uint8_t voltageMaxMinWarning;
	uint8_t timeOnMaxFault;
	uint8_t timeOffMaxWarning;
} SIC45X_StatusVout_Data_t;

typedef struct SIC45X_StatusIout_Data_t {
	uint8_t overCurrentFault;
	uint8_t overCurrentWarning;
} SIC45X_StatusIout_Data_t;

typedef struct SIC45X_StatusInput_Data_t {
	uint8_t overVoltageFault;
	uint8_t underVoltageWarning;
	uint8_t insufficientVoltage;
	uint8_t overCurrentWarning;
} SIC45X_StatusInput_Data_t;

typedef struct SIC45X_StatusTemperature_Data_t {
	uint8_t overTemperatureFault;
	uint8_t overTemperatureWarning;
} SIC45X_StatusTemperature_Data_t;

typedef struct SIC45X_StatusCML_Data_t {
	uint8_t invalidCommand;
	uint8_t invalidData;
	uint8_t packetError;
	uint8_t memoryFault;
	uint8_t communicationFault;
} SIC45X_StatusCML_Data_t;

typedef struct SIC45X_StatusMFR_Data_t {
	uint8_t ilMasterFault;
	uint8_t yfVerifyFault;
	uint8_t yfEraseFault;
	uint8_t yfPgmFault;
} SIC45X_StatusMFR_Data_t;

double SIC45X_parseLinear11(uint16_t rawValue);
double SIC45X_parseLinear11(uint8_t exponent, uint16_t rawValue);

#endif