#include <iostream>

int main() {

    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); 

    for (int i = 0; i < tamanho; ++i) {
        std::cout << numeros[i] << std::endl;
    }

    return 0;
}

