#include <iostream>
using namespace std;
int factorial(int);

int main(){
    int n, resultado;
    cout<<"Ingrese su numero";
    cin>>n;
    resultado = factorial(n);
    cout<< "El resultado de:"<< n <<"es:" <<resultado;
return 0;
}
 int factorial (int n){
 if(n>1){
    return n* factorial(n-1);

 }
else{
    return 1;
}
 }
