#include <iostream>  // Librería estándar para entrada y salida

using namespace std;

int main() {
    /**
     * Ejemplos de uso del bucle while
     *
     * Sintaxis:
     * while (condicion) {
     *     Instrucciones;
     * }
     */

    // Ejemplo 1: Imprimir del 1 al 9
    /*
    int i = 1;
    while (i < 10) {
        cout << "El numero es: " << i << endl;
        i += 1; // Incrementa en 1
    }
    */

    // Ejemplo 2: Imprimir del 9 al 1
    /*
    int a = 9;
    while (a >= 1) {
        cout << "El numero es: " << a << endl;
        a -= 1; // Decrementa en 1 (corregido)
    }
    */

    // Ejemplo 3: Imprimir múltiplos de 3 menores a 100
    int num = 1;
    while (num < 100) {
        if (num % 3 == 0) {
            cout << num << endl;
        }
        num += 1; // Avanza de uno en uno para evaluar todos los números
    }

    return 0; // Fin del programa
}
