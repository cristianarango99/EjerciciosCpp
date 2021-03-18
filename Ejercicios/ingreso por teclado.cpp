/*

Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos.
(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)

*/

#include <iostream>;

using std::cin;
using std::cout;

int main()
{

    int a;
    cout << "Ingresar numero de 1 o 2 digitos: ";
    cin >> a;

    if (a < 10)
    {

        cout << "Su numero tiene solo un digito ";
    }
    else
    {
        cout << "Su numero tiene mas de dos digitos";
    }

    return 0;
}