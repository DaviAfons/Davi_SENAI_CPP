#include <iostream> // Biblioteca 
using namespace std; 

int main() {
    int numero; // Solicita o usuário a utilizar um número inteiro
cout << "Digite um número :" << std::endl;
    std::cin >> numero; // Lê o número fornecido pelo usuário
    
    if (numero % 2 == 0) {
        std::cout << " O número é par." << std::endl;
    } else { // Se não for par
        std::cout << "O número é ímpar." << std::endl;
    }  
    
    return 0; // Termino do código
}
