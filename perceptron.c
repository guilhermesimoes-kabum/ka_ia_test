#include<stdio.h>
#include <stdint.h>

float exp(float base, uint32_t exponent) {
    float result = 1;
    for(uint32_t index = 0; index < exponent; index ++)
        result *= result;

    return result;
}

float perceptron(float *entradas, float *pesos, size_t tamanho) {
    float somatorio = 0;
    for(int8_t i = 0;  i < tamanho; i ++) {
        float entrada_atual = *(entradas + i);
        float pesos_atual = *(pesos + i);
        somatorio += entrada_atual * pesos_atual;
    }

    return somatorio;
}

uint8_t activation_function_linear(float result) {
    return result >= 1;
}

float activation_function_sigmoid(float result) {
    return 1 / (1+ exp((1/10), result) );
}

float activation_function_tanh(float result) {
    return 2 / activation_function_sigmoid(result) - 1;
}

int main() {
    float entradas[] = {2, 100, 4, 2}; 
    float pesos[] = {100, 2, 4, 30}; 
    size_t tamanho = 4;
    float somatorio = perceptron(entradas, pesos, tamanho);

    printf("%i\n", somatorio);
}