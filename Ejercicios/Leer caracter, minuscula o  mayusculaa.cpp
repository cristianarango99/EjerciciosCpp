/*
Escriba un programa que lea de la entrada est�ndar un car�cter e indique en la salida est�ndar 
si el car�cter es una vocal min�scula, es una vocal may�scula o no es una vocal. */

#include<iostream>

using namespace std;

int main(){
	
	char n;
	cout<<"Ingrese el valor: ";
	cin>>n;
	
	switch(n){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':cout<<"El valor es una vocal minuscula";break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':cout<<"El valor es una vocal mayuscula";break;
		default :cout<<"No es una vocal";break;		
		
	}
	
	return 0;
}
