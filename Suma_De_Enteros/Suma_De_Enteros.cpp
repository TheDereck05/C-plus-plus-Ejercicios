#include <iostream>
using namespace std;

// Prototipo de la función
int suma_de_enteros(int, int);

// Definición de la función
int suma_de_enteros(int a, int b) {
    return a + b;
}

int main() {
    int a, b, resultado;

    // Solicitar los valores al usuario
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    // Llamada a la función
    resultado = suma_de_enteros(a, b);

    // Mostrar el resultado
    cout << "La suma de " << a << " mas " << b << " es: " << resultado << endl;

    return 0;
}

