#include <iostream>
using namespace std;
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    cout<<"Funciones recursivas ejercicio cinco parte 9"<<endl;
    int numero;
    std::cout << "Ingrese un numero para calcular su factorial: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "El factorial no está definido para numeros negativos." << std::endl;
    } else {
        unsigned long long resultado = factorial(numero);
        std::cout << "El factorial de " << numero << " es " << resultado << std::endl;
    }

    return 0;
}
