#include<stdio.h>
#include<stdint.h>
#include"helper.h"
#include"perceptron.h"

float perceptron(float *entradas, float *pesos, size_t tamanho, int32_t bias) {
    float somatorio = 0;
    for(int8_t i = 0;  i < tamanho; i ++) {
        float entrada_atual = *(entradas + i);
        float pesos_atual = *(pesos + i);
        somatorio += entrada_atual * pesos_atual;
    }

    return somatorio + bias;
}
/*
this function ativate is used for the linear decisions
ex: this order is fraud or not? 
*/
uint8_t activation_function_linear(float result) {
    return result >= 1;
}

/*
this activation function is used to non-linear decisions.
she return a number between 0 and 1.
the problem of this function is dont return a negative number.
*/
float activation_function_sigmoid(float result) {
    return 1 / (1+ exp((1/10), result) );
}

/*
this activation function is equal function above, but, 
this function can return number from -1 to 1;
*/
float activation_function_tanh(float result) {
    return 2 / activation_function_sigmoid(result) - 1;
}

/*
this activation function return the result between interval.
So, when classifier between 1 or 0, yes or no ... is not enough.
this function returns jow much the result belongs to each class
*/
float activation_function_softmax(float result, float *results_all, size_t size) {
    return result / sum(results_all, size);
}