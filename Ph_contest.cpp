#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n; 

	cin>>n; 
	int count=0;

	for(int i=1;i<=n;i++){
		// cout<<i<<endl;
		if(i%2==0){
			cout<<i<<endl;
			count++;
		}
		
	}

	if(count==0){
		cout<<"-1";
	}

}