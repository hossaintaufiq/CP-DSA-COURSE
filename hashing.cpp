// oop with cpp
#include<bits/stdc++.h>
#include<bitset>
using namespace std; 



// 
        class fruit{

        public:
        string name;
	    string color; 

              };
	

	 class rectangle{ 
	 public: 
	 	int l ;
	 	int b; 

	 	rectangle(){ //default constructor- no argument passes 
	 		l=0;
	 		b=0;
	 	}

	 	rectangle(int x, int y){ //parameterised constuctor - passing some parameter
	 		l=x;
	 		b=y;
	 	}

	 	rectangle(rectangle& r){ //copy constructor - initialise an obj by another existing obj
	 		l=r.l;
	 		b=r.b;
	 	}

	 	// destructor 

	 	~rectangle(){ //destructor function
	 		cout<<"destructor is called"<<endl;
	 	}


	 };

	 // encapsulation 

	 class abc{
	 	int x; // private to this class only 

	 	public: 
	 		void set(int n){
	 			x=n;
	 		}
	 		int get(){
	 			return x; 
	 		}
	 };

	 // inheritance 

	 class parent{
	 	public: 
	 		int x ;

	 	protected: 
	 		int y ;
	 	private: 
	 		int z; 
	 };


	 class child1: public parent{
	 	//x will remain public 
	 	// y will remain protected 
	 	// z will not be accessible 
	 };
	 class child2: private parent{
	 	// x will be privte;
	 	// y will be private 
	 	//z will not be accessible 
	 };



	 class child3: protected parent{
	 	// x will be protected 
	 	// y will be protected 
	 	// z will be inaccessible 
	 };

	 // inheritance \

	 class parents{
	 public: 
	 	parents(){
	 		cout<<"Parent class"<<endl;
	 	}
	 };

	 class parents2{
	 public:
	 	parents2(){
	 		cout<<"Parents 2 class"<<endl;
	 	}
	 };
	 class child:public parents,public parents2{
	 public: 
	 	child(){
	 		cout<<"child class "<<endl;
	 	}
	 };

	 class children:public parents{
	 public:
	 	children(){
	 		cout<<"another child class"<<endl;
	 	}
	 };
	 class grandChild:public child{
	 public: 
	 	grandChild(){
	 		cout<<"Grand child class"<<endl;
	 	}
	 	
	 };



int main(){
	
	
	fruit apple; //object
	apple.name="Apple";
	apple.color="red";

	cout<<apple.name<<" - "<<apple.color<<endl;


	// new methods 

	fruit*mango= new fruit();
	mango->name="mango";
	mango->color="yellow";

	cout<<mango->name<<" - "<<mango->color<<endl;



	rectangle*r1=new rectangle();

	cout<<r1->l<<" "<<r1->b<<endl;
	delete r1; 


	rectangle r2(3,4);
	cout<<r2.l<<" "<<r2.b<<endl;
 
	rectangle r3;
	cout<<r3.l<<" "<< r3.b<<endl;

	// encapsulation part

	abc obj1; 
	obj1.set(3);
	cout<<obj1.get()<<endl;

	// inheritance

	parent p; 

	p.x;

	// inheritance 
	grandChild gc; 
	children c; 



}