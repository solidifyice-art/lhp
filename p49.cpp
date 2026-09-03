#include <bits/stdc++.h>
using namespace std;

int main() {
    long long v[3];
    cin>>v[0]>>v[1]>>v[2];
    int a;
    a = v[1];
    sort(v, v + 3);

    if (v[1] == a) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
    
