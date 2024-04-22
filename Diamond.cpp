#include<bits/stdc++.h>
using namespace std; 

class parent{
public: 
	parent(){
		cout<<"parent class"<<endl;
	}
};

class child1:public parent{
public: 
	child1(){
		cout<<"child1"<<endl;
	}
};

class child2: public parent{
public: 
	child2(){
		cout<<"child2"<<endl;
	}
};

class grandchild:public child1, public child2{
public: 
	grandchild(){
		cout<<"grandchild"<<endl;
	}
};

int main(){
	grandchild c ; 
}