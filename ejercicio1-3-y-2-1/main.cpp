#include <iostream>
//ejercicio 1.3 y 2.1
int variableGlobal = 42;
int main() {
    std::string nombre;
    int edad;
    std::cout << "Por favor ingresa tu nombre: ";
    std::cin >> nombre;
    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;
    if (edad >= 18) {
        std::cout << "Hola " << nombre << ", eres mayor de edad." << std::endl;
    } else {
        std::cout << "Hola " << nombre << ", eres menor de edad." << std::endl;
    }
    std::cout << "Variable Global en main:" << variableGlobal <<std::endl;
    if (nombre == "Sofia") {
        int contador = 1;
        std::cout << "Hola, " << nombre << "! Contador: " << contador << std::endl;
    }
    return 0;
}

