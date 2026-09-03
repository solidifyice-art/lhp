#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin >> a;
    if ((a%4==0 && a%100!=0) || (a%400==0)) {
        cout<<"CO";
    }
    else {
        cout<<"KHONG";
    }
    return 0;
}
    
