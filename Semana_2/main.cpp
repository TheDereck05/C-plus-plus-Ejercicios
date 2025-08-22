#include <iostream>

using namespace std;
int suma_de_enteros( int, int);

int suma_de_enteros( int a, int b){
return a+b;
}
int main(){
    int a, b, resultado;
    cout<< "Ingrese el valor de a:";
    cin>>a;
    cout<< "Ingrese el valor de b:";
    cin>>b;
    resultado = suma_de_enteros(a,b);
    cout<< "La suma de:"<< a << "mas la suma de"<< b <<"es"<<resultado;
    return 0;
}

