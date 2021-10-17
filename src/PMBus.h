#ifndef PMBus_Header
#define PMBus_Header

#include "Arduino.h"
#include "Wire.h"

void PMBus_init();

uint8_t PMBus_read8BitRegister(uint8_t deviceAddress, uint8_t registerAddress);
uint16_t PMBus_read16BitRegister(uint8_t deviceAddress, uint8_t registerAddress);
void PMBus_write8BitRegister(uint8_t deviceAddress, uint8_t registerAddress, uint8_t data);
void PMBus_write16BitRegister(uint8_t deviceAddress, uint8_t registerAddress, uint16_t data);

#endif