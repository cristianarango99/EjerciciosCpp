/* 
La calificaci�n final de un estudiante es la media ponderada de tres notas: la nota de 
pr�cticas que cuenta un 30% del total, la nota te�rica que cuenta un 60% y la nota de
participaci�n que cuenta el 10% restante. Escriba un programa que lea de la entrada 
est�ndar las tres notas de un alumno y escriba en la salida est�ndar su nota final.
*/

#include<iostream>


using namespace std;


int main(){
	
	double n1, n2, n3 = 0.0;
	double nf = 0.0;
	
	cout<<"Ingrese la n1: ";
	cin>>n1;
	cout<<"Ingrese la n2: ";
	cin>>n2;
	cout<<"Ingrese la n3: ";
	cin>>n3;
	
	n1 = n1 * 0.30;
	n2 = n2 * 0.60;
	n3 = n3 * 0.10;
	
	nf = n1 + n2 + n3;
	
	cout<<"\nSu nota final es: "<<nf;
	
	
	
	return 0;
}
