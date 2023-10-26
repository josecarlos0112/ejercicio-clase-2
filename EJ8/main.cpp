#include <iostream>
using namespace std;

//Ejercicio 8

//Constantes simbólicas
#define euler 2.718281

void saludo() {
    std::cout << "Buen dia Ruben que tal vas?" << std::endl;
}

//Los alias de tipo: typedef
typedef int uno;

int main() {
    //Constantes simbolicas
    cout<<"---------------------"<<::endl;
    cout<<"Constantes simbolicas"<<::endl;
    cout<<"---------------------"<<::endl;
    cout<<"Luego de declarar la constante simbolica 'euler'"<< euler<<::endl;
    cout<<"El valor aproximado de la constante euler es: "<< euler<<::endl;

    //El tipo void
    cout<<"\n---------------------"<<::endl;
    cout<<"El tipo void"<<::endl;
    cout<<"---------------------"<<::endl;
    cout<<"El primer tipo es void simple como funcion sin valor de retorno"<<::endl;
    cout<<"Imprimiendo la funcion saludo de tipo void:"<<::endl;
    saludo();
    cout<<"\nEl segundo tipo es puntero void para guardar espacio en memoria"<<::endl;
    cout<<"Este void es un puntero a un tipo indeterminado"<<::endl;
    char* pvoid = (char*) malloc(5);
    pvoid[0] = 'J';
    pvoid[1] = 'o';
    pvoid[2] = 's';
    pvoid[3] = 'e';
    pvoid[4] = '\0';
    cout<<"Imprimiendo la funcion saludo de tipo void: "<< pvoid <<::endl;

    //Los alias de tipo: typedef
    cout<<"\n---------------------"<<::endl;
    cout<<"Los alias de tipo: typedef"<<::endl;
    cout<<"---------------------"<<::endl;
    cout<<"Le daremo el valor a nuestro typedef de 1 mediante la variable 'uno'"<<::endl;
    uno luno = 1;
    cout<<"El valor de 'uno' es: "<< luno<<::endl;

    //Constantes y enumeraciones
    cout<<"\n---------------------"<<::endl;
    cout<<"Constantes y enumeraciones"<<::endl;
    cout<<"---------------------"<<::endl;
    enum Listaenum {primero, segundo, tercero, cuarto};
    Listaenum nprimero = segundo;
    cout<<"La posicion del valor 'segundo' en la lista {primero, segundo, tercero, cuarto} es: "<< nprimero<<::endl;

    return 0;
    }