#include <iostream>

using namespace std;

int main()
{
    /**
     * Escribir un programa que indique si el valor ingresado es una
     * LETRA MAYÚSCULA o una letra minúscula.
     */

    char val;
    cout << "Ingrese un caracter por favor: ";
    cin >> val;

    cout << "La variable 'val' ocupa: " << sizeof(val) << " bytes" << endl;
    cout << "El valor de la variable es: " << val << endl;

    // Convertimos el caracter a su valor numérico (código ASCII)
    int num = static_cast<int>(val);
    cout << "El valor numerico es: " << num << endl;

    // Verificar si es letra mayúscula (A-Z)
    if (num >= 65 && num <= 90) {
        cout << "El caracter es una letra MAYUSCULA" << endl;
    }
    else {
        cout << "El caracter NO es una letra MAYUSCULA" << endl;
    }

    // Verificar si es letra minúscula (a-z)
    if (num >= 97 && num <= 122) {
        cout << "El caracter es una letra minuscula" << endl;
    }
    else {
        cout << "El caracter NO es una letra minuscula" << endl;
    }

    return 0;
}
