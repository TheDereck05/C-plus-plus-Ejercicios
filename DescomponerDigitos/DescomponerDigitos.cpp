#include <iostream>  // Librería estándar para entrada y salida

using namespace std;

int main() {
    int num {0};  // Variable para almacenar el número de 4 dígitos

    // Solicita al usuario ingresar un número de 4 dígitos
    cout << "Ingrese un numero de 4 digitos, por favor: ";
    cin >> num;

    // Muestra el número ingresado
    cout << "\n\nEl numero ingresado es: " << num << endl;

    // Ejemplo: si el usuario ingresa 3254
    // Extraer cada dígito usando división y módulo (%)
    cout << num / 1000 << endl;            // Primer dígito: 3
    cout << (num % 1000) / 100 << endl;    // Segundo dígito: 2
    cout << (num % 100) / 10 << endl;      // Tercer dígito: 5
    cout << num % 10 << endl;              // Cuarto dígito: 4

    return 0; // Fin del programa
}

/*
Explicación:
El programa pide un número de 4 dígitos y muestra cada dígito por separado.
Usa:
- La división entera (/) para eliminar los últimos dígitos.
- El operador módulo (%) para obtener el residuo.

Ejemplo:
Entrada: 3254
Salida:
3
2
5
4
*/
