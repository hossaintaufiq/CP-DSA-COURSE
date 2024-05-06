#include<bits/stdc++.h>
using namespace std; 

void acending(int *a){
	
	for(int i=0;i<2;i++){
		// cout<<a[i]<<" ";
		for(int j=i+1;j<3;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}

	}
	

	for(int i=0;i<3;i++){
		cout<<a[i]<<" ";
	}

}

int main(){
	int a[3];
	// int n=3;
	for(int i=0;i<3;i++){
		cin>>a[i];
	}

	acending(a);

	cout<<endl;

	for(int i=0;i<3;i++){
		cout<<a[i]<<" ";
	}
}