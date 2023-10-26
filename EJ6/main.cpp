#include <iostream>
using namespace std;
//Ejercicio 6

//Funcion usada para la parte 6.
int multiplica(int a, int b) {
    return a * b;
}

int main() {
    //Punteros de variables
    cout<<"\n---------------------"<<::endl;
    cout<<"Punteros de variables"<<::endl;
    cout<<"---------------------"<<::endl;
    int num;
    int num2;
    cout<<"Ingrese el valor de la primera variable"<<::endl;
    cin>>num;
    cout<<"Ingrese el valor de la segunda variable"<<::endl;
    cin>>num2;
    cout<<"El valor original de cada variable es "<<::endl;
    cout<<num<<" y "<<num2<<" respectivamente"<<::endl;
    int *pnum = &num;
    int *pnum2 = &num2;
    cout<<"El valor de los punteros *pnum y *pnum2 por cada variable es"<<::endl;
    cout<<*pnum<<" y "<<*pnum2<<" respectivamente"<<::endl;

    //Punteros y arrays
    cout<<"\n---------------------"<<::endl;
    cout<<"Punteros y arrays"<<::endl;
    cout<<"---------------------"<<::endl;
    cout<<"Sea el array de nombre 'lista' con valores 0,1,2,3,4,5 (en ese orden)"<<::endl;
    int lista[]={1,2,3,4,5,6};
    cout<<"Recorremos el array mediante un puntero llamado 'punt'"<<::endl;
    int *plista = lista;
    for(int i=0; i<6; i++){
        cout<<"Elemento "<< i <<": "<< *plista<<::endl;
        plista++;
    }

    //Asignación de memoria
    cout<<"\n---------------------"<<::endl;
    cout<<"Asignacion de memoria"<<::endl;
    cout<<"---------------------"<<::endl;
    string *punt2 = new string;
    *punt2 = "Ruben";
    cout<<"El valor del puntero de tipo string es "<<*punt2<<::endl;
    cout<<"Se asigno el valor 'Ruben' a este puntero mediante new"<<::endl;
    delete punt2;
    cout<<"Se elimino el valor 'Ruben' a este puntero mediante delete"<<::endl;


    //Aritmética de los punteros
    cout<<"\n---------------------"<<::endl;
    cout<<"Aritmetica de los punteros"<<::endl;
    cout<<"---------------------"<<::endl;
    int lista2[] = {5, 4, 3, 2, 1};
    int *plista2 = lista2;
    std::cout << "Siempre empieza en la posicion [0]->" << *plista2 << std::endl;
    plista2++;
    std::cout << "Si avanzamos una posicion nos da: " << *plista2 << std::endl;
    //Punteros de punteros
    cout<<"\n---------------------"<<::endl;
    cout<<"Punteros de punteros"<<::endl;
    cout<<"---------------------"<<::endl;
    int num3 = 50;
    int *punt3 = &num3;
    int **punt4 = &punt3;
    cout<<"Valor de variable original es"<< num3<<::endl;
    cout<<"Valor de primer puntero es"<< *punt3<<::endl;
    cout<<"Valor de segundo puntero es"<< **punt4<<::endl;

    //Punteros de funciones
    cout<<"---------------------"<<::endl;
    cout<<"Punteros de funciones"<<::endl;
    cout<<"---------------------"<<::endl;
    int (*pmultiplica)(int, int) = &multiplica;
    int resul = (*pmultiplica)(4, 5);
    cout<<"El resultado de la funcion multiplica para 4 y 5 es: "<<resul<<::endl;

    return 0;
}
