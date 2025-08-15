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

    cout << "Olá, meu nome é Marcos e estou aprendendo C++!" << endl;

    // Solicita o nome
    cout << "Digite seu nome: ";
    getline(cin, nome); // Lê o nome completo

    // Solicita a idade
    cout << "Digite sua idade: ";
    cin >> idade;

    // Exibe a mensagem final
    cout << "Prazer, " << nome << "! Você tem " << idade << " anos." << endl;

    return 0;
}