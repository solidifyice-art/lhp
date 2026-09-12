#include <iostream>

using namespace std;

int main() {
    int n;
    if (cin >> n) {
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            long long a;
            cin >> a;
            sum += a;
        }
        long long t = (sum / 10) % 10;
        if (t < 0) {
            t = -t;
        }
        cout << t << "\n";
    }
    return 0;
}
