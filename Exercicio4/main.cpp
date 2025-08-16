#include <iostream>
#include <windows.h> // UTF-8 no Windows
#include <string>
using namespace std;

int main () {
    // Configura console para UTF-8 (Windows)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string senha = "1234";

    cout << "Bem-vindo ao sistema de autenticação!" << endl;
    cout << "Digite a senha para acessar o sistema: ";
    cin >> senha;

    while ( senha != "1234" ) {
        cout << "Senha incorreta! Tente novamente: ";
        cin >> senha;
    } 
    cout << "Acesso concedido!" << endl;
    
    return 0;
}    
