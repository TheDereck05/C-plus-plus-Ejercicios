#include <iostream>
using namespace std;

int main()
{
    // Declaramos una variable char con el carácter '1'
    char car = '1';

    // Convertimos el valor char a int utilizando static_cast
    int val = static_cast<int>(car);

    // Mostramos el tamaño de la variable 'car' en bytes
    cout << "Tamaño de car: " << sizeof(car) << " bytes" << endl;

    // Mostramos el valor entero equivalente al carácter '1' en la tabla ASCII
    cout << "El valor entero (ASCII) es: " << val << endl;

    // Restamos '0' para obtener el valor numérico real
    int result = val - '0';

    // Mostramos nuevamente el valor ASCII y el valor numérico real
    cout << "El valor entero (ASCII) es: " << val << endl;
    cout << "El valor numérico es: " << result << endl;

    return 0;
}
