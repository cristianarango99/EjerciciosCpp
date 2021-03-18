/* 
Escribe un programa que lea de la entrada estándar tres números. 
Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad
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
