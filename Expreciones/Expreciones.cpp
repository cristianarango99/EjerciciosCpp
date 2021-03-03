//Expresiones en c++

#include<iostream>

using  namespace std;

int main(){
	
	float a = 0;
	float b = 0;
	
	cout<<"Ingrese el primer numero entero: ";
	cin>>a;
	
	cout<<"Ingrese el segundo numero entero: ";
	cin>>b;
	
	float c = (a/b) +1;
	   
	//Precision sirve para que los numeros se redondeen despues del .
	cout.precision(3);
	cout<<"\nSu resultado es: "<<c;  
	
	return 0;
}
