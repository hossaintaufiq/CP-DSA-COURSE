// question 61: swapint the fist ans last digits of a number ;


#include<bits/stdc++.h>


using namespace std ; 

int main (){
	int n; 
	cin>>n;  

	// log10(n) = total number of digits -1; 

	int digits= (int)log10(n);

	cout<<digits;
}