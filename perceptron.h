#ifndef __PERCEPTRON_H__
#define __PERCEPTRON_H__

float perceptron(float *entradas, float *pesos, size_t tamanho, int32_t bias);
uint8_t activation_function_linear(float result);
float activation_function_sigmoid(float result);
float activation_function_tanh(float result);
float activation_function_softmax(float result, float *results_all, size_t size);

#endif