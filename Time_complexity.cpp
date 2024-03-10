#include<bits/stdc++.h>
using namespace std ; 

const int num=10e7+100;
int hash[num];


int main(){
	int n; cin>>n ; int a[n];
	for( int i=1; i<=n; i++){
		cin>>a[i];
		hash[a[i]]++;
	}

	int q;cin>>q ; 
	while(q--){
		int q1; cin>>q1;
		cout<<hash[q1]<<endl;
	}


}