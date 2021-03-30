/*
Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad.
*/

#include<iostream>

using std::cout;
using std::cin;

int main(){


    int n;
    cout<<"Ingresar dia: ";
    cin>>n;
    int b;
    cout<<"Ingresar mes: ";
    cin>>b;
    int c;
    cout<<"Ingresar year: ";
    cin>>c;
 
    if(n == 25 && b == 12){

        cout<<"Es navidad";
    }else{
        cout<<"No es navidad";
    }

    return 0;
}