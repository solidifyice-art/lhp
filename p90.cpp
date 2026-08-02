#include <bits/stdc++.h>

using namespace std;

int main() {
    long long y, t, x, total;
    cin >> y;
    long long n[y];
    t = 1;
    for(int i = 0; i < y; i++){
        cin >> x;
        n[i] = x;
    }
    total = 0;
    while (t <= y - 1 && t % 2 == 1) {
        if (n[t] % 2 == 1) {
            total += n[t];
        }
        t += 2;
    }
    cout << total;
    return 0;
}
