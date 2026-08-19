#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    long long y, t, x, total;
    cin >> y;
    vector<int> differ;
    long long n[y];
    t = 0;
    for(int i = 0; i < y; i++){
        cin >> x;
        n[i] = x;
    }
    for (int temp = 0; temp < y; temp++) {
        int c = count(differ.begin(), differ.end(), n[temp]);
        if (c == 0) differ.push_back(n[temp]);
    }
    cout << differ.size();
    return 0;
}
