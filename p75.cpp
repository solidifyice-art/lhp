#include <iostream>
using namespace std;

int main() {
    long long n, rn = 0, r, b = 0;
    cin >> n;
    b += n;
    while (n != 0) {
        r = n % 10;
        rn = rn * 10 + r;
        n /= 10;
    }
    if (b == rn) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
