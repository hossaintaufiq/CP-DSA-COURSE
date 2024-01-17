#include<bits/stdc++.h>
using namespace std; 

int main(){
	int t; 
	cin>>t; 
	while(t--){

		int x; 
		cin>> x ;
		for(int i=0; i<=x;i++){
			for (int j=0; j<=i;j++){
				cout<<"*";
			}
			for(int k=x-i;k>=1;k--){
				cout<<"#";
			}
			for(int k=x-i;k>=1;k--){
				cout<<"#";
			}
			for (int j=0; j<=i;j++){
				cout<<"*";
			}
			cout<<endl;
		}


	}
}