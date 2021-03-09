//Escriba un programa que lea tres números y determine cuál de ellos es el mayor.

#include<iostream>

using namespace std;


int main(){
	
	int a, b, c = 0;
	
	cout<<"Ingrese el primer valor: ";
	cin>>a;
	cout<<"Ingrese el segundo valor: ";
	cin>>b;
	cout<<"Ingrese el tercer valor: ";
	cin>>c;
	
	if(a > b && a > c){
		cout<<"El numero mayor es: "<<a;
	}else if(b > a && b > c){
			cout<<"El numero mayor es: "<<b;
    }
	else if (c > b && c > a){
			cout<<"El numero mayor es: "<<c;
	}

	return 0;
}
