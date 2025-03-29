/* Três jogadores participam de um jogo em duas etapas: na primeira, todos disputam uma rodada de "Dois ou Um" e os vencedores avançam para a segunda etapa; 
nessa segunda rodada, os ganhadores jogam "Par ou Ímpar" entre si. Ao final, identifique qual dos três jogadores foi o vencedor final do jogo.
*/

#include <iostream>
#include <windows.h>

using namespace std;

int a, b, c, d, e, f ;

int main()
{
    SetConsoleOutputCP(65001);

    string jogador1, jogador2, jogador3;
    cout << "Digite o nome do jogador 1: ";
    cin >> jogador1;
    cout << "Digite o nome do jogador 2: ";
    cin >> jogador2;
    cout << "Digite o nome do jogador 3: ";
    cin >> jogador3;

    bool empate(true) ;
    while(empate) {

    string escolha1, escolha2, escolha3;
    cout << jogador1 << ", escolha 'Um' ou 'Dois': ";
    cin >> escolha1;
    cout << jogador2 << ", escolha 'Um' ou 'Dois': ";
    cin >> escolha2;
    cout << jogador3 << ", escolha 'Um' ou 'Dois': ";
    cin >> escolha3;

    cout << "Resultados da primeira etapa:" << endl;
    cout << jogador1 << " escolheu: " << escolha1 << endl;
    cout << jogador2 << " escolheu: " << escolha2 << endl;
    cout << jogador3 << " escolheu: " << escolha3 << endl;

    cout << "Jogadores que avançaram para a segunda etapa:" << endl;

    
    
    if (escolha1 == "Um" && escolha2 == "Dois" && escolha3 == "Dois") { // 1 2 2
        cout << jogador2 << " e " << jogador3 << " avançaram." << endl; a = 1; empate = false ;
    } else if (escolha1 == "Dois" && escolha2 == "Um" && escolha3 == "Um") { // 2 1 1
        cout << jogador2 << " e " << jogador3 << " avançaram." << endl; b = 1; empate = false ;
    } else if (escolha1 == "Dois" && escolha2 == "Dois" && escolha3 == "Um") { // 2 2 1
        cout << jogador1 << " e " << jogador2 << " avançaram." << endl; c = 1; empate = false ;
    } else if (escolha1 == "Dois" && escolha2 == "Um" && escolha3 == "Dois") { // 2 1 2
        cout << jogador1 << " e " << jogador3 << " avançaram." << endl; d = 1; empate = false ;
    } else if (escolha1 == "Um" && escolha2 == "Dois" && escolha3 == "Um") { // 1 2 1
        cout << jogador1 << " e " << jogador3 << " avançaram." << endl; e = 1; empate = false ;
    } else if (escolha1 == "Um" && escolha2 == "Um" && escolha3 == "Dois" ) { // 1 1 2
        cout << jogador1 << " e " << jogador2 << " avançaram." << endl; f = 1; empate = false ;
    } else if (escolha2 == "Um" && escolha3 == "Um" && escolha1 == "Um") { // 1 1 1
        cout << "Houve um empate, tente novamente." << endl;
    } else if (escolha2 == "Dois" && escolha3 == "Dois" && escolha1 == "Dois") { // 2 2 2
        cout << "Houve um empate, tente novamente." << endl;
    } 
}

    string escolhaFinal1, escolhaFinal2;
    string jogadorfinal1, jogadorfinal2;

    
    if (a == 1) { jogadorfinal1 = jogador2; jogadorfinal2 = jogador3; }
    if (b == 1) { jogadorfinal1 = jogador2; jogadorfinal2 = jogador3; }
    if (c == 1) { jogadorfinal1 = jogador1; jogadorfinal2 = jogador2; }
    if (d == 1) { jogadorfinal1 = jogador1; jogadorfinal2 = jogador3; }
    if (e == 1) { jogadorfinal1 = jogador1; jogadorfinal2 = jogador3; }
    if (f == 1) { jogadorfinal1 = jogador1; jogadorfinal2 = jogador2; }
    
    bool empate2(true) ;
    while(empate2) { 
        
        cout << jogadorfinal1 <<", escolha 'Par' ou 'Impar': ";
        cin >> escolhaFinal1;
        cout << jogadorfinal2 <<", escolha 'Par' ou 'Impar': ";
        cin >> escolhaFinal2;

        for (char &c : escolhaFinal1) c = tolower(c);
        for (char &c : escolhaFinal2) c = tolower(c);
 
        cout << "Resultados da segunda etapa:" << endl;

        if ((escolhaFinal1 == "Par" && escolhaFinal2 == "Impar") || (escolhaFinal1 == "Impar" && escolhaFinal2 == "Par")) {
            empate2 = false; 
            if (escolhaFinal1 == "Par") {
                cout << jogadorfinal1 << " venceu!" << endl; empate2 = false ;
            } else {
                cout << jogadorfinal2 << " venceu!" << endl; empate2 = false ;
            }
        } else {
            cout << "Empate! Jogadores escolheram a mesma opção. Tentem novamente.\n";
    
    }
}
    
    return 0;
}
