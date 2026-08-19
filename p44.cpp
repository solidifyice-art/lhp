#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin>>a>>b;
    if (a == "H" && b == "H") {
        cout<<"Honest";
    }
    else if (a == "H" && b == "D") {
        cout<<"Dishonest";
    }
    else if (a == "D" && b == "H") {
        cout<<"Dishonest";
    }
    else if (a == "D" && b == "D") {
        cout<<"Honest";
    }
    return 0;
}
    
