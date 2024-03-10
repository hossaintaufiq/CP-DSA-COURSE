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




// leadcodde problem 


// class Solution {
// public:
//     string addBinary(string a, string b) {
//         sting res; 
//         int i =a.size()-1, j=b.size()-1;
//         int sum, carry=0;

//         while(i>=0 || j>=0){
//             sum=carry; 
//             if(i>=0){
//                 sum+= a[i] -'0';
//             }
//             if(j>=0){
//                 sum+= b[j] -'0';
//             }
//             res+= to_string(sum%2);
//             carry= sum/2;
//             i--;j--;

//         }

//         if(carry!=0) res+='1';

//         reverse(res.begin(), res.end());
//         return res;
//     }
// };