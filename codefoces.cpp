#include<bits/stdc++.h>
using namespace std; 

int main(){
	int k,w;
	long long int n; 
	cin>>k>>n>>w;

	long long int sum=0;

	for( int i=1; i<=w;i++){
		sum+=i*k;
	}

	long long int borrowMoney=sum-n;
	// cout<<borrowMoney;
	if(borrowMoney>0){
		cout<<borrowMoney;
	}
	else {
		cout<<"0";
	}
}