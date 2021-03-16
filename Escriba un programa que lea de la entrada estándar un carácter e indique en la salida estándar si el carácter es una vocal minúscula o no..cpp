/* Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar 
si el carácter es una vocal minúscula o no. */

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
