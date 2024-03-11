// problem 68  

#include<bits/stdc++.h>
using namespace std; 

int main(){

	string text; 

	// getting a line of text input from the user 
	getline(cin,text);


// using transfer function to convert each character of the string 
	transform(text.begin(),text.end(),text.begin(),::toupper);

	cout<<text<<endl;


}