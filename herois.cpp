#include <iostream>

int main()
{
    char heroi;
    std::cout<<"Digite os números que correspondem aos herois: (B, S, M) ";
    std::cin >> heroi;
    
    switch (heroi) {
    
    case 'B':
    std::cout << "BATMAN. Conhecido com 'Cavaleiro das Trevas' ele obtem uma alta inteligência, mestre em várias artes marciais e um grande gênio da tecnologia." << std::endl;
    break;
    
    case 'S':
    std::cout << "SUPERMAN. Conhecido com 'Homem de aço' ele obtem uma alta inteligência, capacidade de voar, além de ter grandes super poderes." << std::endl;
    break;
    
    case 'M': 
    std::cout << "Mulher Maravilha, possui uma força fora do comum, além de ter uma beleza indescritível, possui um laço poderoso e um alto intelecto." << std::endl;
    break;
    
    
     default:
     std::cout << "Herói inválido" << std::endl;
     break;
     
    }
    return 0;
}
