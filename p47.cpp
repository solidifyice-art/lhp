#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    long long a, b, c;
    cin>>a>>b>>c;
    if ((a*100+b*10+c)%4==0) {
        cout<<"YES";
    }
    else if ((a*100+c*10+b)%4==0) {
        cout<<"YES";
    }
    else if ((b*100+a*10+c)%4==0) {
        cout<<"YES";
    }
    else if ((b*100+c*10+a)%4==0) {
        cout<<"YES";
    }
    else if ((c*100+a*10+b)%4==0) {
        cout<<"YES";
    }
    else if ((c*100+b*10+a)%4==0) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
    
