// #include<bits/stdc++.h>
// // #include<string>
// using namespace std; 

// int main(){
// 	string s,t; 

// 	cin>>s>>t; 

// 	reverse(s.begin(),s.end());

// 	if(s==t){
// 		cout<<"YES";
// 	}
// 	else {
// 		cout<<"NO";
// 	}



// }


// #include <iostream>
// #include<cmath>
// using namespace std;

// int main() {
// 	 int n;
// 	 cin>>n;
// 	 int capacity=0;
// 	 int stillnow=0;
// 	 for(int i=0;i<n;i++){
// 		 int a,b;
// 		 cin>>a>>b;
// 		 stillnow-=a;
// 		 stillnow+=b;
// 		 capacity=max(capacity,stillnow);

// 	 }
// 	 cout<<capacity;

// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std ; 

// int main (){
// 	int n,h;
// 	cin>>n>>h;

// 	int a[n];
// 	int sum=0;

// 	for(int i=0;i<n;i++){
// 		cin>>a[i];

// 		if(a[i]<= h){
// 			sum+=1;
// 		}

// 		else {
// 			sum+=2;
// 		}
// 	}

// 	cout<<sum;
// }

// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	int n; 
// 	cin>>n ; 

// 	int a[n];
// 	int count=0;

// 	for(int i=0;i<n; i++){
// 		cin>>a[i];

// 		if(a[i]==1){
// 			count++;
// 		}

// 	}

// 	if(count>0){
// 		cout<<"HARD";
// 	}
// 	else {
// 		cout<<"EASY";
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	int t,count=0 ; 
// 	cin>>t ;

// 	while(t--){
// 		int x,y; 
// 		cin>>x>>y;

// 		if(y-x>=2){
// 			count++;

// 		}

// 	}

// 	cout<<count;
// }


// #include<bits/stdc++.h>
// using namespace std ;
 

//  int main(){
//  	int n;
//  	cin>>n;

//  	double sum=0,answer=0;

//  	int a[n];
//  	for(int i=0;i<n;i++){
//  		cin>>a[i];

//  		sum+=a[i];
//  	}

//  	answer=sum/n;

//  	cout<<fixed<<setprecision(12)<<answer<<endl;


//  }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=4,c=0,dif=0;
//     long long int a[15];
//     for(int i=0; i<n; i++)
//         cin>>a[i];
//     sort(a,a+n);
//     for(int i=0; i<n; i++)
//         if(a[i]!=a[i+1])
//             c++;

//     cout<<n-c<<endl;
//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	int n=4,c=0, dif=0;

// 	long long int a[15];
// 	for(int i=0;i<n; i++){
// 		cin>>a[i];
// 		// sort(a,a+n);
// 	}

// 	sort(a,a+n);

// 	for(int i=0;i<n;i++){
// 		if(a[i]!=a[i+1]){
// 			c++;
// 		}
// 	}

// 	cout<<n-c;
// }

// #include<bits/stdc++.h>
// using namespace std ;

// int main(){
// 	int n; 
// 	cin>>n ;

// 	for(int i=1;i<=n;i++){

// 		if(i>1){
// 			cout<<"that ";
// 		}
// 		if(i%2==0){
// 			cout<<"I love ";
// 		}
// 		// else if(i==1)
// 		// 	cout<<"I love ";

// 		else 
// 		cout<<"I hate ";
		
// 	}

// 	cout<<"it";
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
// 	int t; 
// 	cin>>t; 

// 	while(t--){
// 		long long int a,b; 
// 		cin>>a>>b; 

// 		long long int remainder= a%b;

// 		long long int 
// 	}
// }

	for(int i=0;i<=10;i++){
		if(i%2==0){
			cout<<i;
		}
	}

		}