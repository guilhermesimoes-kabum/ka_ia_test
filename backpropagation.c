#include<stdio.h>
#include <stdint.h>

#include "helper.h"

float derivate(float out) {
    return out * (1 - out);
}

float *backpropagation(
    float* weights, 
    float* bias, 
    float cost,
    float output
) {
    float new_weights[SIZE(weights)];

    for(uint32_t i = 0; i < SIZE(weights); i++) {
        *(new_weights + i) = *(weights + i) - derivate(output) * ;
    }

    return new_weights;
}