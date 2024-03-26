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

#include<bits/stdc++.h>
using namespace std ; 

int main(){
	int t; 
	cin>>t;

	while(t--){
		int x,y; 
		cin>>x>>y; 


		if(x==y){
			cout<<"Square"<<endl;
		}
		else{
			cout<<"Rectangle"<<endl;
		}
	}


}