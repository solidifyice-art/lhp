#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    long long n, m, x;
    cin >> n >> m;
    long long a[n];
    long long b[m * 2];
    for(int i = 0; i < n; i++) {
        cin >> x;
        a[i] = x;
    }
    for(long long i = 0; i < m * 2; i++) {
        cin >> x;
        x--;
        b[i] = x;
    }
    for(long long i = 0; i < m * 2; i += 2) {
        swap(a[b[i]], a[b[i + 1]]);
    }
    for(long long i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
