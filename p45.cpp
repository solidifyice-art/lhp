#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    long long W, a, b;
    cin >> W >> a >> b;

    cout << max(0LL, llabs(a - b) - W);
    return 0;
}
    
