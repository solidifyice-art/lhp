#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, o;
    cin >> n;
    o = 1;
    n = abs(n);
    while (n > 0) {
        o *= n % 10;
        n /= 10;
    }
    cout << o;
    return 0;
}
