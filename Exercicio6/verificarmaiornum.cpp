#include <iostream>
#include <windows.h>  // Para UTF-8 no Windows

int main () {

    // Configura console para UTF-8 (Windows)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

 //verificar qual o maior numero em 3;
 
    std::cout << "Escreva três números para verificar-mos qual o maior" << std::endl;
    
    int a, b, c;

    
    if(!(std::cin >> a >> b >> c)){
        std::cerr << "Insira apenas números reais." <<std::endl;
        return 1;
    }
    
    if (a > b && a > c) {
        std::cout << a << " É o maior número." << std::endl;
    } else if ( b > a && b > c) {
        std::cout << b << " É o maior número." << std::endl;
    } else if ( c > a && c > b) {
        std::cout << c << " É o maior número." << std::endl;
    } else {
        std::cout << "Error" << std::endl;
    }
    
    
    return 0;
}