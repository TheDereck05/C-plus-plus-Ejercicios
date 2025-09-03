#include <iostream>  // Librería estándar para entrada y salida

using namespace std;

int main() {
    // Declaración de variable para almacenar un carácter
    char val;

    // Solicita al usuario ingresar un carácter
    cout << "Ingrese un caracter por favor: ";
    cin >> val;

    // Muestra el carácter ingresado
    cout << "El valor en la variable es: " << val << endl;

    // Convierte el carácter a su valor numérico (código ASCII)
    int num = static_cast<int>(val);

    // Muestra el valor numérico correspondiente al carácter
    cout << "El valor numerico es: " << num << endl;

    return 0; // Fin del programa
}

/*
Explicación:
Este programa lee un carácter ingresado por el usuario y muestra:
1. El carácter tal como se ingresó.
2. Su valor numérico en la tabla ASCII, utilizando static_cast<int>().

Ejemplo:
Si el usuario ingresa:  A
Salida:
El valor en la variable es: A
El valor numerico es: 65

Si el usuario ingresa:  1
Salida:
El valor en la variable es: 1
El valor numerico es: 49
(49 es el código ASCII del carácter '1', no el número 1 real)
*/
