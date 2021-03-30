/*
De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int sueldo, antiguedad;
    cout << "Ingresa tu sueldo: ";
    cin >> sueldo;
    cout << "Ingresa tu antiguedad: ";
    cin >> antiguedad;

    if (sueldo < 500 && antiguedad >= 10)
    {

        float aumento = sueldo * 0.20f;
        float sueldoTotal = sueldo + aumento;
    }
    else if (sueldo < 500 && antiguedad < 10)
    {
        float aumento = sueldo * 0.05f;
        float sueldoTotal = sueldo + aumento;
    }
    else if (sueldo >= 500)
    {
        cout<<sueldo;
    }

    return 0;
}