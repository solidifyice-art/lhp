#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    double s = 0.0;
    double t = 1.0;
    for (int i = 1; i <= n; ++i) {
        t = t * x / i;
        s += t;
    }
    cout << fixed << setprecision(2) << s;
    return 0;
}
