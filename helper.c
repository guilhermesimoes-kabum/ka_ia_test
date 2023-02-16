#include <stdio.h>
#include <stdint.h>
#include "helper.h"

float sum(float *in, size_t size) {
    float result = 0;
    for(uin8_t i = 0; i < size; i++) {
        result += *(in + i);
    }

    return result;
}

float exp(float base, uint32_t exponent) {
    float result = 1;
    for(uint32_t index = 0; index < exponent; index ++)
        result *= result;

    return result;
}
