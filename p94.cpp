#include <bits/stdc++.h>

using namespace std;

int main() {
    long long y, t, x;
    cin >> y;
    long long n[y];
    t = 0;
    for(int i = 0; i < y; i++){
        cin >> x;
        n[i] = x;
    }
    long long total = 0;
    while (t < y) {
        if (n[t] % 3 == 1) {
            total++;
        }
        t++;
    }
    cout << total;
    return 0;
}
