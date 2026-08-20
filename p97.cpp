#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int y;
    if (!(cin >> y)) return 0;
    vector<long long> n(y);

    for (int i = 0; i < y; i++) {
        cin >> n[i];
    }

    sort(n.begin(), n.end());
    int kb = unique(n.begin(), n.end()) - n.begin();
    cout << kb << "\n";
    return 0;
}
