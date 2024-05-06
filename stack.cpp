#include<bits/stdc++.h>
using namespace std ;

// void fun(int a[],int n,int i ){

// 	if(i==n){
// 		return;
// 	}

// 	cout<<a[i]<<" ";
// 	fun(a,n,i+1);
	
// }

// void print(int i ){
// 	if(i==6) return;

// 	print(i+1);
// 	cout<<i<<endl;
// }

int main(){
	// int n ; 
	// cin>>n; 
	// int a [n];

	// for(int i =0;i<n; i++){
	// 	cin>>a[i];
	// }
	// int i=0;

	// fun(a,n,i);

	// print(1);


	int row, colom;
	cin>>row >>colom;
	int a[row][colom];
	int total_zero=row*colom;

	for(int i=0;i<row;i++){
		for(int j=0;j<colom;j++){
			cin>>a[i][j];
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<colom;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}

	cout<<endl;

	int count=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<colom;j++){
			// cout<<a[i][j];
			if(a[i][j]==0){
				count++;
			}
		}
		// cout<<endl;
	}

	if(count==total_zero){
		cout<<"Zero Matrix";
	}
	else {
		cout<<"Not Zero Matrix";
	}




}