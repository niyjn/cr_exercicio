//Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo).

#include <iostream>
using namespace std ;



int main()
{
    int valor ;
    cout << "Insira um valor: \n" ;
    cin >> valor ;
    if(valor>=0) {
        cout << "O valor e positivo." ;
    } else { 
        cout << "O valor e negativo." ;
    }
    
    return 0;

}
