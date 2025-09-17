#include <iostream>

using namespace std;
//Dada una cadena verificar si la cadena es palindromo
//.at() recorrer el string
//.length() tamaño del string
//reconocer
int main(){
string palabra = "reconocer";
int contador = 1;
for( int i=0; i<palabra.length();i++){
    cout << i << " | " <<  contador << " | " <<  palabraa.length() << endl;
    if( palabra.at(i) == palabra.at((i+palabra.length()-1)-contador))
    {
    contador ++;
    }
}
if (contador%2==0){
cout<< "Es palindromo";
}
else{
        cout<< "No lo es";
}
return 0;
}
