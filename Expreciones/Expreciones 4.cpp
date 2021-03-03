//Expreciones

#include<iostream>

using namespace std;


int main(){
	
	double a, b, c, d = 0.0;
	double resultado;
	
	cout<<"Ingrese el primer valor: ";
	cin>>a;
	cout<<"Ingrese el segundo valor: ";
	cin>>b;
	cout<<"Ingrese el terce valor: ";
	cin>>c;
	cout<<"Ingrese el cuarto valor: ";
	cin>>d;
	
	resultado = (a+(b/(c-d)));
	
	cout.precision(3);
	cout<<"\nEl resultado es: "<<resultado;
	
	
	return 0;
}
