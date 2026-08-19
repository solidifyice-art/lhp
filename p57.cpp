#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int a[4] = {3, 1, 4, 6}; 
    long long full_cycles = n / 4;
    long long total_sum = full_cycles * 14;
    long long remainder = n % 4;
    for (int i = 1; i <= remainder; i++) {
        total_sum += a[i % 4];
    }
    cout << total_sum;
    return 0;
}