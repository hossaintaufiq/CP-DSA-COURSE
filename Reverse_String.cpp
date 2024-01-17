#include<bits/stdc++.h>
using namespace std; 

int main(){
	int t; 
	cin>>t; 
	cin.ignore();//use for buffer or we can say it's use for moving the cursor to the next line; 
	while(t--){
		string x;
		getline(cin,x);
		// cin>>x;
		string reverse_str;
		for(int i=x.size(); i>=0;--i){
			// reverse_str+=x[i];
			reverse_str.push_back(x[i]);//push back function use as adding character ll

		}

		// cout<<reverse_str<<endl;

		// for palindrom string  start 
		if(x == reverse_str){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}

		cout<<endl;




		// palindrom string ends 
			}
}