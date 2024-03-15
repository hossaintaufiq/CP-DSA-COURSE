// #include <iostream>
// using namespace std;

// int main() {
//     long long int A, B, C, D;
//     cin >> A >> B >> C >> D;

//     if (A == 1) {
//         // If A is 1, compare B with C * D
//         if (B > C * D) {
//             cout << "YES";
//         } else {
//             cout << "NO";
//         }
//     } else if (C == 1) {
//         // If C is 1, compare D with A * B
//         if (D > A * B) {
//             cout << "YES";
//         } else {
//             cout << "NO";
//         }
//     } else {
//         // Regular comparison
//         if (A * B > C * D) {
//             cout << "YES";
//         } else {
//             cout << "NO";
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int X, Y;
//     cin >> X >> Y;

//     // Summation
//     cout << X << " + " << Y << " = " << X + Y << endl;

//     // Multiplication
//     cout << X << " * " << Y << " = " << (long long)X * Y << endl;

//     // Subtraction
//     cout << X << " - " << Y << " = " << X - Y << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     long long int A, B, C, D;
//     cin >> A >> B >> C >> D;

//     // Calculate the difference2 3 4 5
//     long long difference = (A * B) - (C * D);

//     // Print the result
//     cout << "Difference = " << difference << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

// Custom exponentiation function for integers
long long int power(long long int base, long long int exponent) {
    long long int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

int main() {
    int A, C;
    long long int B, D;
    cin >> A >> B >> C >> D;

    // Compare exponents directly
    if (B > D && A > 1) {
        cout << "YES";
    } else if (B < D && C > 1) {
        cout << "YES";
    } else if (A == C && B == D) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}