#include <iostream>

int main () {

    std::string nome;
    int idade;

    std::cout << "Olá, meu nome é Marcos, qual seu nome?" << std::endl;
    std::cin >> nome;
    std::cout << "Digite sua idade" << std::endl;
    std::cin >> idade;
    std::cout << "Olá, " << nome << " prazer em conhece-lo" << std::endl;


    return 0;
}