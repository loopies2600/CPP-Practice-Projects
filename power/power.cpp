#include <iostream>
#include "math.h"
#include "input.h"

using namespace std;

int calc()
{
    cout << "¡Hola!\n";

    int x{requestInt("Escribi un numero entero: ")};
    int i{requestInt("Escribi un exponente: ")};
    char reply;

    cout << x << " elevado a " << i << " es: " << pow(x, i) << '\n';

    cout << "¿Queres intentarlo otra vez? (Y/N): ";
    cin >> reply;

    if (reply == 'y' || reply == 'Y')
        calc();

    cout << "¡Buenas noches!";

    return 0;
}

int main()
{
    calc();
}
