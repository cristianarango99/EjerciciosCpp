/*
Confeccionar un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes:
Si el promedio es >=7 mostrar "Promocionado".
Si el promedio es >=4 y <7 mostrar "Regular".
Si el promedio es <4 mostrar "Reprobado".

*/

#include <iostream>;

using std::cin;
using std::cout;

int main()
{

    float a;
    cout << "Ingrese la primera nota: ";
    cin >> a;
    float b;
    cout << "Ingrese la segunda nota: ";
    cin >> b;
    float c;
    cout << "Ingrese la tercera nota: ";
    cin >> c;
    int res;

    res = (a + b + c) / 3;
    if (res >= 7)
    {

        cout << "Promocionado";
    }
    else if (res >= 4 && res < 7)
    {

        cout << "Regular";
    }
    else if (res < 4)
    {

        cout << "Reprobado";
    }

    return 0;
}