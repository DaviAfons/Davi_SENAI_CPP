#include <iostream> // Biblioteca de entrada e saída em C++
#include <cstdlib> 

using namespace std;

int main() {
   
    // Gera um número aleatório entre 1 e 50
    int numeroSecreto = rand() % 100 + 1;
    
    // Define o número de tentativas 
    int tentativas = 8;
    int palpite;
    // Loop para adivinhar o número
    do {
        
        // Pede um palpite do usuário
        cout << "Tentativa" << tentativas << ":Digite um número:";
        
        cin >> palpite;
        
        //verifica se o palpite é correto
        if (palpite < numeroSecreto){
            cout<< "Muito baixo!" << endl;
        } else if (palpite > numeroSecreto) {
            cout << "Muito alto!" << endl;
        }
        //Decrementa o número de tentativas
        tentativas--;
        
        
    } while (palpite != numeroSecreto && tentativas > 0);
    
    //Mostra a mensagem final
   if (palpite == numeroSecreto) {
        cout << "parabéns! você acertou o número em " << tentativas << " tentativas!" << endl;
    } else {
        cout << "Você não conseguiu adivinhar o número. O número secreto era" << numeroSecreto << endl;
    }
       return 0; 
}

