/* 
Ingresar el sueldo de una persona, si supera los 3000 pesos mostrar un mensaje en pantalla indicando que debe abonar impuestos.
*/

#include<iostream>

using std::cout;
using std::cin;

int main(){

   int n; cout<<"Ingrese el suelo: ";
   cin>>n;

   if(n > 3000){
       cout<<"Abonar impuestos";
   }else{
       cout<<"Todo bien";
   }

    return 0;
}
