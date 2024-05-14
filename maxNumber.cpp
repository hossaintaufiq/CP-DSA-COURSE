#include<bits/stdc++.h>
using namespace std ;


int maximum (int a[],int n, int i){
	if(i==n){
		return INT_MIN;
	}
	int mx=maximum(a,n,i+1);
	if(a[i]>mx){
		return a[i];
	}
	else{
		return mx;
	}

}

int main(){
	int n; 
	cin>>n; 

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int max=maximum(a,n,0);
	cout<<max;

	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
}