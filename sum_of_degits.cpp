#include<bits/stdc++.h>
using namespace std; 

int main(){
	int t; 
	cin>> t; 
	while(t--){
		int x; 
		cin>> x; 
		int sum= 0 ;
		while(x>0){
			int last_number=x%10;
			sum+=last_number;

			x=x/10;
		}

		cout<<sum<<endl;
	}
}