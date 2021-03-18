/*
Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información: cantidad total de preguntas que se le realizaron 
y la cantidad de preguntas que contestó correctamente. Se pide confeccionar un programa que ingrese los dos
datos por teclado e informe el nivel del mismo según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:
	Nivel máximo:	Porcentaje>=90%.
	Nivel medio:	Porcentaje>=75% y <90%.
	Nivel regular:	Porcentaje>=50% y <75%.
	Fuera de nivel:	Porcentaje<50%.
*/

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int a;
    cout << "Dato 1: ";
    cin >> a;
    int b;
    cout << "Dato 2: ";
    cin >> b;
    int res;

    res =  b * 100/ a;

    
    if (res >= 90)
    {

        cout << "Nivel maximo";
    }
    else if (res >= 75 )
    {

        cout << "Nivel medio";
    }
    else if (res >= 50 )
    {

        cout << "Nivel regular";
    }
    else if (res < 50)
    {

        cout << "Fuera de nivel";
    }

    return 0;
}