#include<bits/stdc++.h>

using namespace std; 

void func(int i){
	func(i+1);
	func(i+2);
	func(i+3);
}
// the recurssion is going infinity and the website will give a runtime error or compilation error . 






int main(){
	func(0);
}
