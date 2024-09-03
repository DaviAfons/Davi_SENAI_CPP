#include <iostream>

int main()
{
    char feitiços;
    std::cout<<"Digite as letras que correspondem aos feitiços: (F, G) ";
    std::cin >> feitiços;
    
    switch (feitiços) {
    
    case 'F':
    std::cout << "Feitiço de fogo" << std::endl;
    break;
    
    case 'G':
    std::cout << "Feitiço de gelo" << std::endl;
    break;
    
  
    
     default:
     std::cout << "Feitiço inválido" << std::endl;
     break;
     
    }
    return 0;
}

