/* Escriba un programa que lea de la entrada est�ndar un car�cter e indique en la salida est�ndar 
si el car�cter es una vocal min�scula o no. */

#include<iostream>

using namespace std;

int main(){
	
	char n;
	cout<<"Ingrese un caracter: ";
	cin>>n;
	
    switch(n){
    	case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':cout<<"Es una vocal minuscula";break;
        default :cout<<"No es una vocal minuscula";break;
    	
    	
    }
	return 0;
}
