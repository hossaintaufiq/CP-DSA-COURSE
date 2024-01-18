#include<bits/stdc++.h>
using namespace std; 

int main(){
	string c; 
	getline(cin,c);

	for(int i=0;i<c.size();i++){
		int s=c[i];
		if(islower(s)){
			c[i]=toupper(s);
		}

		if(c[i]==' '){
			cout<<endl;
		}

		if(c[i]== ' '){
			continue;
		}
		cout<<c[i];

	}

	
}