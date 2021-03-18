/*
Realizar un programa que solicite la carga por teclado de dos números, 
si el primero es mayor al segundo informar su suma y diferencia, en caso contrario informar el producto y la división del primero respecto al segundo.
*/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

     int a;
     cout<<"Ingrese el primer valor: ";
     cin>>a;
     int b;
     cout<<"Ingrese el segundo valor: ";
     cin>>b;
     int res;

     if(a > b){

       res = a + b;
       cout<<"La suma es: "<<res<<endl;
       res = a - b;
       cout<<"La diferencia es: "<<res;
     }else{

       res = a / b;
       cout<<"La division es: "<<res<<endl;
       res = a * b;
       cout<<"La multiplicacion es: "<<res;
    }


    return 0;
}