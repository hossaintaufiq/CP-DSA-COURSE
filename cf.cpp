#include<bits/stdc++.h>
using namespace std;

void acending(int* a[]){
     for(int i=0;i<3-1; i++){
        for(int j=i+1;j<3;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int j=0;j<3;j++){
        cout<<a[j]<<" ";
    }


}


int main()
{

    // int n;  
    // cin>>n ;
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
         // acending(a[i]);
    }

    acending(a[3]);

    // for(int i=0;i<3-1; i++){
    //     for(int j=i+1;j<3;j++){
    //         if(a[i]>a[j]){
    //             int temp=a[i];
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }

    //  for(int i=0;i<3;i++){
    //     cout<<a[i]<<" ";
    // }

    cout<<endl;

    // decending array 
    //   for(int i=0;i<3-1; i++){
    //     for(int j=i+1;j<3;j++){
    //         if(a[i]<a[j]){
    //             int temp=a[i];
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }

     for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }
    



}




// int t;
    // long long int a,b;
    // cin>>t;
    // while(t--)
    // {
    //     int div=0,pls=0;
    //     cin>>a>>b;
    //     if(a%b==0){
    //         cout<<0<<endl;
    //         continue;
    //     }

    //     div=a/b;
    //     pls=(div+1)*b;
    //     cout<<pls-a<<endl;