// question 61: swapint the fist ans last digits of a number ;


#include<bits/stdc++.h>


using namespace std ; 


	class employee{
	public: 
		string name; 
		int salary; 

	}; 


int main (){
	int n; 
	cin>>n;  

	// log10(n) = total number of digits -1; 

	int digits= (int)log10(n);

	cout<<digits;



	employee har; 
	har.name= " harry";
	har.salary = 100; 

	cout<<"The name of our 1st emplyee is : "<<har.name<<" and his salary is : "<< har.salary;
	




}