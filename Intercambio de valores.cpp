//Intercambio de valores entre 2 variables

#include<iostream>

using namespace std;

int main(){
	
	int x,y,aux;
	
	cout<<"Digite el valor de x: ";
	cin>>x;
	cout<<"Digite el valor de y: ";
	cin>>y;
	
	/*
	x = 10
	y = 5
	
	aux = 10
	x = 5
	y = 10
	
	*/
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl nuevo valor de x es: "<<x<<endl;
	cout<<"El nuevo valor de y es: "<<y<<endl;
	
	
	return 0;
}
