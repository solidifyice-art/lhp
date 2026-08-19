#include <bits/stdc++.h>

using namespace std;

int main() {
    double n, x, s, t;
    cin >> n >> x;
    s = x;
    t = 2.0;
    while (t <= n) {
        s += (x/t);
        t++;
    }
    cout << fixed << setprecision(2) << s;
    return 0;
}
