#include<bits/stdc++.h>
using namespace std ;

void fun(int i ){
	cout<<i;

	fun(i+1);
}

int main(){
	fun(1);
}