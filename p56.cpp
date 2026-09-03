#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long s;
    if ((a % 2) == (b % 2)) {
        s = a;
    } else {
        if (a % 2 == 1) s = a + 1;
        else s = a - 1;
    }
    long long steps = llabs(b - s) / 2;
    long long n = steps + 1;
    long long sum = n * (s + b) / 2;
    cout << steps << " " << sum << endl;
    return 0;
}
    
