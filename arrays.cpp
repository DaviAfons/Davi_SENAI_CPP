#include <iostream>
using namespace std;

int main() {
    int numeros [5]; // Declaração de um array de 5 elementos.

    for (int i = 0; i < 5; i++) {
        cin >> numeros[i]; // Lê os valores do array.
    }
    cout <<"Elementos do array: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << numeros [i] <<" "; // Exibe os valores do array.
    }

    return 0;
}

