#include<bits/stdc++.h>
#include<string>
using namespace std ;

// void print_vowels(string s){

	
// 	cout<<s;
// }

int main(){

	int row,col;
	cin>>row>>col;

	int a[row][col];

	for(int i=0;i<row;i++){
		for(int j=0;i<col;j++){
			cin>>a[i][j];
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;i<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}