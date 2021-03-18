/*
Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int a;
    cout << "Valor 1: ";
    cin >> a;
    int b;
    cout << "Valor 2: ";
    cin >> b;
    int c;
    cout << "Valor 3: ";
    cin >> c;

    if (a > b && a > c)
    {

        cout << a;
    }
    else if (b > a && b > c)
    {

        cout << b;
    }
    else if (c > a && c > b)
    {

        cout << c;
    }
}