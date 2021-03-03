//Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.

#include<iostream>

using namespace std;


int main(){
	
	double nota1, nota2, nota3, nota4 = 0.0;
	
	cout<<"Ingrese la nota1: ";
	cin>>nota1;
	cout<<"Ingrese la nota2: ";
	cin>>nota2;
	cout<<"Ingrese la nota3: ";
	cin>>nota3;
	cout<<"Ingrese la nota4: ";
	cin>>nota4;
	
	double resultado = 0.0;
	
	resultado = ((nota1 + nota2 + nota3 + nota4)/ 4);
	
	cout.precision(2);
	cout<<"\nLa nota total es: "<<resultado;
	
	
	
	return 0;
}
