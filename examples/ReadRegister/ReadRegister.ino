#include <SIC45x.h>

// For the correct macro, please check the datasheet!
uint8_t pmbAddress = SIC45X_PMB_ADDR1_10_0;

void setup() {
	Serial.begin(9600);

	PMBus_init();
}

void loop() {
	uint16_t deviceID = PMBus_read16BitRegister(pmbAddress, SIC45X_IC_DEVICE_ID_ADDR);

	Serial.print("Device ID: ");
	Serial.println(deviceID);

	delay(10000);
}