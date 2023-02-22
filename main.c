#include <stdio.h>
#include <stdint>

#include "helper.h"
#include "backpropagation.h"
#include "perceptron.h"

float to_positive(float n) {
    return n < 0 ? (n * -1) : n;
}

/*
THE GO OF THE I.A. ALGORITHMS IS DOING THAT 
MAIN_SQUARED_ERROR APPROACH 0
*/
float mean_squared_error(
    uint32_t count_number_training, 
    float *out, 
    float *in
) {
    float begin = 1/(2*count_number_training)
    float sum_in = sum(in, SIZE(in));
    float sum_out = sum(out, SIZE(out));
    float signed_sub = sum_in - sum_out;
    float usigned_sub = to_positive(signed_sub);

    return begin * exp(usigned_sub, 2);
}

void static sgd(
    float **data, 
    float* expected, 
    uint32_t epochs, 
    uint32_t mini_batch_size
) {
    size_t n = SIZE(data);

    for(uint32_t i = 0; i < epochs; i++) {
        
    }
}

void update_weights(uint32_t epochs, float *weights) {

    for(uint32_t i = 0; i < epochs; i++) {

    }
}

int main() {
    float entradas[] = {2, 100, 4, 2}; 
    float pesos[] = {100, 2, 4, 30}; 
    size_t tamanho = 4;
    float somatorio = perceptron(entradas, pesos, tamanho);
    float softmax = activation_function_softmax(float result, float *results_all, size_t size);
    float mse = mean_squared_error(1000, softmax, entradas);

    printf("%i\n", mse);
}