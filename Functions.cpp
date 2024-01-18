#include<bits/stdc++.h>
using namespace std;



void printHello(){
	cout<<"hello world ";
}

	int sum(int a, int b){
		int result=a+b;
		return result;
	}


int main(){
	// printHello();
	// cout<<endl<<sum(3,4);

	int a =4 ; 
	int b=6; 
	cout<<a<<" "<<b<<endl;

	swap(a,b);

	cout<<a<<" "<<b<<endl;
	cout<<max(a,b)<<endl;
	cout<<min(a,b)<<endl;
}