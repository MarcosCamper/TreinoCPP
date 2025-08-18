#include <iostream>

int main(){

    //Soma dos numeros de 1 a 100
    int soma = 0;

    for(int i = 1; i <= 100; i++){
        soma += i; //soma = soma + i
    }

    std::cout << "A soma dos numeros de 1 a 100 e: " << soma << std::endl;
}