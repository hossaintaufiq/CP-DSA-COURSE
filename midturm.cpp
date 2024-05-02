#include<bits/stdc++.h>
using namespace std ; 

int main(){
	// int t ;
	// cin>>t; 
	// while(t--){
	// 	int a[3];
		
	// 	for(int i=0;i<3;i++){
	// 		cin>>a[i];
	// 	}

	// 	int multiplication;
	// 	int devide;
	// 	for(int i=0;i<3;i++){
	// 		multiplication=a[0]*a[2];
	// 		devide=multiplication/(a[1]+a[0]);
	// 	}

	// 	int result=a[2]-devide;
	// 	cout<<result<<" ";

	// }


// count me 4 question solve 

	// string s; 
	// cin>>s; 

	// int count[26]={0};

	// for(int i=0; i<s.length();i++){
	// 	s[i]=s[i]-97;
	// 	count[s[i]]++;
	// }


	// for(int i=0;i<26;i++){
		
	// 		if(count[i]!=0){
	// 			cout<<(char)(i+97)<<" - "<<count[i]<<endl;
	// 		}
		
	// }



	// tell me problem


	int t ; 
	cin>>t; 

	while(t--){
		int N;
		cin>>N;

		long long int a[N];

		for(int i=0;i<N;i++){
			cin>>a[i];
		}
		long long int x ;
		cin>>x;

		bool flag=false;
		for(int i=0;i<N;i++){
			if(a[i]==x){
				flag=true;
			}
			

		}

		if(flag==true){
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}




	}

}
