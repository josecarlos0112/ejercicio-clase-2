#include<iostream>
using namespace std;
int main(){
cout<<"instrucciones de salto ejercicio tres apartado 4"<<endl;
    int numero, suma= 0;
    while(true){

        cout<<"digite un numero (o 0 para salir): "; cin>>numero;

        if (numero==0){

            break;
        }
        suma = numero;
    }

   cout<<"\n la suma es: "<<suma<<endl;


  return 0;
}