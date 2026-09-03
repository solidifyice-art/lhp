#include <bits/stdc++.h>

using namespace std;

int main() {
    long long y, t, x, total;
    cin >> y;
    long long n[y];
    t = 0;
    for(int i = 0; i < y; i++){
        cin >> x;
        n[i] = x;
    }
    while (t <= y - 1) {
        if (n[t] < 0) {
            n[t] = 0;
        }
        t++;
    }
    t = 0;
    while (t < y) {
        cout << n[t] << " ";
        t++;
    }
    return 0;
}
