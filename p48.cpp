#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    long long a, b, c;
    cin>>a;
    b=(a/100)%10;
    c=a%10;
    if (b == c) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
    
