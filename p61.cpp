#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long N;
    if (!(cin >> N)) return 0;
    vector<long long> small_divisors;
    vector<long long> large_divisors;
    for (long long i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            small_divisors.push_back(i);
            if (i * i != N) {
                large_divisors.push_back(N / i);
            }
        }
    }
    for (long long d : small_divisors) {
        cout << d << " ";
    }
    for (auto it = large_divisors.rbegin(); it != large_divisors.rend(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";
    return 0;
}
