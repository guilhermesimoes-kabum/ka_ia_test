#include <stdio.h>
#include <stdint>

#include "helper.h"
#include "backpropagation.h"

float to_positive(float n) {
    return n < 0 ? (n * -1) : n;
}

/*
THE GO OF THE I.A. ALGORITHMS IS DOING THAT 
MAIN_SQUARED_ERROR APPROACH 0
*/
float mean_squared_error(uint32_t count_number_training, float *out, float *in) {
    float begin = 1/(2*count_number_training)
    float sum_in = sum(in, SIZE(in));
    float sum_out = sum(out, SIZE(out));
    float signed_sub = sum_in - sum_out;
    float usigned_sub = to_positive(signed_sub);

    return begin * exp(usigned_sub, 2);
}

int main() {

}