// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	int t; 
// 	cin>>t; 
// 	while(t--){
// 		string s,a; 
// 		cin>>s ;
		
// 		for(int i=0; i<2;i++){
// 			a[i]=s[i];
// 		}
		

// 		cout<<a<<endl;

		
// 	}
// }
// #include <iostream>


// last code starts 


// #include<bits/stdc++.h>
// #include <string>

// using namespace std;

// void hashprint(){
// 	for(int i=0;i<2;i++){
// 		for (int j = 0; j< 2; j++)
// 		{
// 			cout<<"#";
// 		}
// 		cout<<endl;
// 	}
// 	// // return;

// 	// cout<<"Taufiq";
// }

// void dotin(){
// 	for(int i=0;i<2;i++){
// 		for (int j = 0; j< 2; ++j)
// 		{
// 			cout<<".";
// 		}
// 		cout<<endl;
// 	}
// }

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
        
//         for(int i=1;i<=n*2;i++ ){
//         	for(int j=1;j<=n*2;j++){
//         		// if(i%2!=0 &&)
//         		if((j)%2!=0){
//         			dotin();
//         		}
//         		else
//         		hashprint();
//         	}
//         	cout<<endl;
//         }
//     }
    
//     // return 0;

// }



// new code

// #include<bits/stdc++.h>
// #include<string>
// using namespace std ; 

// int main(){
// 	long long int n; 
// 	cin>>n; 

// 	string s;
// 	s= to_string(n);
// 	int count=0;

// 	for(int i=0;i<s.length();i++){
// 		if(s[i]=='4' || s[i]=='7'){
// 			count++;

// 		}
		


// 	}

// 	if(count == 4 || count ==7){

// 		cout<<"YES";
// 	}
// 	else{
// 			cout<<"NO";
// 			// break;
// 		}

	
	
// }

#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n,anton=0, danik=0; 
	cin>>n ; 

	string s; 

	cin>>s; 

	for(int i=0;i<n;i++){
		if(s[i]=='A'){
			anton++;
		}
		else if(s[i]=='D'){
			danik++;
		}

	}


	if(anton>danik){
		cout<<"Anton";
	}
	else if(anton<danik){
		cout<<"Danik";
	}
	else if(anton == danik){
		cout<<"Friendship";
	}
}
