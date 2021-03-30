/*
Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, imprimir en pantalla la leyenda "Todos los números son menores a diez".
*/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

     int a, b, c;
     cout<<"Ingresar valores"<<endl;
     cin>>a;
     cin>>b;
     cin>>c;
     
     if(a < 10 && b < 10 && c < 10){

      cout<<"Todos los numeros son menores a diez";

     }else{

         cout<<"Algun numero es mayor a diez";
     }
    return 0;
}