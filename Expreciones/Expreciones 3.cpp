//Expreciones

#include<iostream>

using namespace std;


int main(){
	
	double a, b, c, d, e ,f = 0.0;
	double resultado = 0.0;
	
	cout<<"Ingrese su primer numero: ";
	cin>>a;
	cout<<"Ingrese su segundo numero: ";
	cin>>b;
	cout<<"Ingrese su tercer numero: ";
	cin>>c;
	cout<<"Ingrese su cuarto numero: ";
	cin>>d;
	cout<<"Ingrese su quinto numero: ";
	cin>>e;
	cout<<"Ingrese su sexto numero: ";
	cin>>f;
	
	
	resultado = (a+(b/c))/(d+(e/f));
	
	cout.precision(3);
	cout<<"\nSu resultado es: "<<resultado;
	
	
	return 0;
}
