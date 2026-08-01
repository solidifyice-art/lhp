#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n;
    t = 1;
    while (t <= 10) {
        cout << n << "x" << t << "=" << n*t << "\n";
        t++;
    }
    return 0;
}
