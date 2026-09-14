#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, p, x, t;
    cin >> n >> p;
    long long q[n];
    t = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        q[i] = x;
    }
    for(int i = 0; i < n; i++){
        if(q[i] % p == 0) {
            t++;
        }
    }
    cout << t;
    return 0;
}
