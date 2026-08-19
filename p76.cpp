#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    long long mx = pow(10, n) - 1;
    long long mn = pow(10, n - 1);
    long long mp = 0;

    for (long long i = mx; i >= mn; i--) {
        if (i * i < mp) break;

        for (long long j = i; j >= mn; j--) {
            long long p = i * j;
            if (p <= mp) break;
            long long t = p, r = 0;
            while (t > 0) {
                r = r * 10 + (t % 10);
                t /= 10;
            }

            if (p == r) {
                mp = p;
            }
        }
    }
    cout << mp << endl;
    return 0;
}
