#include <iostream>


int main() {

    // Solicita ao usuário qual taboada deseja ver
    std::cout << "Digite qual taboada você deseja: ";
    int taboada;
    std::cin >> taboada;


    // Exibe a taboada do número informado
    for (int i = 1; i <= 10; i++) {
        std::cout << taboada << " x " << i << " = " << taboada * i << std::endl;
    }
    return 0;
}