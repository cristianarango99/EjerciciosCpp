/* Escriba un programa que lea de la entrada estandar dos numeros y muestre 
en la salida estandar su suma, resta, multiplicacion y division */

#include<iostream>

using namespace std;

int main(){
	
    int n1,n2;
	int suma = 0; //Para que la varible no empiece con un valor basura
	int resta = 0;
	int multiplicacion = 0;
	int division = 0;
	
	
	//Pedir los numeros y luego guardalos con CIN
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2; 
    
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;
    
    //ENDL = Salto de linea
    
    cout<<"\nLa suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division;

	return 0;
}
