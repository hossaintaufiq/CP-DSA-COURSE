#include <iostream>
using namespace std;

int main() {
    long long int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (A == 1) {
        // If A is 1, compare B with C * D
        if (B > C * D) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else if (C == 1) {
        // If C is 1, compare D with A * B
        if (D > A * B) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        // Regular comparison
        if (A * B > C * D) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    return 0;
}