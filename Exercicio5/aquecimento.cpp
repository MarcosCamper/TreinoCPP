#include <iostream>
#include <string>
#include <limits>     // Para limpar o buffer do cin
#include <windows.h>  // Para UTF-8 no Windows
using namespace std;

int main() {
    // Configura console para UTF-8 (Windows)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    string nome;
    int idade;


    // INPUT
    cout  << "Digite seu nome: " << endl;
    getline(cin, nome); // Lê o nome completo
    cout << "Digite sua idade: " << endl;
    cin >> idade;


    //OUTPUT
    if (idade < 18) {
        cout << "Olá " << nome << " Você é menor de idade." << endl;
    } else {
        cout << "Olá " << nome << " Você é maior de idade." << endl;     
    }

    return 0;
}