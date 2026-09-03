#include <bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b);
long long bcnn(long long a, long long b);

int main() {
    long long a, b;
    cin >> a >> b;
    cout << ucln(a, b) << " " << bcnn(a, b);
    return 0;
}

long long ucln(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long bcnn(long long a, long long b) {
    if (a == 0 || b == 0) return 0; 
    return (a / ucln(a, b)) * b;
}
