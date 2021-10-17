#include "SIC45x.h"

double SIC45X_parseLinear11(uint16_t rawValue) {
	uint16_t exponent = (rawValue >> 11) & 0b1111;
	uint8_t  exponentSign = rawValue >> 15;

	if (exponentSign) {
		exponent = -1 * (exponent ^ 0b1111) - 1;
	}

	return SIC45X_parseLinear11(exponent, rawValue);
}

double SIC45X_parseLinear11(uint8_t exponent, uint16_t rawValue) {
	uint16_t mantissa = rawValue & 1023;
	uint8_t  mantissaSign = (rawValue >> 10) & 1;

	if (mantissaSign) {
		mantissa = -1 * (mantissa ^ 1023) - 1;
	}

	return pow(2, exponent) * mantissa;
}