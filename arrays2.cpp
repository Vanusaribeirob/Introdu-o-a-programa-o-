#include <iostream> 

int main() {
    
    int numeros[] = {-10, 15, -3, 7, -8, 20};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); 

    
    for (int i = 0; i < tamanho; ++i) {
        if (numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    std::cout << "Array modificado:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

