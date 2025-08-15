#include <iostream>


int main () {
    setlocale(LC_ALL, "portuguese");// Definindo o idioma do terminal para português
    std::string nome; // Definindo a variavel nome
    int idade; // Definindo a variavel idade
    std::cout << "Olá, meu nome é Marcos e estou aprendendo C++!" << "\n"; //Apresentação Inicial
    std::cout << "Digite seu nome " << "\n"; 
    std::cin >> nome; //Recebendo o valor de nome
    std::cout << "Digite sua idade " << "\n";
    std::cin >> idade; // recebendo a valor de idade
    std::cout << "Prazer, " << nome << "! Você tem " << idade << " anos." << "\n"; //Entregando o valor das variaveis na tela
    return 0;

}