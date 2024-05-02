#include<bits/stdc++.h>
using namespace std; 

// #define LOG(x) cout<<x<<endl;

int main(){

    int n; 
	cin>>n; 
	string ar;
	cin>>ar;

	 long int sum=0;
	for(int i=0;i<n;i++){
		// cin>>ar[i];
		// cout<<ar[i]<<endl;
		sum+=(ar[i]-48);
	}

	cout<<sum;


	// for(int i=0;i<n;i++){
	// 	// cout<<ar[i]<<endl;
	// }



	

 // string copy , concatinate and count string letters 
	// char a[100];
	// string a ;
	// cin>>a;

	// int count[26]={0};

	// for(int i=0;i<a.length();i++ ){
	// 	int value = a[i]-'a';
	// 	count[value]++;
	// }

	// for(int i=0;i<26;i++){
	// 	if(count[i]!=0){
	// 		cout<<(char)(i+'a')<<" : "<<count[i]<<endl;
	// 	}
		
	// }


	// int N,M ; 

	// cin>>N>>M; 

	// int ar[N];

	// for(int i=0;i<N; i++){
	// 	cin>>ar[i];
	// }

	// int count[M+1]={0};

	// for(int i=0;i<N;i++){
	// 	count[ar[i]]++;
	// }

	// for(int i=1;i<M+1; i++){
	// 	cout<<count[i]<<endl;
	// }




}