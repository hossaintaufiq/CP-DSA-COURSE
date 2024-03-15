#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long int A, B, C, D;

    cin >> A >> B >> C >> D;

    if (A >= 2 && B >= 2 && C >= 2 && D >= 2) {
        // Calculate the last two digits of each number
        int last_digits_A = A % 100;
        int last_digits_B = B % 100;
        int last_digits_C = C % 100;
        int last_digits_D = D % 100;

        // Multiply the last two digits separately
        long long int last_two_digits_product = ((long long)last_digits_A * last_digits_B * last_digits_C * last_digits_D) % 100;

        // Output the result with leading zeros if necessary
        cout << setfill('0') << setw(2) << last_two_digits_product;
    }

    return 0;
}
