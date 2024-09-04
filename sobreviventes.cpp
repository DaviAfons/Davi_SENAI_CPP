#include <iostream>
using namespace std;

int main() {
    char caminho;
    cout << "Escolha um caminho: ";
    cin >> caminho;

    if (caminho == 'P') {
        cout << " Abrir a porta misteriosa. Você morre!" << endl;
    } else {
        cout << "Adentrar um túnel escuro. Você encontra um abrigo seguro, cheio de suprimentos e confortável." << endl;
    }

    return 0;
}