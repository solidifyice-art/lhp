#include <bits/stdc++.h>
using namespace std;

int main() {
    double a;
    cin >> a;
    if (a >= 8.0) {
        cout<<"Gioi";
    }
    else if (a >= 6.5) {
        cout <<"Kha";
    }
    else if (a >= 5.0) {
        cout << "Trung binh";
    }
    else if (a >= 3.5) {
        cout << "Yeu";
    }
    else if (a < 3.5) {
        cout << "Kem";
    }
    return 0;
}
    
