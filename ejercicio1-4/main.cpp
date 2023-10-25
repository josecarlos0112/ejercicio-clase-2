#include <iostream>
// ejercicio 1.4
int main() {
   int numentero= 34;
   float numdecimal= 19.9;
   char caracter= 'A';
   bool esneta= true;//En Mexico "es neta" es como decir "es cierto"

   std::cout <<"Numero entero " << numentero <<std::endl;
   std::cout<< "Numero decimal " << numdecimal<< std::endl;
   std::cout<< "Es neta" << caracter<< std:: endl;

   int resultadosuma = +10;
   float resultadomultiplicacion = numdecimal * 3.0;
   char nuevocaracter= caracter +2;
   bool esfalso= !esneta;

   std::cout << "Resultado de suma: " << resultadosuma<< std::endl;
   std::cout << "Resultado de multiplicación: "<< resultadomultiplicacion<< std::endl;
   std::cout << "Nuevo caracter: " << nuevocaracter<< std::endl;
   std::cout << "Es Falso " << esfalso << std:: endl;

   return 0;
}
