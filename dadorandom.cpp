#include <iostream>
#include <windows.h>

using namespace std;

int num1, num2, num3, num4;



void par() {
    int menor = -1;

    if (num1 % 2 == 0) menor = num1;
    if (num2 % 2 == 0 && (menor == -1 || num2 < menor)) menor = num2;
    if (num3 % 2 == 0 && (menor == -1 || num3 < menor)) menor = num3;
    if (num4 % 2 == 0 && (menor == -1 || num4 < menor)) menor = num4;

    if (menor != -1) {
        cout << "O menor número par é: " << menor << endl;
    } else {
        cout << "Nenhum número par foi encontrado." << endl;
    }

}
int main()
{

    SetConsoleOutputCP(65001);
    
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
    cin >> num3;
    cout << "Digite o quarto número: ";
    cin >> num4;

    par();

    



    return 0;
}