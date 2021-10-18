#include "SIC45x.h"

double parseLinear11(uint16_t rawValue) {
	int8_t  exponent = (rawValue >> 11) & 0b1111;
	uint8_t exponentSign = rawValue >> 15;

	if (exponentSign) {
		exponent = -1 * (exponent ^ 0b1111) - 1;
	}

	return parseLinear11(exponent, rawValue);
}

double parseLinear11(int8_t exponent, uint16_t rawValue) {
	int16_t mantissa = rawValue & 1023;
	uint8_t mantissaSign = (rawValue >> 10) & 1;

	if (mantissaSign) {
		mantissa = -1 * (mantissa ^ 1023) - 1;
	}

	return pow(2, exponent) * (double) mantissa;
}