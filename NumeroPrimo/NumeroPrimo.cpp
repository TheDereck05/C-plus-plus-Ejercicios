#include <iostream>  // Librería estándar para entrada y salida

using namespace std;

/**
 * Programa que solicita un número por teclado
 * e indica si dicho número es un número primo.
 *
 * Un número primo es aquel que solo es divisible entre 1 y él mismo.
 */

int main() {
    long long int n;  // Número ingresado
    int i = 1;        // Contador para probar divisores
    int d = 0;        // Contador de divisores encontrados

    // Solicitar número al usuario
    cout << "Ingrese un numero: ";
    cin >> n;

    // Verificar los divisores del número
    while (i <= n) {
        if (n % i == 0) { // Si es divisor
            d++;
        }
        i++;
    }

    // Un número es primo si tiene exactamente 2 divisores: 1 y él mismo
    cout << ((d == 2) ? "Primo" : "No primo") << endl;

    return 0; // Fin del programa
}

/*
Explicación:
Este programa determina si un número es primo verificando cuántos divisores tiene.
- Si el número tiene exactamente 2 divisores (1 y él mismo), es primo.
- Si tiene más de 2, no es primo.

Ejemplo:
Entrada: 7
Proceso: Divisible por 1 y 7 (2 divisores)
Salida: Primo

Entrada: 10
Proceso: Divisible por 1, 2, 5, 10 (4 divisores)
Salida: No primo
*/
