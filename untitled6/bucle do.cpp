#include<iostream>
using namespace std;
int main(){
cout<<"bucle do jercicio tres apartado 3"<<endl;
    int numero, i=1;

    cout<<"digita un numero: "; cin>>numero;
    do{
        std::cout <<numero <<"x"<< i <<"="<<numero *i <<std::endl;
        i++;

    } while (i<= 10);

    return 0;
}