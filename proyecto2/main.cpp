#include <iostream>
//Ejercico1.1
int main() {
    std::cout << "Hello, World!" << std::endl;
    std:: string nombre;
    int edad;
    std::cout <<"Por favor ingresa tu nombre";
    std::cin >>nombre;
    std:: cout<< "Pofavo ingrese su edad";
    std:: cin >> edad;
    std::cout<< "Hola " << nombre << ", tienes " << edad << " años.";
    return 0;
}
