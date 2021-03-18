/*
Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras. 
Mostrar un mensaje de error si el número de cifras es mayor.
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int a;
    cout << "Ingrese valor de 1 a 3 cifras: ";
    cin >> a;

    if (a < 10)
    {

        cout << "Tiene una cifra";
    }
    else if (a > 10 && a < 100)
    {
        cout << "Tiene dos crifras";
    }
    else if (a > 100)
    {
        cout << "Tiene tres cifras";
    }

    return 0;
}