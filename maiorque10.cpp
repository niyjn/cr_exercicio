//Faça um algoritmo que leia um valor e escreva a mensagem 
//“É maior que 10!” se o valor lido for maior que 10, 
//caso contrário escrever “Não é maior que 10!”.

#include <iostream>
using namespace std ;
int main()
{
    float x;
    const int y=10 ;
    
    cout << "DIGITE O VALOR DO NUMERO: \n" ;
    cin >> x ;
    
    if (x<y) {
        cout << "SEU VALOR EH MENOR QUE DEZ. \n" ;
    } 
    else if(x>y) { cout << "SEU VALOR EH MAIOR QUE DEZ." ;} 
    else if(x=y) {cout << "SEU VALOR EH DEZ. \n";} {}
    cin.get() ;

    return 0;
}
