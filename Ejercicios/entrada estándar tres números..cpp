/* 
Escribe un programa que lea de la entrada est�ndar tres n�meros. 
Despu�s debe leer un cuarto n�mero e indicar si el n�mero coincide con alguno de los introducidos con anterioridad
*/

#include<iostream>

using std::cout;
using std::cin;


int main(){
	
	
	int a,b,c,d = 0;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	
	if(a == d){
		cout<<"El numero coincide con el primero ";
	}else if(b == d){
		cout<<"El numero coincide con el segundo ";
	}else if(c == d){
		cout<<"El numero coincide con el tercero ";
	}
	
	
	return 0;
}
