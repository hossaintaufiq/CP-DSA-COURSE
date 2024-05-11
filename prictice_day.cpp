#include<bits/stdc++.h>
using namespace std; 

// void recursion (int n,int i ){
	
// 	if(i==n+1){
// 		return;
// 	}
// 	recursion(n,i+1);
// 	cout<<i<<" ";
	
 
// }


void digits_of_numbers(long long int n ){

	if(n==0){

		return;

	}
	int x=n%10;
	digits_of_numbers(n/10);
	cout<<x<<" ";
}

int main(){

	int t; 
	cin>>t ; 

	while(t--){
		long  long int t; 
		cin>>t; 

		digits_of_numbers(t);
		if(t==0){
			cout<<"0";
		}
		cout<<endl;
	}





	// int row, colom; 
	// cin>>row>>colom;
	// int a[row][colom];
	// int b[row][colom];
	// int c[row][colom];

	// // for a matrix
	// for(int i=0;i<row;i++){
	// 	for(int j=0;j<colom;j++){
	// 		cin>>a[i][j];
	// 	}
	// }


	//   // for b matrix
	// for(int i=0;i<row;i++){
	// 	for(int j=0;j<colom;j++){
	// 		cin>>b[i][j];
	// 	}
	// }


	// // for c matrix

	// for(int i=0;i<row;i++){
	// 	for(int j=0;j<colom;j++){
	// 		c[i][j]=a[i][j]+b[i][j];
	// 	}
	// }





	// // for printing value

	// for(int i=0;i<row;i++){
	// 	for(int j=0;j<colom;j++){
	// 		cout<<c[i][j]<<" ";
	// 	}
	// 	cout<<endl;                                                                                                                         
	// }



}