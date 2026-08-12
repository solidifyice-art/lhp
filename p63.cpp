#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, a, c;
    cin >> n;
    
    if (n <= 1) {
        cout << "No";
        return 0;
    }
    
    a = 0;
    c = 1;
    while (c * c <= n) {
        if (n % c == 0) {
            if (a < 2) {
                a++;
            }
            else if (a >= 2) {
                cout << "No";
                return 0;
            }
        }
        c++;
    }
    cout << "Yes";
    return 0;
}
    
