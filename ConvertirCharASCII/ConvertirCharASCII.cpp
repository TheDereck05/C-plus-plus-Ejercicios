#include <iostream>

using namespace std;

int main()
{
    /**
     * Este programa convierte un carácter a su valor numérico (código ASCII)
     * usando static_cast<int>() y luego lo muestra en pantalla.
     */

    char val; // Variable para almacenar un carácter ingresado por el usuario
    cout << "Ingrese un caracter por favor: ";
    cin >> val;

    // static_cast<int>(val) convierte el carácter a su código ASCII en entero
    int codigo_ascii = static_cast<int>(val);

    cout << "El valor del caracter es: " << val << endl;
    cout << "Su valor numerico (codigo ASCII) es: " << codigo_ascii << endl;

    return 0;
}
