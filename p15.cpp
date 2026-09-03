#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t, c, dv, tong;
    cin>>n;
    t = n/100;
    c = (n/10) % 10;
    dv = n % 10;
    tong = t + c + dv;
    cout<<tong;
    return 0;
}
    