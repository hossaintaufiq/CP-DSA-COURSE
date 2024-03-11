// #include <iostream> // Including input-output stream header file
// #include <sstream>  // Including stringstream header file for string manipulation
// using namespace std; // Using the standard namespace

// int main() { // Start of the main function
//     int x, y; // Declaring variables x and y to store integer inputs

//     while (cin >> x >> y) { // Loop to read integer inputs until the end of input (Ctrl+D in terminal)
//         stringstream str1; // Declaring a stringstream object 'str1' for string manipulation

//         str1 << x + y; // Adding integers x and y and storing the result as a string in stringstream 'str1'

//         cout << str1.str().size() << endl; // Printing the size (number of characters) of the resulting string
//     }

//     return 0; // Indicating successful completion of the program
// }



// #include <iostream>
// #include <cmath>

// int main() {
//     int num1, num2;
//     std::cout << "Enter the first integer: ";
//     std::cin >> num1;
//     std::cout << "Enter the second integer: ";
//     std::cin >> num2;

//     int sum = num1 + num2;

//     // Counting the number of digits in the sum
//     int count = 0;
//     int temp = abs(sum); // Taking absolute value to handle negative sums
//     while (temp != 0) {
//         temp /= 10;
//         count++;
//     }

//     std::cout << "Sum: " << sum << std::endl;
//     std::cout << "Number of digits in the sum: " << count << std::endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std; 

int main(){
	int x,y; 

	cin>>x>>y; 

	int sum=x+y; 

	int count=0; 
	int temp= abs(sum);

	while(temp!=0){
		temp/=10;
		count++;
	}

	cout<<count;



}