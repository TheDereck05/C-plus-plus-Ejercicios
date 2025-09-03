#include <iostream>
using namespace std;

int main()
{
    /**
     * CONDICIONAL IF
     *
     * if (CONDICION) {
     *     // Sentencia A: se ejecuta si la condición es verdadera.
     * }
     * else {
     *     // Sentencia B: se ejecuta si la condición es falsa.
     *
     * OPERADORES DE COMPARACIÓN:
     *   >  mayor que
     *   <  menor que
     *   >= mayor o igual que
     *   <= menor o igual que
     *   == igual a
     *   != diferente de
     *
     * OPERADORES LÓGICOS:
     *   &&  AND (y)
     *   ||  OR (o)
     *   !   negación
     *
     * Ejemplo:
     *   a = 10, b = 5
     *   (a > 5)           -> true
     *   (a < 3)           -> false
     *   (a == 8)          -> false
     *   (a != 5)          -> true
     *   (a >= 10 && b<10) -> true
     *   (a < 6 || b==5)   -> true
     */

    int a{10}, b{5};

    if (a > 5) {
        cout << "* El número " << a << " es mayor que 5" << endl;
    } else {
        cout << "* Falso" << endl;
    }

    if (a < 3) {
        cout << "* El número " << a << " es menor que 3" << endl;
    } else {
        cout << "* Falso" << endl;
    }

    if (a == 8) {
        cout << "* El número " << a << " es igual a 8" << endl;
    } else {
        cout << "* Falso" << endl;
    }

    if (a != 5) {
        cout << "* El número " << a << " es diferente de 5" << endl;
    } else {
        cout << "* Falso" << endl;
    }

    if (a >= 10 && b < 10) {
        cout << "* Se cumple que a >= 10 y b < 10" << endl;
    } else {
        cout << "* Falso" << endl;
    }

    if (a < 6 || b == 5) {
        cout << "* Se cumple que a < 6 o b == 5" << endl;
    } else {
        cout << "* Falso" << endl;
    }

    return 0;
}
