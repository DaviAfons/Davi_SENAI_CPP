#include <iostream>
using namespace std;

int main()
{
    int tamanhoMaximoVetor = 100;
    int corDaCamisa, diaDoMes, Mes;
    string resultadoCorDaCamisa, resultadoDiaDoMes, resultadoMes;

    string corCamisa [tamanhoMaximoVetor] = {
        "Cinza", 
        "Branco",
        "Amarelo",
        "Roxo",
        "Prata",
        "MarromVermelho",
        "Marrom",
        "PretoBranco",
        "Preto",
        "AmareloRoxo",
        "CinzaBranco",
        "Dourado" };

        string corVetor [tamanhoMaximoVetor] = {
        "O Gollum ", 
        "O Saruman ",
        "O Sauron ",
        "O Frodo ",
        "O Merry ",
        "O Pippin "
        "O Gandalf ",
        "O Bilbo Bolseiro ",
        "O Gimli ",
        "A Galadriel ",
        "O Legolas ",
        "O Aragorn " };

        string diaVetor [tamanhoMaximoVetor] = { 
        "viu o Vasco perder de ", 
        "viu o Corinthians perder de ",
        "viu o Coritiba ganhar de ",
        "viu o Santos ganhar de ",
        "viu o Bahia perder de ",
        "viu o Sao Paulo perder de "
        "viu o Atletico Mineiro perder de ",
        "viu o Cruzeiro ganhar de ",
        "viu o Real Madrid ganhar de ",
        "viu o Bayern de Munique perder de ",
        "viu o Chelsea perder de ",
        "viu o Barcelona ganhar de " };

        string mesVetor [tamanhoMaximoVetor] = {
        " 2x0 para o America MG ", 
        " 5x2 para o Santos ",
        " 3x2 do Olympique de Marselha ",
        " 9x0 do Atletico Mineiro ",
        " 2x1 para o Fortaleza ",
        " 4x1 para o Vasco ",
        " 1x0 para a Juventus ",
        " 9x2 do Sao Paulo ",
        " 3x1 do River Plate ",
        " 8x0 para o Boca Juniors ",
        " 4x3 para o Dinamo de Kiev ",
        " 1x0 do Real Madrid " };

        cout << "Bem vindo(a) ao criador de frases do Davisao!!" << endl;

        cout << "Escolha o numero de sua camisa da lista abaixo: " << endl;
        for (int i = 0; i< 12; i++)
        
           {
        cout << i + 1 << ". " << corCamisa[i] << endl;
    }

    cout << "Digite o numero de sua camisa: " << endl;
    cin >> corDaCamisa;

    if (corDaCamisa >= 1 && corDaCamisa <= 12)
    {
        resultadoCorDaCamisa = corVetor[corDaCamisa - 1]; 
        }
        else
        {
            cout << "Numero invalido. Escolha entre 1 e 12!" << endl;
            return 1;
        }
         
         cout << "Digite o dia do mes (1 - 12): " << endl;
         cin >> diaDoMes;
         if (diaDoMes >=1 && diaDoMes <=12)
         {
            resultadoDiaDoMes = diaVetor[diaDoMes -1];
         }
         else
         {
            cout <<"Dia invalido. Escolha entre 1 e 12!" << endl;
            return 1;
         }
          
          cout << "Digite o mes (1 - 12): " << endl;
          cin >> Mes;
          if (Mes >=1 && Mes <=12)
          {
           resultadoMes = mesVetor [Mes -1];
          }
          else
          {
            cout << "Mes invalido. Escolha entre 1 e 12!" << endl;
            return 1;
          }

          cout <<"Sua frase e; "<< endl;
          cout << resultadoCorDaCamisa << "com lagrimas nos olhos " << resultadoDiaDoMes << "forma duvidosa de" << resultadoMes << "deixando-o(a) maluco(a)" << endl;
          
          return 0;
                     
}