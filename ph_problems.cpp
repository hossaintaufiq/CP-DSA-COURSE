#include<bits/stdc++.h>

using namespace std; 


int main() {

	long long int x,y; 

	cin>>x>>y; 

	int x_last_digit= x%10;
	int y_last_digit= y%10;

	int sum= x_last_digit+y_last_digit;

	cout<<sum;
}