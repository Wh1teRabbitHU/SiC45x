#include "SIC45x.h"

double SIC45X_parseLinear11(uint16_t rawValue) {
  uint16_t exp_val = (rawValue >> 11) & 0b1111;
  uint8_t exp_sign =  rawValue >> 15;
  uint16_t mant_val = rawValue & 1023;
  uint8_t mant_sign = (rawValue >> 10) & 1;

  int16_t exponencial = (exp_sign ? -1 : 1) * exp_val;
  int16_t mantissa = (mant_sign ? -1 : 1) * mant_val;

  return pow(2, exponencial) * mantissa;
}