/*A jornada de trabalho semanal de um funcionário é de 40 horas. 
O funcionário que trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%. 
Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, 
que deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mês possua 4 semanas exatas). 
Além disso, se o funcionário  trabalhar menos do que 40 horas por semana, ele deverá receber um desconto de 5%.
)*/

// jornada semanal = 40 horas
// horas trabalhadas no mês = 4 semanas * 40 horas = 160 horas
// horas extras = horas trabalhadas - 160 horas
// valor da hora extra = valor da hora regular * 1.5
// desconto = 5% do salário total se horas trabalhadas < 160 horas
// salário total = (horas trabalhadas * valor da hora) + (horas extras * valor da hora extra) - desconto
// salário total = (horas trabalhadas * valor da hora) + (horas extras * valor da hora * 1.5) - desconto
// desconto = 0.05 * (horas trabalhadas * valor da hora) se horas trabalhadas < 160 horas
// desconto = 0 se horas trabalhadas >= 160 horas

#include <iostream> 
#include <windows.h> 

using namespace std;

int main()
{
    SetConsoleOutputCP(65001); 
    cout << "Digite o número de horas trabalhadas no mês: ";
    int horasTrabalhadas; cin >> horasTrabalhadas;
    cout << "Digite o valor da hora: ";
    int valorHora; cin >> valorHora;
    int horasExtras = 0;
    int desconto = 0;
    int salarioTotal = 0;
    int horasNormais = 160; 
    int valorHoraExtra = valorHora * 1.5; 

    if (horasTrabalhadas > horasNormais) {
        horasExtras = horasTrabalhadas - horasNormais;
        salarioTotal = (horasNormais * valorHora) + (horasExtras * valorHoraExtra);
    } else if (horasTrabalhadas < horasNormais) {
        desconto = 0.05 * (horasTrabalhadas * valorHora);
        salarioTotal = (horasTrabalhadas * valorHora) - desconto;
    } else {
        salarioTotal = horasTrabalhadas * valorHora;
    }

    cout << "O salário total do funcionário é: R$ " << salarioTotal << endl;
    cout << "O desconto aplicado foi de: R$ " << desconto << endl;
    cout << "O número de horas extras trabalhadas foi: " << horasExtras << endl;
    cout << "O valor da hora extra é: R$ " << valorHoraExtra << endl;
    cout << "O valor da hora regular é: R$ " << valorHora << endl;
    cout << "O número de horas trabalhadas foi: " << horasTrabalhadas << endl;




    return 0;
}
