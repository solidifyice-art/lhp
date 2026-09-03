#include <bits/stdc++.h>

using namespace std;

int main() {
    double n, x, s, t;
    cin >> n >> x;
    s = 0.0;
    t = 1.0;
    while (t <= n) {
        s = sqrt(x + s);
        t++;
    }
    cout << fixed << setprecision(2) << s;
    return 0;
}
