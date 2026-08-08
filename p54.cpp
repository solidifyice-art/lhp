#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    if (cin >> n) {
        long long sq = round(sqrt(n));
        if (sq * sq == n) {
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n"; 
        }
    }
    return 0;
}
    
