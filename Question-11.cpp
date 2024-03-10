#include<iostream> 
using namespace std; 

int main(){
	float temp[7];
	float humedity[7];


	float x=0;
	float y=0; 
	float ave_temp;
	float ave_humedity;


	// taking temperature input
	for(int i=0; i<7; i++){
		cin>>temp[i];
	}
	// taking humedity input
	for(int i=0; i<7; i++){
		cin>>humedity[i];
	}

	// calcutaing average temperature
	cout << "" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << temp[i] << " ";
        x+=temp[i];
    }

    // calcutaing average humedity
	cout << "" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout <<  humedity[i] << " ";
        y+= humedity[i];
    }


    cout<<endl<<"The average temperature: ";
    ave_temp=x/7;
    cout<<endl<<ave_temp<<endl;
    cout<<"The average humedity is : ";
    ave_humedity=y/7;

    
    cout<<endl<<ave_humedity; 
}