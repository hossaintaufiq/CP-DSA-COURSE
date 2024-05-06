#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Store the numbers in an array
    int numbers[] = {A, B, C};

    // Sort the numbers in ascending order
    sort(numbers, numbers + 3);

    // Print the sorted numbers
    for (int i = 0; i < 3; ++i) {
        cout << numbers[i] << endl;
    }
    cout << endl;

    // Print the numbers in the order they were read
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}
