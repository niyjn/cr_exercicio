/*Um comerciante usa margem de lucro de 45% 
se o valor de compra do produto for menor que R$20,00 e 30% nos demais casos. 
Dado o valor do produto, calcule o preço de venda.
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    double valorCompra, valorVenda;
    cout << "Digite o valor de compra do produto. \n";
    cin >> valorCompra;
    if (valorCompra < 20)
    {
        valorVenda = valorCompra + (valorCompra * 0.45);
    }
    else
    {
        valorVenda = valorCompra + (valorCompra * 0.30);
    }
    
    cout << "O valor total de venda é de R$: " << valorVenda << endl;
    cout << "O valor de compra foi de R$: " << valorCompra << endl;
    cout << "O valor de lucro foi de R$: " << valorVenda - valorCompra << endl;

    return 0;
}
