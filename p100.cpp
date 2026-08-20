// This is wrong, according to LHPCoder. Struggling to find the issue???
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    long long n, m, x;
    cin >> n >> m;
    long long a[n];
    long long b[m];
    for(int i = 0; i < n; i++){
        cin >> x;
        a[i] = x;
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        b[i] = x;
    }
    long long t = 0; long long i = 0;
    while(t < m) {
        if(find(a, a + n, b[t]) != a + n) cout << b[t] << "\n";
        t++;
    }
    return 0;
}
