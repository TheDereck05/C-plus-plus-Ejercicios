#include <iostream>  // Librería estándar para entrada y salida

using namespace std;

int main() {
    // Declaración e inicialización de variables
    int val_1 {20};
    double val_2 {8};
    int suma {0}, resta {0}, multiplicacion {0};
    double division {0};

    // Operaciones
    suma = val_1 + val_2;
    resta = val_1 - val_2;
    multiplicacion = val_1 * val_2;
    division = val_1 / val_2; // División (resultado en double)

    // Salida de resultados
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    cout << "La division es: " << division << endl;

    return 0; // Fin del programa
}
