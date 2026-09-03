#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << 1;
    }
    else if (a == b || a == c || b == c) {
        cout << 2;
    }
    else {
        cout << 3;
    }

    return 0;
}
    