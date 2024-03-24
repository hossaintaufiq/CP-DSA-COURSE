#include <iostream>
using namespace std;

void printPyramid(int N) {
    // Loop through each row
    for (int i = 1; i <= N; ++i) {
        // Print spaces
        for (int j = 0; j < N - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
      for (int i = 1; i <= N; ++i) {
        // Print spaces
        for (int j = N - i; j <=N ; ++j) {
            cout << " ";
        }
        // Print stars
        for (int j = 2 * i - 1; j <= N; ++j) {
            cout << "*";
        }
        cout << endl;
    }
 
}

int main() {
    int N;
    // Read input
    cin >> N;
    // Print pyramid
    printPyramid(N);
    return 0;
}
