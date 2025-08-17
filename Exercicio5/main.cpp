#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    // Configura console para UTF-8 (Windows)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Calculadora Simples" << endl;


    int num1, num2;

    // Solicita os números ao usuário
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    //Escolha da operação
    int operacao;
    cout << "Escolha a operação: \n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n";
    cin >> operacao;

    // Realiza a operação escolhida
    if (operacao == 1) {
        cout << "Resultado: " << num1 + num2 << endl;
    } else if (operacao == 2) {
        cout << "Resultado: " << num1 - num2 << endl;
    } else if (operacao == 3) {
        cout << "Resultado: " << num1 * num2 << endl;
    } else if (operacao == 4) {
        if (num2 != 0) { // Verifica se o divisor é zero
            cout << "Resultado: " << static_cast<double>(num1) / num2 << endl;
        } else {
            cout << "Erro: Divisão por zero não é permitida." << endl;
        }
    }
    return 0; 
}