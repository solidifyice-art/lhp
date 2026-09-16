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

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long t;
    t = ucln(a, b);
    cout << ucln(t, c);
    return 0;
}
