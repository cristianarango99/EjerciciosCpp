/* 
Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida está en el rango [18-25].
*/

#include<iostream>

using std::cout;
using std::cin;

int main(){
	
     int edad; 
     cout<<"Ingrese la edad: ";
	 cin>>edad;
     
	 if(edad >= 18 && edad <= 25){
	 	
	 	cout<<"La edad esta en el rango ";
	 }else{
	 	
	 	cout<<"La edad no esta en el rango ";
	 }
	
	
	return 0; 
}
