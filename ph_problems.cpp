#include<bits/stdc++.h>

using namespace std; 

int main(){
	int n;

	int x,y;

	cin>>n; 
	x=n%10;
	y=n/10;

	if(x%y==0 || y%x==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}