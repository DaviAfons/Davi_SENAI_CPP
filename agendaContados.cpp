#include <iostream> // Biblioteca para entrada e saída de dados em C++
using namespace std;

// Função para adicionar Usuario 
void adicionarUsuario(std::string usuarios[], string telefones[], int tamanho,  string usuario, string telefone)
{
    usuarios[tamanho] = usuario;       // Adiciona o Usuario ao final do array de Usuario
    telefones[tamanho] = telefone;       // Adiciona o Usuario ao final do array de Usuario
    
}

// Função para exibir o Usuario atual
void exibirUsuario(std::string usuarios[], string telefones[], int tamanho,  string usuario, string telefone)
{
    std::cout << "Usuario atual:\n";  // Exibe cabeçalho
    int i =0;
    while (i<tamanho && usuarios[i] != usuario)
    {
        i++;
    }
    if (i<tamanho) {
        cout <<"Contato" <<usuario << "Telefone" << telefone << endl;
    }

}


int main()
{
    const int maxUsuarios = 100;       // Define o tamanho máximo do array de Usuario
    std::string usuarios[maxUsuarios]; // Array para armazenar os Usuario
    string telefones [maxUsuarios];
    int tamanho = 0;                   // Variável para controlar o tamanho atual dos arrays

    // Adiciona Usuario inicialmente 
    adicionarUsuario(usuarios,telefones, tamanho, " Coringa", "999-8888");
    tamanho++;
    adicionarUsuario(usuarios,telefones, tamanho, " Pinguim", "777-6666");
    tamanho++;
    adicionarUsuario(usuarios,telefones, tamanho, " Duas Caras", "555-4444");
    tamanho++;

    // Exibe o contato
    exibirUsuario(usuarios,telefones, tamanho, " Coringa", "999-8888");
    exibirUsuario(usuarios,telefones,  tamanho, " Pinguim", "777-6666");
    exibirUsuario(usuarios,telefones,  tamanho, " Duas Caras", "555-4444");

   

    return 0;
}
