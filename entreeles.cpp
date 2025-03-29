/*Desenvolva um algoritmo que, dado um número, verifique se ele está entre 30 e 90 ou é maior que 120 
ou não se encaixa em nenhuma dessas condições.
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int numero; 
    cout << "Digite um número maior que está entre 30 e 90, ou maior que 120. \n" ;
    cin >> numero ;
    if (numero >= 30 && numero <= 90) {
        cout << "O número está entre 30 e 90. \n" ;
    } else if (numero > 120) {
        cout << "O número é maior que 120. \n" ;
    } else {
        cout << "O número não se encaixa em nenhuma das condições. \n" ;
    }
    return 0;
}
