// Faça um algoritmo que leia o ano de nascimento de uma pessoa,
// Calcule e mostre sua idade, e também informe se ela já pode votar (16 anos ou mais)
// E tirar a Carteira de Habilitação (18 anos ou mais).

#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    int bAno, idade, bMes;
    cout << "Digite o ano do seu nascimento. \n";
    cin >> bAno;
    cout << "Digite o mês do seu nascimento. \n";
    cin >> bMes;

    time_t t = time(0);
    tm *now = localtime(&t);
    int mes = now->tm_mon + 1;
    int ano = now->tm_year + 1900;

    idade = (bMes <= mes) ? (ano - bAno) : (ano - bAno - 1);

    if (idade >= 18)
    {
        cout << "A pessoa está apta a votar e a tirar carteira de habilitação." << endl;
    }
    else if ( idade >= 16 )
    {
        cout << "A pessoa está apta a votar porém não pode tirar carteira de habilitação." << endl;
    }
    else
    {
        cout << "A pessoa não está apta a votar e nem tirar carteira de habilitação." << endl ;
    }


    cout << "Idade: " << idade << endl ;

    return 0;
}
