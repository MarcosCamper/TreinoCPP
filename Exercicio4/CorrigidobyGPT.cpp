#include <iostream>
#include <windows.h> // UTF-8 no Windows
#include <string>
using namespace std;

int main() {
    // Configura console para UTF-8 (Windows)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string senhaCorreta = "1234"; // No meu codigo eu configurei a senha correta na mesma variavel que solicitei ao usuario
    string senhaUsuario; // Deu certo por que no while eu defini que a senha deveria ser diferente de "1234"

    cout << "Bem-vindo ao sistema de autenticação!" << endl;
    cout << "Digite a senha para acessar o sistema: ";
    cin >> senhaUsuario; // agora sim, uma variavel diferente da senha correta.

    while (senhaUsuario != senhaCorreta) {
        cout << "Senha incorreta! Tente novamente: ";
        cin >> senhaUsuario;
    } 

    cout << endl << "Senha correta! Acesso permitido." << endl;

    return 0;
}