#include <iostream>

using namespace std;

int main() {
  int x; 
  cin>>x; 
  int a[x];
  for(int i=0;i<x; i++){
    cin>>a[i];
  }


  for(int i=0;i<x; i++){
    
    if(a[i]>0){
        a[i]= 1;
    }
    else if(a[i]<0){
        a[i]=2;
    }
  }


  for(int i=0; i<x; i++){
    cout<<a[i]<<" ";
  }
}
