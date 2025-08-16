#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <windows.h> // UTF-8 no Windows
using namespace std;

int main () {
    // Configura console para UTF-8 (Windows)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Gera número aleatório entre 1 e 100
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1;

    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;
    cout << "Tente adivinhar o número entre 1 e 100." << endl;

    // Primeiro palpite antes do loop
    cout << "Digite seu palpite (1-100): ";
    cin >> palpite;

    // Enquanto não acertar
    while (palpite != numeroSecreto) {
        tentativas++;

        if (palpite > numeroSecreto) {
            cout << "Muito alto! Tente novamente: ";
        } 
        else if (palpite < numeroSecreto) {
            cout << "Muito baixo! Tente novamente: ";
        }

        // Lê novo palpite
        cin >> palpite;
    }

    // Quando sair do loop, acertou
    tentativas++; // Conta o acerto também
    cout << "Parabéns! Você adivinhou o número!" << endl;
    cout << "Número de tentativas: " << tentativas << endl;
    cout << "O número secreto era: " << numeroSecreto << endl;

    return 0;
}
