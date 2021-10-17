#include "PMB.h"

uint8_t PMB_read8BitRegister(uint8_t deviceAddress, uint8_t registerAddress) {
  Wire.beginTransmission(deviceAddress);
  Wire.write(registerAddress);
  Wire.endTransmission(false);
  Wire.requestFrom(deviceAddress, (uint8_t)1, false);

  uint8_t rawValue = 0;

  if (Wire.available()) {
    rawValue = Wire.read();
  }

  Wire.endTransmission(true);

  return rawValue;
}

uint16_t PMB_read16BitRegister(uint8_t deviceAddress, uint8_t registerAddress) {
  Wire.beginTransmission(deviceAddress);
  Wire.write(registerAddress);
  Wire.endTransmission(false);
  Wire.requestFrom(deviceAddress, (uint8_t)2, false);

  uint16_t rawValue = 0;

  if (Wire.available()) {
    uint8_t firstByte = Wire.read();
    uint8_t secondByte = Wire.read();

    rawValue = (secondByte << 8) + firstByte;
  }

  Wire.endTransmission(true);

  return rawValue;
}