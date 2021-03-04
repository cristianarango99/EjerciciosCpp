/* Programa el cual realice la siguiente expresion raiz de x / y a la 2 - 1 */

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	float x, y = 0.0;
	float result;
	
	
	cout<<"Ingrese el valor x: ";
	cin>>x;
	cout<<"Ingrese el valor y: ";
	cin>>y;
	
	result = (sqrt(x))/(pow(y,2)-1);
	cout<<"\nEl resultado es: "<<result;

	
	return 0;
}
