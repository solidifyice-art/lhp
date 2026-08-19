#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, a, c;
    cin >> n;
    a = 0;
    c = 1;
    while (c <= n) {
        if (n % c == 0) {
            a = a + c;
        }
        c++;
    }
    cout << a;
}
    
