/*

Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero.

*/
#include<iostream>

using std::cout;
using std::cin;

int main(){

    int a;
    cout<<"Valor 1: ";
    cin>>a;
    int b;
    cout<<"Valor 2: ";
    cin>>b;
    int c;
    cout<<"Valor 3: ";
    cin>>c;
    int res;

    if( a == b && a == c ){

       res = (a + b) * c;
       cout<<res;
    }else{
        cout<<"No son iguales";
    }



    return 0;
}