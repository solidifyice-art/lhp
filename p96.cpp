#include <bits/stdc++.h>

using namespace std;

const long long max = 10000000;
long long c[max + 5];

int main() {
    long long n;
    if (!(cin >> n)) return 0;
    int mf = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        c[x]++;
        if (c[x] > mf) {
            mf = c[x];
        }
    }
    cout << mf;
    return 0;
}
