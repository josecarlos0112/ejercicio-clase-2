#include<iostream>
using namespace std;
int main(){
    cout<<"bucle while ejercicio tres apartado 2"<<endl;
  int numero, i = 1;
  cout<<"digita un numero: "; cin>>numero;

  while (i <= 10) {
     std::cout<< numero <<"x"<<i<<"="<< numero *i <<std::endl;
     i++;
  }

    return 0;

}