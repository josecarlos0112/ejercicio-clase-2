#include <iostream>
using namespace std;

//Ejercicio 7
int main() {
    cout<<"---------------------"<<::endl;
    cout<<"Referencias"<<::endl;
    cout<<"---------------------"<<::endl;
    int var1 = 14;
    int &refvar1 = var1;
    cout<<"Valor de la variable: "<<var1<<::endl;
    cout<<"Valor de la referencia: "<< refvar1<<::endl;
    cout<<"Luego de modificar el valor de la referencia"<<::endl;
    refvar1= 5;
    cout<<"El valor nuevo es: "<<var1<<::endl;
    return 0;
}
