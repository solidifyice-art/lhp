#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;
    int min_digits = 20;
    for (long long a = 1; a * a <= n; ++a) {
        if (n % a == 0) {
            long long b = n / a;
            int current_digits = static_cast<int>(log10(b)) + 1;
            min_digits = min(min_digits, current_digits);
        }
    }
    cout << min_digits << "\n";
    return 0;
}
    
