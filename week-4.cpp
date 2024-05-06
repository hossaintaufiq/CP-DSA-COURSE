#include<bits/stdc++.h>
using namespace std; 

int main(){
	// int n,s,k,x,y;  
	// cin>>n ; 
	// k=n-1;s=1;
	// x=1;y=n;

	// for(int i=0;i<2*n-1;i++){
		
	// 		for(int j=0;j<k;j++){
	// 		cout<<" ";
	// 	}
	// 	// k--;
	// 	for(int l=0;l<s;l++){
	// 		cout<<"*";
	// 	}
	// 	// s=s+2;
		


	// 	if(i<n-1){
	// 		k--;
	// 		s=s+2;
	// 	}
	// 	else {
	// 		k++;
	// 		s=s-2;
	// 	}



		// else{

		// 		for(int j=0;j<k;j++){
		// 	cout<<" ";
		// }
		// k++;
		// for(int l=0;l<s;l++){
		// 	cout<<"*";
		// }
		// s=s-2;
		// }






		


		// cout<<endl;
		
		// }


	// int n ; 
	// cin>>n ; 

	// int a[n];

	// for(int i=0;i<n; i++){
	// 	cin>>a[i];

	// }
	// int x; 
	// cin>>x; 

	// bool flag=false;
	// for(int i=0;i<n-1;i++){
	// 	for(int j=i+1;j<n;j++){
	// 		// if(a[i])
			
	// 		if(a[i]+a[j]==x)
	// 		{
	// 			// cout<<i<<" "<<j<<endl;
	// 			flag=true;
	// 			// break;
	// 		}
	// 	}
	// }

	// if (flag){
	// 	cout<<"YES";
	// }
	// else{
	// 	cout<<"NO";
	// }



	// sorting (selection sorting )

	int n; 
	cin>>n; 

	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n; j++){
			if(a[i]<a[j]){


				
				int temp=a[i];

				a[i]=a[j];

				a[j]=temp;
				
				// continue;
			}
		}
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}





	
	
} 