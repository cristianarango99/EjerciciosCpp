/* 
Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo
y escriba en la salida estándar su hipotenusa.

*/

#include<iostream>
#include <cmath>

using namespace std;

int main(){
	
	
        float a,b,c = 0;
		float res;
		
		cout<<"Ingrese el valor de a: ";
		cin>>a;
		cout<<"Ingrese el valor de b: ";
		cin>>b;
		
		//Sirve para elevar el valor de a, en este caso se eleva a la 2
		c = pow(a,2) + pow(b,2);
		//SQRT = raiz cuadrada de c
		res = sqrt(c);	
	    cout<<"\nEl valor de la hipotenusa es: "<<res;
	  
	
	return 0;
}
