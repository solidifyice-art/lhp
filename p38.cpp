#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    string c;
    cin >> a >> b >> c;
    if (c == "+") {
        cout<<fixed << setprecision(1) << a+b;
    }
    else if (c == "-") {
        cout << fixed << setprecision(1) << a-b;
    }
    else if (c == "x") {
        cout << fixed << setprecision(1) << a*b;
    }
    else if (c == "/") {
        cout << fixed << setprecision(1) << a/b;
    }
    return 0;
}
    
