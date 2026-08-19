#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, o, a;
    cin >> n;
    o = 1;
    a = 2;
    while (o <= n) {
        a = a * 2;
        o++;
    }
    cout << a / 2;
    return 0;
}
