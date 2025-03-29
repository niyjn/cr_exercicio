// Ler as notas da 1a. e 2a. avaliações de um aluno.
// Calcular a média aritmética simples e escrever uma mensagem que diga se o aluno foi ou não aprovado
//(considerar que nota igual ou maior que 6 o aluno é aprovado). Escrever também a média calculada.

#include <iostream>
using namespace std;
int main()
{
    float nota1, nota2;
    cout << "Digite o valor da primeira prova. \n";
    cin >> nota1;
    cout << "Digite o valor da segunda prova. \n";
    cin >> nota2;

    float media = (nota1 + nota2) / 2;

    if (media >= 6)
    {
        cout << "Aprovado. \n";
    }
    else
    {
        cout << "Reprovado. \n";
    }
    cout << "O valor da média foi: " << media << endl;
    return 0;
}
