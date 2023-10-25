#include<iostream>
using namespace std;
int main(){
cout<<"arrays ejercicio cuatro parte 1"<<endl;
    int numerosnaturales[10];

    for( int i= 0; i < 10; i++){
     numerosnaturales[i] = i+1;

        }
    cout<<"los primeros numeros naturales son: ";
    for(int numerosnaturale : numerosnaturales){
        std::cout<< numerosnaturale<< " ";
        }
std::cout<<std::endl;
    return 0;
}