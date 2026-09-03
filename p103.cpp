#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, t = 0;
    if (!(cin >> n)) return 0;
    vector<long long> a(n);
    long long min_val = 9999999999999;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < min_val) {
            min_val = a[i];
        }
    }
    cout << min_val << " ";
    for (int i = 0; i < n; i++) {
        if (a[i] == min_val) {
            t++;
        }
    }
    cout << t;
    return 0;
}
