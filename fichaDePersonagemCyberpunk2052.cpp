// Código por: Davi Afonso
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

    int main ()
    {
        string secao; // Variável tipo caractere chamada seção, utlizada para nomear a seção. 
        cout <<"Dados do Personagem\n"<< endl; // Função para mostrar o nome da seção para o usuário.

        string Nome; // Váriavel tipo caractere chamada Nome.
        cout << "Digite seu  primeiro nome :"<< endl; // Mostrar para o usuário o que ele deve fazer.
        cin >> Nome; // Função para o usuário digitar o nome do personagem.
                cout << "Seu nome e: "<< Nome << endl;

                 string Apelido; // Váriavel tipo caractere chamada Apelido.
        cout << "Digite seu apelido:"<< endl; // Mostrar para o usuário o que ele deve fazer.
        cin >> Apelido; // Função para o usuário digitar o apelido do personagem.
                cout << "Seu apelido e: "<< Apelido << endl;

                string Origem; // Váriavel tipo caractere chamada Origem.
        cout << "Origem;" "Nascido em Uberaba, teve uma infancia cheia de desafios e ligação com a criminalidade. Nunca foi bem na escola, so se importava em aprender atirar e roubar."<< endl; // Mostrar para o usuário o que ele deve fazer.
        
                string dataDeNascimento; // Váriavel tipo caractere chamada Data de nascimento.
        cout << "Digite sua data de nascimento:"<< endl; // Mostrar para o usuário o que ele deve fazer.
        cin >> dataDeNascimento; // Função para o usuário digitar a data de nascimento do personagem.
                cout << "Sua data de nascimento e: "<< dataDeNascimento << endl;

                 string Sexo; // Váriavel tipo caractere chamada Sexo.
        cout << "Digite seu sexo:"<< endl; // Mostrar para o usuário o que ele deve fazer.
        cin >> Sexo; // Função para o usuário digitar o sexo do personagem.
                cout << "Seu sexo e: "<< Sexo << endl;
                
                 string classeSocial; // Váriavel tipo caractere chamada Classe Social.
        cout << "Digite sua classe social:"<< endl; // Mostrar para o usuário o que ele deve fazer.
        cin >> classeSocial; // Função para o usuário digitar a classe social do personagem.
                cout << "Sua classe social e: "<< classeSocial << endl;

                 string Ocupacao; // Váriavel tipo caractere chamada Ocupacao.
        cout << "Digite sua ocupacao:"<< endl; // Mostrar para o usuário o que ele deve fazer.
        cin >> Ocupacao; // Função para o usuário digitar a ocupacao do personagem.
                cout << "Sua Ocupacao e: "<< Ocupacao << endl;

                 string Historia; // Váriavel tipo caractere chamada Historia.
        cout << "Historia:" "Nascido em Uberaba, sua vida sempre foi ligada a criminalidade, participou de varias gangues mas sempre foi expulso, por ser considerado inutil. Anos mais tarde, com seu sangue fervendo, de tanto ser rejeitado(a), resolveu-se começar a treinar e aperfeiçoa-se em técnicas de combate, assim jurando vingança a todas as gangues existentes nessa cidade."<< endl; 
     
                

       
                string Aparencia; // Váriavel tipo caractere Aparência.
        cout << "Digite sua aparencia:"<< endl; // Mostrar para o usuário o que ele deve fazer.
        cin >> Aparencia; // Função para o usuário digitar a aparencia do personagem.
                cout << "Sua aparencia e: "<< Aparencia << endl;

                 string secaoAtributos; // Variável tipo caractere chamada seção, utlizada para nomear a seção. 
        cout <<"Atributos \n"<< endl; // Função para mostrar o nome da seção para o usuário.
        
       enum Atributos {
    forca,
    destreza,
    constituicao,
    inteligencia,
    sabedoria,
    carisma,
    total_atributos
};


    
    srand(static_cast<unsigned int>(time(0)));  // Gerador de números aleatórios

    
    int atributos[total_atributos]; // Função para armazenar os valores de cada atributo atributos

    
    for (int i = 0; i < total_atributos; ++i) {  // Função para sortear os valores para cada atributo
        atributos[i] = rand() % 100 + 1;
    }

   
    cout << "Valores atributos:\n"; // Exibe o valor de cada atributo
    cout << "Forca = " << atributos[forca] << "\n";
    cout << "Destreza = " << atributos[destreza] << "\n";
    cout << "Constituicao = " << atributos[constituicao] << "\n";
    cout << "Inteligencia = " << atributos[inteligencia] << "\n";
    cout << "Sabedoria = " << atributos[sabedoria] << "\n";
    cout << "Carisma = " << atributos[carisma] << "\n";
    
    string secaoHabilidades;
    cout << "Habilidades: \n" << endl;
    
    enum Habilidades {
    armasdefogo,
    armasbrancas,
    atletismo,
    furtividade,
    infiltracao,
    lutar,
    medicina,
    persuasao,
    tecnologia,
    conducao,
    etiqueta,
    linguas,
    total_habilidades
};
    
    srand(static_cast<unsigned int>(time(0)));  // Inicializa o gerador de números aleatórios

    
    int habilidades [total_habilidades]; // Array para armazenar os valores de cada atributo atributos

    
    for (int i = 0; i < total_habilidades; ++i) {  // Função para sortear os valores para cada atributo
        habilidades[i] = rand() % 100 + 1;
    }

   
    cout << "Valores habilidades:\n"; // Exibe o valor sorteado para cada atributo
    cout << "Armas de Fogo = " << habilidades[armasdefogo] << "\n";
    cout << "Armas Brancas = " << habilidades[armasbrancas] << "\n";
    cout << "Atletismo = " << habilidades[atletismo] << "\n";
    cout << "Furtividade = " << habilidades[furtividade] << "\n";
    cout << "Infiltracao = " << habilidades[infiltracao] << "\n";
    cout << "Lutar = " << habilidades[lutar] << "\n";
    cout << "Medicina = " << habilidades[medicina] << "\n";
    cout << "Persuasao = " << habilidades[persuasao] << "\n";
    cout << "Tecnologia = " << habilidades[tecnologia] << "\n";
    cout << "Conducao = " << habilidades[conducao] << "\n";
    cout << "Etiqueta = " << habilidades[etiqueta] << "\n";
    cout << "Linguas = " << habilidades[linguas] << "\n";
    
     string SecaoImplanteCibernetico; // Variável tipo string chamada seção, utlizada para nomear a seção. 
        cout <<"Implante Cibernetico:\n"<< endl; // Função para mostrar o nome da seção para o usuário.

         string NomeDoImplante1; // Variável tipo string para mostrar o nome do implante cibernetico.
        cout << "Nome: Microchip cerebral"<< endl;  // Mostrar ao usuário o nome do implante cibernetico.

         string LocalizacaoMicrochipCerebral; // Váriável para mostrar a localizacao do implante.
        cout << "Localizacao: Cerebro"<< endl; // Mostrar ao usuário onde está localizado.

        string Funcao; // Váriável para mostrar a funcao do implante.
        cout << "Funcao: Ligar o carro"<< endl; // Mostrar ao usuário sua funcionalidade.

        int Custo; // Variável para mostrar o custo do implante.
        Custo = 130000; // Custo do implante

        cout << "Custo = " << Custo << endl; // Mostrar ao usuário seu custo.

        string NomeDoImplante2; 
        cout << "Nome: Olho Hacker"<< endl;  

         string LocalizacaoOlhosHacker; 
        cout << "Localizacao: Olhos"<< endl; 

        string FuncaoOlhos; 
        cout << "Funcao: Hackear softwares com facilidade."<< endl; 

        int CustoOlhos; 
        Custo = 68000;

        cout << "Custo = " << Custo << endl; 

         string SecaoEquipamentos; // Variável tipo string chamada seção, utlizada para nomear a seção. 
        cout <<"Equipamentos:\n"<< endl; // Função para mostrar o nome da seção para o usuário.

        string Armas;  // Variável tipo string indicando qual equipamento
        cout << " Armas: Revolver 38, Escopeta, Katana, Ak 47, F4."<< endl; // Mostra os equipamentos que o personagem possui.

        string Armaduras; 
        cout << "Armaduras: Colete a prova de balas."<< endl; 

        string Equipamentos;
        cout << "Equipamentos: Granada, kits medicos, C4, municao para as armas." << endl;

         string SecaoDinheiro; // Variável tipo string chamada seção, utlizada para nomear a seção. 
        cout <<"Dinheiro:\n"<< endl; // Função para mostrar o nome da seção para o usuário.

        double Creditos; // Variável tipo double para definir os creditos do personagem.
        Creditos = 1011.22; // Quantidade de creditos do personagem.

        cout << "Voce possui  \n"<< Creditos << endl; // Função para mostrar ao usuário quanto de crédito tem o personagem.

        string SecaoOutrasInformacoes; // Variável tipo string chamada seção, utlizada para nomear a seção. 
        cout <<"Outras Informacoes:\n"<< endl; // Função para mostrar o nome da seção para o usuário.

       enum Reputacao {
        REPUTACAO,
        TOTAL_REPUTACAO
       };

       srand (static_cast<unsigned int> (time(0))); // Inicializa o gerador de números aleatórios.
       int reputacao [TOTAL_REPUTACAO]; // Array para armazenar o valor da reputação.
       
       for (int i =0; i < TOTAL_REPUTACAO; ++i) { // Função para sortear o valor de 0 a 100 da reputação.
        reputacao [i] = rand() % 100 + 1;
       }

       cout << "Reputacao = " << reputacao[REPUTACAO] << "\n";
       
        string Gangue; 
        cout << "Gangue: Seu personagem nao participa de nenhuma gangue." << endl;  // Função para mostrar ao usuário em quais gangues seu personagem partcipa.

        string Conexoes; 
        cout <<"Conexoes: Seu personagem nao tem nenhuma conexao" << endl;// Função para mostrar ao usuário quais conexoes seu personagem tem.
    
      return 0; 
    }