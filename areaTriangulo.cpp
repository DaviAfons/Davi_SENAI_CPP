#include <iostream>

using namespace std;

int main ()
{
    float base, altura, area;

    cout << "Digite o valor da base do triangulo: ";
    cin >> base;

    cout << "Digite o valor da altura do triangulo: ";
    cin >> altura;

    area = (base * altura) /2;

    cout << "A area do triangulo e: " << area << endl;

    return 0;
}