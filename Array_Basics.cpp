#include<bits/stdc++.h>
using namespace std;

// const int array[row][col];// globally decleard array limit 10e7

int main(){

	int t ;
	cin>>t;
	while(t--){
	int row, col;
	cin>> row>>col ;

	int array[row][col]; //locally decleared array limit 10e5;

	

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>> array[i][j];
		}

	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<< array[i][j]<<" ";
		}
		cout<<endl;
	}
}



}