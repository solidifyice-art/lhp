#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, n;
    cin >> a >> b >> n;

    a %= b;
    n--;

    while (n) {
        a = (a * 10) % b;
        n--;
    }

    cout << (a * 10) / b;
}
