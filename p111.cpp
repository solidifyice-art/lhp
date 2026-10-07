#include <bits/stdc++.h>

using namespace std;

int p(long long n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    long long a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    long long l = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(p(a[i][j])) {
                l += 1;
            }
        }
    }
    cout << l;
    return 0;
}
