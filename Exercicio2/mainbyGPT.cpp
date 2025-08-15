#include <iostream>
#include <string>
#include <windows.h>  // Para UTF-8 no Windows

using namespace std;

int main() {
    // Configura console para UTF-8 (Windows)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num1, num2;

    // Coletar os números para as operações
    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2; 

    // Mostrar resultados
    cout << "Soma: " << num1 + num2 << endl;
    cout << "Subtração: " << num1 - num2 << endl;
    cout << "Multiplicação: " << num1 * num2 << endl;

    // Divisão com verificação para zero
    if (num2 != 0) { //Se num2 for diferente de 0
        double resultado = static_cast<double>(num1) / num2; //Definindo a variavel resultado e transformando int e doble
        cout << "Divisão: " << resultado << endl; //Apresenta "Resultado" que foi definido acima
    } else { // se num2 for 0 então 
        cout << "Divisão: impossível dividir por zero!" << endl; // Mensagem de erro
    }

    return 0;
}