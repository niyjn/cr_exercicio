// Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das categorias:
// Idade
// Categoria

// 5 até 7 anos
// Infantil A

// 8 até 10 anos
// Infantil B

// 11 até 13 anos
// Juvenil A

// 14 até 17 anos
// Juvenil B

// Maiores de 18 anos
// Sênior

#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

struct nadador
{
    int idade;
    string nome;
};


int main()
{
    SetConsoleOutputCP(65001);

    vector<nadador> nadadores;
    char continuar;

    string classificar[5] = {
                            "Infantil A.",
                            "Infantil B.",
                            "Juvenil A.",
                            "Juvenil B.",
                            "Sênior.", 
                        } ;
    

    nadador *novoNadador = new nadador;
    cout << "Digite o nome do nadador. \n";
    cin >> novoNadador->nome; 
    getline(cin, novoNadador->nome);

    cout << "Digite a idade do nadador. \n";
    cin >> novoNadador->idade;

    if (novoNadador->idade <= 4)
    {
        cout << "Idade mínima de 5 anos não atingida. " << endl;
    }
    else if (novoNadador->idade >= 5 && novoNadador->idade <= 7)
    {
        cout << "Categoria: " << classificar[0] << endl;
    }
    else if (novoNadador->idade >= 8 && novoNadador->idade <= 10)
    {
        cout << "Categoria: " << classificar[1] << endl;
    }
    else if (novoNadador->idade >= 11 && novoNadador->idade <= 13)
    {
        cout << "Categoria: " << classificar[2] << endl;
    }
    else if (novoNadador->idade >= 14 && novoNadador->idade <= 17)
    {
        cout << "Categoria: " << classificar[3] << endl;
    }
    else if
        (novoNadador->idade >= 18) { cout << "Categoria: " << classificar[4] << endl; }

    delete novoNadador ;
    
     return 0;
}
