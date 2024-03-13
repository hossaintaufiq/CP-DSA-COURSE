#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n, k, a;
    cin >> n >> k >> a;

    double result = (n * k )/a;

    if (result <= 2147483647 && result >= -2147483648 && floor(result) == result) {
        cout << "int" << endl;
    } else if (result <= 9223372036854775807 && result >= -9223372036854775808 && floor(result) == result) {
        cout << "long long" << endl;
    } else {
        cout << "double" << endl;
    }

    return 0;
}