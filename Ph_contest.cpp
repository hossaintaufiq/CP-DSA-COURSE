#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << "0";
        return 0;
    }

    int fib[N];
    fib[0] = 0;
    fib[1] = 1;

    cout << fib[0] << " " << fib[1] << " ";

    for (int i = 2; i < N; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << " ";
    }

    return 0;
}



// old code 

// #include <iostream>
// using namespace std;

// int fib(int n) {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }

// int main() {
//     int N;
//     cin >> N;

//     for (int i = 0; i < N; ++i) {
//         cout << fib(i) << " ";
//     }

//     return 0;
// }