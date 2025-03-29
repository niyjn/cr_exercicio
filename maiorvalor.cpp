// Ler dois valores (considere que não serão lidos valores iguais) e escrever o maior deles.

#include <iostream>
#include <windows.h>

using namespace std;
int main(){
    SetConsoleOutputCP(65001);
    float valor1, valor2 ;
    
    cout << "Digite um valor. \n" ;
    cin >> valor1 ;
    cout << "Digite outro valor diferente. \n" ;
    cin >> valor2 ;

    
    (valor1 > valor2) ? cout << valor1 << " é maior. \n" : cout << valor2 << " é maior. \n" ;

    return 0;
}
