/* 
Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma 
ax^2 + bx + c = 0
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	double a, b, c = 0.0;
	float result1, result2 = 0.0; 
	
	cout<<"Ingrese el valor a: ";
	cin>>a;
	cout<<"Ingrese el valor b: ";
	cin>>b;
	cout<<"Ingrese el valor c: ";
	cin>>c;
	
	result1 = (-b+sqrt(pow(b,2)- 4 *a*c)/2*a);
	result2 = (-b-sqrt(pow(b,2)- 4 *a*c)/2*a);
	
	cout<<"\nEl resultado 1 es: "<<result1;
	cout<<"\nEl resultado 1 es: "<<result2;
	
	
	return 0;
}


