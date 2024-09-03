#include <iostream>
#include <stack>

int main()
{
    std::stack<std::string> emprestimoLivros; // Fila para armazenar as tarefas

    // Adiciona algumas tarefas à lista inicialmente
    emprestimoLivros.push("O Senhor dos Aneis");
    emprestimoLivros.push("O Hobbit");
    emprestimoLivros.push("Silmarilon");
    emprestimoLivros.push("It");
    emprestimoLivros.push("Harry Potter e a Cabana Secreta");
    emprestimoLivros.push("Outsider");
    emprestimoLivros.push("1984");
    emprestimoLivros.push("A Revolucao dos Bichos");

    // Exibe a lista de afazeres inicial
    std::cout << "Lista de emprestimos:\n";
    std::stack<std::string> listaCopia = emprestimoLivros; // Copia a fila para exibição sem alterar a original
    while (!listaCopia.empty())
    {
        std::cout << listaCopia.top() << std::endl; // Exibe cada tarefa da lista
        listaCopia.pop();                             // Remove a tarefa exibida da fila
    }

    // Marca algumas tarefas como concluídas
    if (!emprestimoLivros.empty())
    {
        std::cout << "\nLivro entregue: " << emprestimoLivros.top() << std::endl;
        emprestimoLivros.pop();
    }
    else
    {
        std::cout << "Lista de emprestimos vazia!\n";
    }

    if (!emprestimoLivros.empty())
    {
        std::cout << "Livro entregue: " << emprestimoLivros.top() << std::endl;
        emprestimoLivros.pop();
    }
    else
    {
        std::cout << "Lista de emprestimo vazia!\n";
    }

    
    emprestimoLivros.push("O Senhor dos Aneis");
    emprestimoLivros.push("O Hobbit");
    emprestimoLivros.push("Silmarilon");
    emprestimoLivros.push("O Iluminado");
    emprestimoLivros.push("It");
    emprestimoLivros.push("Harry Potter e a Cabana Secreta");
    emprestimoLivros.push("Outsider");
    emprestimoLivros.push("1984");
    emprestimoLivros.push("A Revolucao dos Bichos");



    // Exibe a lista de afazeres após as conclusões
    std::cout << "\nLista de livros emprestados apos concluir algumas entregas:\n";
    listaCopia = emprestimoLivros; // Copia a fila novamente para exibição
    while (!listaCopia.empty())
    {
        std::cout << listaCopia.top() << std::endl;
        listaCopia.pop();
    }

    return 0;
}