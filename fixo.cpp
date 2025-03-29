/*Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$1.500,00 mais 5% sobre o que ultrapassar este valor, 
calcular e escrever o seu salário total.
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    
    cout << "Digite o salário fixo do vendedor: ";
    float salarioFixo; cin >> salarioFixo;
    cout << "Digite o valor das vendas efetuadas: ";
    float vendasEfetuadas; cin >> vendasEfetuadas;

    if (vendasEfetuadas < 1500) {
        float comissao = vendasEfetuadas * 0.03;
        float salarioTotal = salarioFixo + comissao;
        cout << "O salário total do vendedor é: R$ " << salarioTotal << endl;
    } else {
        float comissao1 = 1500 * 0.03;
        float comissao2 = (vendasEfetuadas - 1500) * 0.05;
        float salarioTotal = salarioFixo + comissao1 + comissao2;
        cout << "O salário total do vendedor é: R$ " << salarioTotal << endl;
    }

    return 0;
}
