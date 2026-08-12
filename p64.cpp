#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, a, c;
    cin >> n;
    a = 1;
    c = 1;
    while (a <= n) {
        c = c * a;
        a++;
    }
    cout << c;
    return 0;
}
    
