#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    long long l = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(j + 1 < m && a[i][j] == a[i][j+1]) {
                l += 1;
            }
            if(i + 1 < n && a[i][j] == a[i+1][j]) {
                l += 1;
            }
        }
    }
    cout << l;
    return 0;
}
