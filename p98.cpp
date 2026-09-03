#include <bits/stdc++.h>

using namespace std;

int main() {
    long long y, t, x;
    cin >> y;
    long long n[y];
    t = 0;
    for(long long i = 0; i < y; i++){
        cin >> x;
        n[i] = x;
    }
    long long h1, h2;
    h1 = 0; h2 = 0;

    for (long long i = 0; i < y / 2; i++) {
        h1 += n[i];
    }

    for (long long i = y / 2; i < y; i++) {
        h2 += n[i];
    }

    cout << h2 - h1;
    return 0;
}
