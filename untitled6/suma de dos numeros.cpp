#include<iostream>
using namespace std;
void funcion1(){
    cout<<"declaracion de una funcion ejercicio cinco parte 1"<<endl;
cout<<"este programa contiene los siguientes apartados"<<endl;
    int a,b, suma= 0;
    cout<<"digite un valor de a: "; cin>>a;
    cout<<"digite el valor de b: "; cin>>b;
    suma= a+b;
    cout.precision(5);
    cout<<"\nel resultado es: "<<suma<<endl;

}



#include <iostream>
using namespace std;
int calcularCuadrado(int x) {
    return x * x;
}

void imprimirMensaje() {
    std::cout << "Este es un mensaje desde un procedimiento." << std::endl;
}

 void funcion2(void){
cout<<"Funciones y procedimientos ejercico cinco parte 2"<<endl;

    funcion1();
    int numero = 5;
    int resultado = calcularCuadrado(numero);
    std::cout << "El cuadrado de " << numero << " es " << resultado << std::endl;
    imprimirMensaje();
}



#include<iostream>
using namespace std;

void funcion3(void){
    cout<<"Llamada de las funciones ejercicio cinco parte 3 "<<endl;
funcion2();

    float
            n1,n2,n3,n4, suma = 0, resta = 0, division = 0, multiplicacion = 0;


    cout<<"digite valor de n1: "; cin>>n1;
    cout<<"digite valor de n2: "; cin>>n2;
    cout<<"digite valor de n3: "; cin>>n3;
    cout<<"digite valor de n4: "; cin>>n4;


    suma = n1+n2+n3+n4;
    resta = n1-n2-n3-n4;
    multiplicacion = n1*n2*n3*n4;
    division = ((n1/n2)/(n3/n4));

    cout<<"\nla suma es: "<<suma<<endl,
            cout<<"la resta es: "<<resta<<endl;
    cout<<"la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"la division es: "<<division<<endl;
    cout.precision(3);


}



#include<iostream>
using namespace std; int suma(int a, int b) {

        return a + b;
    }

    double suma(double a, double b) {
        return a + b;
    }

    void funcion4(void){
cout<<"Gestion de las variables locales ejercicio 5 parte 4"<<endl;
       funcion3();


        int num1 = 10, num2 = 5;
        double num3 = 4.5, num4 = 2.5;

        int resultado1 = suma(num1, num2);
        double resultado2 = suma(num3, num4);

        std::cout << "Suma de enteros: " << resultado1 << std::endl;
        std::cout << "Suma de numeros decimales: " << resultado2 << std::endl;
    }




#include <iostream>
#include <initializer_list>

int suma(std::initializer_list<int> args) {
    int sum = 0;
    for (int num : args) {
        sum += num;
    }
    return sum;
}

void funcion5(void) {
    cout<<"Definicion de funciones homonimas (polimorfismo) ejercico cinco parte 5"<<endl;
  funcion4();


    int resultado = suma({1, 2, 3, 4, 5});
    std::cout << "Suma: " << resultado << std::endl;

}



#include<iostream>
using namespace std;
   int potencia(int base,int exponente= 2){
    int resultado= 1;
    for ( int i=0; i<exponente; i++){
        resultado =base;
    }
    return resultado;
   }
   void funcion6(void){
       cout<<"Funciones con numero variable de argumentos ejercicio cinco parte 6"<<endl;
    funcion5();
    int resultado1= potencia(2);
    int resultado2= potencia(2,3);
    cout<<"resultado 1: "<<resultado1<<endl;
    cout<<"resultado 2: "<<resultado2<<endl;


}

#include<iostream>
using namespace std;
   int factorial(int n){
       if (n==0){
           return 1;

       }else {
           return n* factorial(n-1);
       }
   }
   int main(){
       cout<<"Asignacion de valores por defecto a los argumentos ejercicio cinco parte 7"<<endl;
       funcion6();
       int num= 6;
       int resultado= factorial(num);
       cout<<"num: "<<"! = "<<resultado<<endl;
       return 0;
   }
