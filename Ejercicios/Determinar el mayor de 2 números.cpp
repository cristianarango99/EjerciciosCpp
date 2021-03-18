// Determinar el mayor de 2 números


#include<iostream>

using namespace std;

int main(){

   int a = 0; 
   int b = 0;
   cout<<"Ingrese el primer valor: ";
   cin>>a;
   cout<<"Ingrese el segundo valor: ";
   cin>>b;
   
   if(a>b){
   	cout<<"El valor mayor es: "<<a;
   	
   }else{
   	cout<<"El valor mayor es: "<<b;
   }

   return 0;
}

