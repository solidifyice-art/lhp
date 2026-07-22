#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n <= 2) {
        cout << n;
        return 0;
    }

    long a = 1, b = 2;
    for (long i = 3; i <= n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }

    cout << b;
}
