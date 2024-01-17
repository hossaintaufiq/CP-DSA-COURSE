#include<bits/stdc++.h>
using namespace std; 

int main(){
	int t ; 
	cin>> t ; 
	cin.ignore();

	while(t--){
		string s ; 
		getline(cin, s);
		string str_reverse;
		for(int i=s.size();i>=0;--i){
			str_reverse+=s[i];

		}
		cout<<str_reverse<<endl;
	}

}