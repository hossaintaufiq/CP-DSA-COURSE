#include <iostream>
using namespace std;

int main(){
    int marks;
    // cout<<"Enter Your Marks: ";
    cin>>marks;
    if (marks >= 90){
        cout<<"A+";
    }
    else if (marks >= 85){
        cout<<"A";
    }
    else if (marks >= 80){
        cout<<"B+";
    }
    else if (marks >= 75){
        cout<<"B";
    }
    else if (marks >= 70){
        cout<<" C+";
    }
    else if (marks >= 65){
        cout<<" C";
    }
    else if (marks >=60 ){
        cout<<"D+";
    }
    else if (marks >=50){
        cout<<" Your grade is : D";
    }
    else if (marks <50){
        cout<<"F";
    }
    else{
        cout<<"Enter Valid Marks";
    }
    return 0;
}

