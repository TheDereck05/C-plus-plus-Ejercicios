#include <iostream>

using namespace std;

int main()
{
    /**
     * Implemente un programa que reciba por teclado un número de 4 dígitos
     * e imprima el número en forma vertical.
     * Ejemplo:
     * Entrada: 3256
     * Salida:
     * 3
     * 2
     * 5
     * 6
     */

    int val;
    cout << "Ingrese un numero de 4 digitos: ";
    cin >> val;

    // Extraer cada dígito usando división y módulo
    int unidades = val % 10;           // Último dígito
    int decenas = (val / 10) % 10;     // Penúltimo dígito
    int centenas = (val / 100) % 10;   // Tercer dígito
    int millares = (val / 1000) % 10;  // Primer dígito

    // Imprimir en forma vertical
    cout << millares << endl;
    cout << centenas << endl;
    cout << decenas << endl;
    cout << unidades << endl;

    return 0;
}
