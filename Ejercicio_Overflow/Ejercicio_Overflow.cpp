#include <iostream>  // Librería estándar para entrada y salida

using namespace std;

int main() {
    /**
     * Tipos de datos para manejar enteros:
     *  - short        → 2 bytes (16 bits)
     *  - int / long   → 4 bytes (32 bits)
     *  - long long    → 8 bytes (64 bits)
     *
     * unsigned: Solo permite valores positivos (desde 0 hasta su límite máximo).
     *
     * Ejemplo de tamaños en memoria:
     *  1 byte  = 8 bits
     *  2 bytes = 16 bits
     *
     * Ejemplos en binario:
     *  2   → 00000010
     *  3   → 00000011
     *  4   → 00000100
     *  10  → 00001010
     *  255 → 11111111
     *  256 → 00000001 00000000
     */

    unsigned short val1 = 65534; // Variable tipo unsigned short (máx: 65535)

    // sizeof() devuelve el tamaño en bytes que ocupa la variable en memoria
    cout << "Tamaño de val1: " << sizeof(val1) << " bytes" << endl;

    // Mostrar el valor inicial
    cout << "El valor inicial es: " << val1 << endl;

    // Incrementar la variable y mostrar resultados
    val1 = val1 + 1;
    cout << "Después de sumar 1: " << val1 << endl;

    val1 = val1 + 1;
    cout << "Después de sumar 1 nuevamente: " << val1 << endl;

    return 0; // Fin del programa
}

/*
Explicación:
Este programa demuestra el comportamiento de una variable tipo
unsigned short (16 bits). Su rango es de 0 a 65535.

1. Se inicializa val1 con 65534.
2. Se imprime su tamaño en memoria.
3. Se incrementa dos veces y se observa qué sucede cuando se supera
   su valor máximo (65535). En ese caso, el valor "rebota" a 0
   debido al desbordamiento (overflow).

Ejemplo de ejecución:
Tamaño de val1: 2 bytes
El valor inicial es: 65534
Después de sumar 1: 65535
Después de sumar 1 nuevamente: 0
*/

