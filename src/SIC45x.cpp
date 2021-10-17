#include "SIC45x.h"

double SIC45X_parseLinear11(uint16_t rawValue) {
	uint16_t exponent = (rawValue >> 11) & 0b1111;
	uint8_t  exponentSign = rawValue >> 15;

	exponent = (exponentSign ? -1 : 1) * exponent;

	return SIC45X_parseLinear11(exponent, rawValue);
}

double SIC45X_parseLinear11(uint8_t exponent, uint16_t rawValue) {
	uint16_t mantissa = rawValue & 1023;
	uint8_t  mantissaSign = (rawValue >> 10) & 1;

	mantissa = (mantissaSign ? -1 : 1) * mantissa;

	return pow(2, exponent) * mantissa;
}