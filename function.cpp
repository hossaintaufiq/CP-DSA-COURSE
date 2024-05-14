#include<bits/stdc++.h>
using namespace std; 



long long int factorial_numbers(long long int n){
	if(n==0){
		return 1;
	}
	long long int ans = factorial_numbers(n-1);
	return ans*n;
	}


int main(){
	long long int n; 
	cin>>n; 

	long long int result= factorial_numbers(n);
	cout<<result;
}