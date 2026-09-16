#include <iostream>
#include <vector>

using namespace std;

void s(int n) {
    if (n < 2) return;

    vector<bool> ip(n + 1, true);
    ip[0] = ip[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (ip[p]) {
            for (int i = p * p; i <= n; i += p) {
                ip[i] = false;
            }
        }
    }

    bool f = true;
    for (int p = 2; p <= n; p++) {
        if (ip[p]) {
            if (!f) cout << " ";
            cout << p;
            f = false;
        }
    }
    cout << "\n";
}

int main() {
    int n;
    if (cin >> n) {
        s(n);
    }

    return 0;
}
