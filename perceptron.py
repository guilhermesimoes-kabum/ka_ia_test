def perceptron(entradas, pesos, tamanho):
    somatorio = 0

    for i in range(0, tamanho):
        somatorio += entradas[i] * pesos[i]

    return somatorio

entradas = [ 2, 100, 4, 2]
pesos = [100, 2, 4, 30]
tamanho = 4

somatorio = perceptron(entradas, pesos, tamanho)

print(somatorio)