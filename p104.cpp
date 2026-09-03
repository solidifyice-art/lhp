// Did not worked yet, sorta

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    n--;
    int a[n];
    for(int i = 0; i <= n; i++) {
        cin >> x;
        a[i] = x;
    }
    sort(a, a + n);
    for(int i = 0; i <= n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
