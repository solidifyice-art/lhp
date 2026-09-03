#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, root;
    cin >> n;
    root = round(sqrt(n));
    if (n<0) {
        cout<<"KHONG";
    }
    else if (root * root == n) {
        cout<<"CO";
    }
    else {
        cout<<"KHONG";
    }
    return 0;
}
    
