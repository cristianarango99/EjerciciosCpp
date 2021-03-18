//Condiciones if o else


#include<iostream>

using namespace std;



int main(){
	
	int numero, dato = 5;
	
	cout<<"Digite un numero: ";
	cin>>numero;
		
	 // == es igual
	 // != es diferente
	 // > mayor
	 // >= mayor o igual
	 // < menor
	 // <= menor o igual
	 
	if(numero != dato){
		cout<<"El numero no es 5";		
	}
	else{
		cout<<"El numero es 5";
	}
	return 0;
}
