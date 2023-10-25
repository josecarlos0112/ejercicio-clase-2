#include <iostream>
//ejercicio 1.2
int variableGlobal = 19;
int variableGlobal2 = 21;

void miFuncion() {
    int variableLocal = 20;
    int variableGlobal = 18;
    std::cout << "Hola desde miFuncion" << std::endl;
    std::cout << "Variable local con el mismo nombre de la variable global: " << variableGlobal << std::endl;
    std::cout << "Variable global en el programa: " << variableGlobal2 << std::endl;
    //Vemos que va a respetar el valor de la variable local así tenga el mismo nombre que una variable global
    std::cout << "Variable local en miFuncion: " << variableLocal << std::endl;
}

int main() {
    miFuncion();

    return 0;
}

