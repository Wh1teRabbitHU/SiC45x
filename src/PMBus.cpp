#include "PMBus.h"

void PMBus_init() {
		Wire.begin();
}

uint8_t PMBus_read8BitRegister(uint8_t deviceAddress, uint8_t registerAddress) {
	Wire.beginTransmission(deviceAddress);
	Wire.write(registerAddress);
	Wire.endTransmission(false);
	Wire.requestFrom(deviceAddress, (uint8_t)1, (uint8_t)false);

	uint8_t rawValue = 0;

	if (Wire.available()) {
		rawValue = Wire.read();
	}

	Wire.endTransmission(true);

	return rawValue;
}

uint16_t PMBus_read16BitRegister(uint8_t deviceAddress, uint8_t registerAddress) {
	Wire.beginTransmission(deviceAddress);
	Wire.write(registerAddress);
	Wire.endTransmission(false);
	Wire.requestFrom(deviceAddress, (uint8_t)2, (uint8_t)false);

	uint16_t rawValue = 0;

	if (Wire.available()) {
		uint8_t firstByte = Wire.read();
		uint8_t secondByte = Wire.read();

		rawValue = (secondByte << 8) + firstByte;
	}

	Wire.endTransmission(true);

	return rawValue;
}

void PMBus_write8BitRegister(uint8_t deviceAddress, uint8_t registerAddress, uint8_t data) {
	Wire.beginTransmission(deviceAddress);
	Wire.write(registerAddress);
	Wire.write(data);
	Wire.endTransmission(true);
}

void PMBus_write16BitRegister(uint8_t deviceAddress, uint8_t registerAddress, uint16_t data) {
	uint8_t hByte = data >> 8;
	uint8_t lByte = data & 255;

	Wire.beginTransmission(deviceAddress);
	Wire.write(registerAddress);
	Wire.write(lByte);
	Wire.write(hByte);
	Wire.endTransmission(true);
}