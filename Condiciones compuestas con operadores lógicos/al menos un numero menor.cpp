/*
Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, imprimir en pantalla la leyenda "Alguno de los números es menor a diez".
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
    
    if(a < 10 || b < 10 || c < 10){

        cout<<"Alguno de los numeros es menor a diez";

    }else{
        cout<<"Todos los valores son mayores a diez";
    }


    return 0;
}