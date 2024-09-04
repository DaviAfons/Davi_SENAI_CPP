#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    int numeroSecreto = rand () %100+1;
    int tentativas = 10;
    int palpite;
    
    do{
        cout << "Tentativas restantes:"<<tentativas<<"\n" "Digite um número: " << endl;
        cin >> palpite;
        if (palpite<numeroSecreto) {
            std::cout << "O número é mais alto!" << endl;
        } else if 
            (palpite>numeroSecreto){
                std::cout << "O número é menor!" << endl;
            }
            tentativas--;
            
        } while (palpite!= numeroSecreto&&tentativas>0);
        if (palpite == numeroSecreto ){
            cout << "Parabéns! Você acertou o número faltando" <<tentativas<< endl;
        } else {
            cout<< "Você não conseguiu adivinhar o número. O número certo era" <<numeroSecreto<< endl;
        }
        return 0;
        }
   
