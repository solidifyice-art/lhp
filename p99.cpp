#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    long long n, x, ma;
    cin >> n;
    ma = 0;
    long long a[n];
    for(int i = 0; i < n; i++) {
        cin >> x;
        a[i] = x;
        ma = max(ma, x);
    }
    long long m, mb;
    cin >> m;
    mb = 0;
    long long b[m];
    for(int i = 0; i < m; i++) {
        cin >> x;
        b[i] = x;
        mb = max(mb, x);
    }
    cout << ma << " " << mb;
    return 0;
}
