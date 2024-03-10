//headline : question 60(add two binary numbers)

#include<bits/stdc++.h>
using namespace std; 

int main (){
 long bn1, bn2; 
 int i=0, r =0; 
 int sum[20];

  cout << "\n\n Addition of two binary numbers:\n"; // Displaying the purpose of the program
    cout << "-----------------------------------\n";
    cout << " Input the 1st binary number: ";
    cin >> bn1; // Taking input for the first binary number
    cout << " Input the 2nd binary number: ";
    cin >> bn2; // Taking input for the second binary number

    // Loop to add binary digits
    while (bn1 != 0 || bn2 != 0) {
        // Adding binary digits and remainder, storing the sum
        sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
        r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
        bn1 = bn1 / 10; // Moving to the next digit in the first  binary number
        bn2 = bn2 / 10; // Moving to the next digit in the second binary number
    }

    if (r != 0) { // Checking if there's a remaining carry
        sum[i++] = r; // Adding the remaining carry to the sum
    }

    --i; // Decrementing the index to reach the end of the sum array

    cout << " The sum of two binary numbers is: ";
    while (i >= 0) { // Loop to print the sum of binary numbers
        cout << (sum[i--]); // Printing each digit of the sum
    }
    cout << ("\n");  


}