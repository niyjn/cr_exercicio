// Desenvolva um algoritmo que calcule o valor a ser pago por um produto,
// considerando o preço de etiqueta e a condição de pagamento. Utilize os códigos do quadro abaixo para ler a condição de pagamento e efetuar o cálculo adequado.

// Código  Condição de pagamento
// 1       À vista em dinheiro com 10% de desconto.
// 2       À vista no cartão com 5% de desconto.
// 3       Em 2 vezes, preço normal da etiqueta.
// 4       Em 3 vezes, preço normal da etiqueta com juros de 10%.

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int valor, codigo;
    double valortotal;
    string etiqueta[4]{
        "À vista em dinheiro com 10% de desconto.",
        "À vista no cartão com 5% de desconto.",
        " Em 2 vezes, preço normal da etiqueta.",
        " Em 3 vezes, preço normal da etiqueta com juros de 10%."};

    cout << "Bem vindo a paloma celulares. Insira o valor do produto: \n";
    cin >> valor;
    cout << "Muito bem, escolha a forma de pagamento para o valor deferido: \n\n";
    cout << "Para à vista em dinheiro com 10% de desconto, digite (1).\n";
    cout << "Para à vista no cartão com 5% de desconto, digite (2).\n";
    cout << "Para parcelamento em 2x sem juros, digite (3).\n";
    cout << "Para parcelamento em 3x com juros de 10%, digite (4).\n\n";

    do
    {
        cout << "Digite um número entre 1 e 4: ";
        cin >> codigo;

        if (codigo < 0 || codigo > 4)
        {
            cout << "O número deve estar entre 0 e 4." << endl;
        }

    } while (codigo < 0 || codigo > 4);

    if (codigo == 1)
    {
        valortotal = valor - (valor * 0.1);
    }
    else if (codigo == 2)
    {
        valortotal = valor - (valor * 0.05);
    }
    else if (codigo == 3)
    {
        valortotal = valor;
    }
    else if (codigo == 4)
    {
        valortotal = (valor + (valor * 0.1));
    }

    if (codigo == 1 || codigo == 2)
    {
        cout << "O valor a ser pago a vista é de: " << valortotal << endl;
    }
    else if (codigo == 3)
    {
        cout << "O valor a ser pago é de: " << valortotal << " em 2x sem juros.";
    }
    else if (codigo == 4)
    {
        cout << "O valor a ser pago é de: " << valortotal << " em 3x com juros de 10% sob o valor total.";
    }

    return 0;
}
