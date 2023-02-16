#include <stdio.h>
#include <stdint>

#include "helper.h"

uint32_t to_positive(int32_t n) {
    return n < 0 ? (n * -1) : n;
}

uint32_t mean_squared_error(uint32_t count_number_training, float *out, float *in) {
    float begin = 1/(2*count_number_training)
    float sum_in = sum(in, SIZE(in));
    float sum_out = sum(out, SIZE(out));
    float signed_sub = sum_in - sum_out;
    float usigned_sub = to_positive(signed_sub);

    return begin * exp(usigned_sub, 2);
}

int main() {

}