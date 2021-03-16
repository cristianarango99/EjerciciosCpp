/* Comprobar si un número digitado por el usuario es positivo o negativo. */

#include<iostream>

using namespace std;


int main(){
	
	int n;cin>>n;
	if(n > 0){
		cout<<"El numero es positivo: "<<n;
	}else{	
		cout<<"El numero es negativo: "<<n;
	}
	
	
	
	
	return 0;
}
