/*
Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".
*/

#include<iostream>

using std::cout;
using std::cin;

int main(){

    float a;
    cout<<"Ingrese la nota 1: ";
    cin>>a;
    float b;
    cout<<"Ingrese la nota 2: ";
    cin>>b;
    float c;
    cout<<"Ingrese la nota 3: ";
    cin>>c;
    float res;

    res = a + b + c / 3;
     
    if(res >= 7){
      
     cout.precision(3); 
     cout<<"Promocionado ";

    }
    return 0;
}