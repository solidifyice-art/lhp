#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, a;
    cin >> n;
    if (n % 3 == 0) { a = 7 * (n / 3); }
    if (n % 3 == 1) { a = 7 * ((n / 3) - 1) + 4; }
    if (n % 3 == 2) { a = 7 * (n / 3) + 1; }
    cout << a;
    return 0;
}

