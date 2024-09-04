#include <iostream>

using namespace std;

int main () {

int numMissoes;

cout << "Digite o numero de missoes completas: " << endl;
cin >> numMissoes;

int Xptotal;
Xptotal = 0;

 int pontosRestantes;
pontosRestantes = 1000;

for (int i = 0; i < numMissoes; i++)
{
    int xpMissao;

    cout << "Digite a quantidade de XPs ganhos na missao " << (i + 1) << ": " << endl;
    cin >> xpMissao;

    Xptotal += xpMissao;

    int nivelAtual = Xptotal / pontosRestantes;

    int XPrestante = pontosRestantes - (Xptotal % pontosRestantes);

    cout << "Nivel atual: " << nivelAtual << endl;

    cout << "XPs restante para o proximo nivel: " << XPrestante << endl;

}

    
    

}