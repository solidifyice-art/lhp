#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int K, S;
    if (cin >> K >> S) {
        long long count = 0;
        for (int x = 0; x <= K; ++x) {
            int S_prime = S - x;
            int L = max(0, S_prime - K);
            int R = min(K, S_prime);
            if (L <= R) {
                count += (R - L + 1);
            }
        }
        cout << count << "\n";
    }
    return 0;
}
    
