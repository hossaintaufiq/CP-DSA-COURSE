// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
// 	int n,x; 
// 	cin>>n>>x;

// 	int a[n];
// 	int count=0;

// 	for(int i=0;i<n; i++){
// 		cin>>a[i];
// 	}

// 	for(int j=0;j<n;j++){
// 		if(a[j]>x){
// 			count++;
// 		}	
// 	}

// 	cout<<count;

// 

#include <iostream>

using namespace std;

int main()
{
    int n, k;
   cin >> n >> k;

    int a;
    for (int i = 0; i < k; ++i)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; ++i)
    {
        cin >> b;
        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}