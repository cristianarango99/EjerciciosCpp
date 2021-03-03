/* Realice un programa que lea de la entrada estandar los siguientes datos
de una persona:

   Edad: dato de tipo entero
   Sexo: dato de tipo caracter
   Altura en metros: dato en tiempo real
   
Tras leer los datos, el programa debera mostrarlos en la salida
estandar
*/

#include<iostream>

using namespace std;

int main(){
	
	int edad = 0;
	///[10] El limite de palabras que tiene para escribir
	char sexo[10];
	float altura = 0.0;
	
	cout<<"Ingrese su edad: ";	
	cin>>edad;
	cout<<"Ingrese su sexo: ";
	cin>>sexo;
	cout<<"Ingrese su altura: ";
	cin>>altura;
	
	// \n saltos de linea
	
	cout<<"\nSu edad es: "<<edad<<endl;
	cout<<"Su sexo es: "<<sexo<<endl;
	cout<<"Su altura es: "<<altura;
	
	return 0;
}
