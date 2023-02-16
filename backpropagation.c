#include<stdio.h>
#include <stdint.h>

#include "helper.h"

float derivate(float out) {
    return out * (1 - out);
}

float backpropagation(
    float* weights, 
    float* bias, 
    float cost,
    float output
) {

}