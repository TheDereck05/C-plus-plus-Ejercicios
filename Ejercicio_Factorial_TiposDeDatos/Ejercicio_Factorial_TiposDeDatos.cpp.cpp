/*
    REFERENCIA DE TIPOS DE DATOS EN C++:
    -------------------------------------
    char        → Caracter (1 byte)              Ej: 'A', 'b'
    bool        → Booleano (1 byte)              true / false
    short       → Entero corto (2 bytes)
    int         → Entero estándar (4 bytes)      Rango: -2,147,483,648 a 2,147,483,647
    long        → Entero largo (4 u 8 bytes)
    long long   → Entero muy largo (8 bytes)     Rango: ±9,223,372,036,854,775,807
    float       → Número decimal simple (4 bytes) Precisión: ~7 dígitos
    double      → Número decimal doble (8 bytes) Precisión: ~15 dígitos
    long double → Decimal de precisión extendida (10+ bytes)
    string      → Cadena de texto (tipo especial de la librería <string>)
*/



/*
    Este programa calcula el factorial de un número usando una función recursiva.
    ¿Cómo crear una función recursiva?
    1. Define el caso base: la condición que detiene la recursión (en este caso, n <= 1).
    2. Define el caso recursivo: la función se llama a sí misma con un valor más cercano al caso base.
    3. Asegúrate de que cada llamada recursiva se acerque al caso base para evitar bucles infinitos.
*/

#include <iostream>  // Incluye la librería estándar para entrada y salida
using namespace std;

// Declaración de la función factorial antes de main()
// Prototipo: recibe un entero y devuelve un entero
long long factorial(long long);

int main() {
    int n{0}, resultado{0};

    // Solicita al usuario que ingrese un número
    cout << "Ingrese su numero: ";
    cin >> n;

    // Validación básica: los factoriales no están definidos para números negativos
    if (n < 0) {
        cout << "Error: El factorial no está definido para numeros negativos." << endl;
        return 1; // Termina el programa con código de error
    }

    // Llama a la función factorial y guarda el resultado
    resultado = factorial(n);

    // Muestra el resultado en pantalla
    cout << "El factorial de " << n << " es: " << resultado << endl;

    return 0; // Fin del programa
}

// Definición de la función factorial (recursiva)
    long long factorial(long long n) {
    // Caso base: el factorial de 0 o 1 es 1
    if (n <= 1) {
        return 1;
    }
    // Caso recursivo: n! = n * (n-1)!
    return n * factorial(n - 1);
}
