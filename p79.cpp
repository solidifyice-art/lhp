#include <bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool stphh(long long a, long long b) {
    if (b == 0) return false;
    // long long ucln = ucln(a, b);
    b /= ucln(a, b);
    while (b % 2 == 0) {
        b /= 2;
    }
    while (b % 5 == 0) {
        b /= 5;
    }
    return b == 1;
}

int main() {
    long long a, b;
    cin >> a >> b;
    if (stphh(a, b) == 1) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
