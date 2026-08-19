#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b;
    c = (a+1)/2; d = (b+1)/2;
    cout << max(c, d) << " ";
    cout << min(a, b);
    return 0;
}
