#include <iostream>
//Ejercicio 2.2
int main() {
    int n1 = 8;
    int n2= 12;
    int sum = n1+ n2;
    int res= n1-n2;
    int mult= n1*n2;
    int div= n1/n2;
    int mod= n1 % n2;

    std::cout << "Suma: "<< sum<< std::endl;
    std::cout << "Resta: " << res << std::endl;
    std::cout << "Multiplicacion: "<< mult<< std::endl;
    std::cout << "Division: " << div<< std::endl;
    std::cout << "Módulo: "<< mod<< std::endl;

    int a= 6;
    int b= 8;
    bool igual= (a==b);
    bool diferente =(a!=b);
    bool menorque= (a<b);
    bool mayorque= (a>b);
    bool menoroigual=(a<=b);
    bool mayoroigual= (a>=b);

    std::cout<< "¿Igual? "<< (igual? "Verdadero" : "Falso")<<std::endl;
    std::cout<< "¿Diferente? "<< (diferente? "Verdadero" : "Falso")<< std::endl;
    std::cout<< "¿Menor que? "<< (menorque? "Verdadero" : "Falso")<< std::endl;
    std::cout<< "¿Mayor que? "<< (mayorque? "Verdadero" : "Falso")<< std::endl;
    std::cout<< "¿Menor o igual? "<< (menoroigual? "Verdadero" : "Falso")<< std::endl;
    std::cout << "¿Mayor o igual? "<< (mayoroigual? "Verdadero" : "Falso")<< std::endl;

    bool verdadero= true;
    bool falso= false;
    bool andLogico= (verdadero && falso);
    bool orLogico= (verdadero|| falso);
    bool notLogico= !verdadero;

    std::cout<< "And Logico"<< andLogico<<std::endl;
    std::cout << "OR lógico: " << orLogico << std::endl;
    std::cout << "NOT lógico: " << notLogico << std::endl;

    return 0;
}
