#ifndef PMB_Header
#define PMB_Header

#include "Arduino.h"
#include "Wire.h"

uint8_t PMB_read8BitRegister(uint8_t deviceAddress, uint8_t registerAddress);
uint16_t PMB_read16BitRegister(uint8_t deviceAddress, uint8_t registerAddress);

#endif