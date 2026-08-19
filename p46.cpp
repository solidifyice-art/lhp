#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    long long n, x;
    cin >> n;
    if (n%3!=0 || n < 6) {
        cout<<"-1";
    }
    else {
        x = (n / 3) - 1;
        cout<<x<<" "<<x+1<<" "<<x+2;
    }
    return 0;
}
    
