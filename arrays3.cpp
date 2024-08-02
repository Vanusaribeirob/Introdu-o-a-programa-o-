#include <iostream>

int main() {
    
    int numeros[] = {10, 21, 32, 43, 54, 65};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); 

    int soma = 0;

    for (int i = 0; i < tamanho; i += 2) {
        soma += numeros[i];
    }

    std::cout << "A soma dos elementos em posicoes pares e: " << soma << std::endl;

    return 0;
}

