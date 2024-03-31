// // #include <iostream>
// // #include<string>
// // using namespace std;

// // int main() {
// //  int n;
// //  cin>>n;
// //  string s;
// //  cin>>s;
// //  int r=0;
// //  int g=0;
// //  int b=0;
// //  for(int i=1;i<n;i++){
// //  	if(s[i-1]==s[i])
// //  	if(s[i]=='R')++r;
// //  	else if(s[i]=='G'){
// //  		++g;
// //  	}
// //  	else if(s[i]=='B')
// //  	++b;
// //  }
// //  cout<<r+g+b;
// //   	return 0;
// // }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,c=0;
//     cin>>a>>b;
//     if(a>b)
//         c=0;
//     else
//         while(a<=b)
//         {
//             a=a*3;
//             b=b*2;
//             c++;
//         }
//     cout<<c<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std ; 

// int main(){
// 	int t; 
// 	cin>>t;

// 	while(t--){
// 		int x,y; 
// 		cin>>x>>y; 


// 		if(x==y){
// 			cout<<"Square"<<endl;
// 		}
// 		else{
// 			cout<<"Rectangle"<<endl;
// 		}
// 	}


// }

// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	int n; 
// 	cin>>n; 

// 	int a[n];

// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}

// 	for(int i=n-1; i>=0; --i){
// 		cout<<a[i]<<" " ;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std ; 

// char lower(char a){
// 	char b; 
// 	b=tolower(a);
// 	return b; 
// }
// int main(){

// 	string s;
// 	cin>>s; 

// 	for(int i=0; i<s.length();i++){
// 		s[i]=lower(s[i]);

// 		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
// 			continue;

// 		}

// 		cout<<"." <<s[i];
// 	}

// }


#include<bits/stdc++.h>
using namespace std; 

int main(){
	long long int n;
	int k; 
	cin>>n>>k;

	for(int i=0;i<k;i++){
		if(n%10!=0){
			n=n-1;
		}
		else if(n%10==0){
			n=n/10;
		}
	}
	cout<<n;
}
