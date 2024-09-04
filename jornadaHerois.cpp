#include <iostream>
using namespace std;

int main() {
    char caminho;
    cout << "Escolha um caminho: ";
    cin >> caminho;

    if (caminho == 'E') {
        cout << " Floresta Encantada." << endl;
    } else {
        cout << "Montanhas do Destino." << endl;
    }

    return 0;
}