#include<bits/stdc++.h>
using namespace std; 

// int main(){
// 	int x ;
// 	int sum=0;

// 	sum=x+x;
// 	// number of itreation 3 
// 	// o(3);
// }
const int N = 10e5+10;
long long int fact[N];

int main(){
	// int x ;// itreation 1 
	// int sum =0; // iteration 2 
	// sum = x+x ; 

	// int n; 
	// cin>> n ; //iteration 5 

	// for(int i ; i<n;++i){
	// 	// n time iteration 
	// } 


	// total itreation =O(5)+O(n)=O(n);

	// int 0!=1!;


	// int n ; 
	// cin>> n ; 

	// long long factorial =1; 

	// for( int i =2;i <=n; ++i){
	// 	factorial*=i; 

	// }

	// cout<< factorial<< endl ;


	//  factorial with hashing 


	fact[0]=fact[1]=1; 

	for( int i=2; i<N; ++i){
		fact[i]=fact[i-1]*i;
	}

	int t; 
	cin>>t;
	while (t--){
		int n ; 
		cin>>n ; 
		cout<<fact[n]<<endl ;
	}
}
