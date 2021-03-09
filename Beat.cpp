#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int n; cin>>n;
	
    while(n > 0){
    	
    int s; cin>>s;
	int d; cin>>d;
    	
    int x, y;
    if((s < d) || (d-s)%2 != 0){
    	
    	cout<<"impossible\n";
    	n--;
    	continue;	
    }
    
    y = (d - s)/ -2;
    x = s - y;
    
    if(y > x){	
    	cout<<y<<" "<<x<<"\n";
    }else{
    	cout<<x<<" "<<y<<"\n";
    }
     n--;	
   }
}

