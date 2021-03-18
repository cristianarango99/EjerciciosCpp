/* 
Realice un programa que lea un valor entero y determine si se trata de un número par o impar.

*/

#include<iostream>

using namespace std;


int main(){
	
	int n;cin>>n;
	
	// % residuo = todo numero par el residuo es igual a 0
	
	if(n % 2 == 0){
		
		cout<<"El valor es par "<<n;
	}else{
		
		cout<<"El valor es impar "<<n;
	}
	
	
	
	return 0;
}
