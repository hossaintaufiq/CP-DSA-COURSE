// time complexity and space complexity

// basic cpp and problems

#include<bits/stdc++.h>
using namespace std; 

int main(){
	long bn1, bn2; 
	int i=0,r=0;
	int sum[20];


	cout<<"Input the 1st binary number: "<<endl;
	cin>>bn1; 
	cout<<"Inpurt the 2nd binary number: "<<endl;
	cin>>bn2;


	while(bn1!=0 || bn2!=0){
		// adding binary digits and remainder, storing the sum 
		sum[i++]= int((bn1%10 + bn2%10+r)%2);
		r=(int)((bn1%10 + bn2% 10 +r)/2);
		bn1=bn1/10;
		bn2=bn2/10;

	}

	if(r!=0){
		sum[i++]=r;
	}

	--i;

	cout<< "The sum of two binary is : ";
	while(i>=0){
		cout<< sum[i--];
	}

	cout<<"\n";

}