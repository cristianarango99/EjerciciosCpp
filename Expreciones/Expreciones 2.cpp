// Expresiones 2 a+b / c+d

#include<iostream>
using namespace std;

int main(){
	
	double a, b, c, d = 0;
	double resultado = 0;
	
	cout<<"Ingrese el valor a: ";
	cin>>a;
	
	cout<<"Ingrese el valor b: ";
	cin>>b;
	
	cout<<"Ingrese el valor c: ";
	cin>>c;
	
	cout<<"Ingrese el valor d: ";
	cin>>d;
	
	resultado = (a+b)/(c+d);
	
    cout.precision(3);
	cout<<"\nEl resultado es: "<<resultado;
	
	
	return 0;
}
