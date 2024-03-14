#include<bits/stdc++.h>

using namespace std; 


int main() {
	double x,y;
	cin>>x>>y;

	double number= x/y;

	double ceilValue = ceil(number); 
    double floorValue = floor(number); 
    double roundValue = round(number);


    cout<< "floor "<<x<<" / "<<y<<" = "<<floorValue<<endl;
    cout<< "ceil "<<x<<" / "<<y<<" = "<<ceilValue<<endl;
    cout<< "round "<<x<<" / "<<y<<" = "<<roundValue<<endl;

    

}