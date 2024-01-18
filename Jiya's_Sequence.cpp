#include<bits/stdc++.h>
using namespace std; 

int main(){

	int t ; 
	cin>>t;

	while(t--){
		int n; 
		cin>>n; 
		long long int product=1;
		for(int i=0;i<n;i++){
			int x; 
			cin>>x;
			product*=x;

		}

		if(product%10==2||product%10==3||product%10==5){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}


		// cout<<product;
	}
}