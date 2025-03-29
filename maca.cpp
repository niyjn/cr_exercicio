//As maçãs custam R$1,30 cada se forem compradas menos de uma dúzia, 
//e R$1,00 se forem compradas pelo menos 12. 
//Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra.

#include <iostream>
#include <windows.h>
using namespace std ;
int main()
{
    SetConsoleOutputCP(65001);
    int entrada ;
    cout << "Digite a quantidade de maçãs desejadas. \n" ;
    cin >> entrada ;
    
    double total1 ;
    double total2 ;
    
    const double duzia = 1.00 ;
    const double menorduzia = 1.30 ;
      if (entrada>12) 
         { cout << "O valor total de maças é de R$: " << (total1 = duzia*entrada) << " para uma quantia de " << entrada ;
        } else {cout << "O valor total de maças é de R$: " << (total2 = menorduzia*entrada) << " para uma quantia de " << entrada ;}
         
         

         










    return 0;
}
