#include <iostream>
#include <string>
#include <windows.h>  // Para UTF-8 no Windows

using namespace std;

// Exercício 2 - Calculadora Simples

int main() {
    // Configura console para UTF-8 (Windows)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num1, num2;
    //Coletar os numeros para as operações
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2; 

    //Operações aritimeticas e Resultados

    cout << "Soma: " << num1 + num2 << endl;
    cout << "Subtração: " << num1 - num2 << endl;
    cout << "Multiplicação: " << num1 * num2 << endl;
    cout << "Divisão: " << num1 / num2 << endl;

    return 0;
}