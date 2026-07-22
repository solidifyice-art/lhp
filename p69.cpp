#include <bits/stdc++.h>

using namespace std;

long long n, c, t;

int main() {
    cin >> n; c = 1; t = 0;
    while (c <= n) {
        if (c % 3 == 0 || c % 5 == 0) {
            t += c;
        }
        c++;
    }
    cout << t;
}
