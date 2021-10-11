#include "SIC45x.h"

uint8_t SIC45X_readRegister(uint8_t pmbAddr, uint8_t registerAddr) {
	return I2C_8Bit_readFromModule(pmbAddr, registerAddr);
}

void SIC45X_writeRegister(uint8_t pmbAddr, uint8_t registerAddr, uint8_t data) {
	I2C_8Bit_writeToModule(pmbAddr, registerAddr, data);
}

uint8_t SIC45X_readFlag(uint8_t pmbAddr, uint8_t registerAddr, uint8_t flagPos) {
	return I2C_8Bit_readFlag(pmbAddr, registerAddr, flagPos);
}

void SIC45X_writeFlag(uint8_t pmbAddr, uint8_t registerAddr, uint8_t flagPos, uint8_t data) {
	I2C_8Bit_writeFlag(pmbAddr, registerAddr, flagPos, data);
}