/*
Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo (es decir cero)
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int a;
    cout << "Ingrese el valor: ";
    cin >> a;

    if (a >= 0)
    {

        cout << "Positivo";
    }
    else if (a < 0)
    {
        cout << "Negativo";
    }

    return 0;
}