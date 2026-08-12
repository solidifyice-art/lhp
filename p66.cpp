#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x, i, a;
    cin >> x;
    a = 0;
    for (i = 1; a < x; i++) {
        a += i;
    }
    cout << i-1;
    return 0;
}
    
