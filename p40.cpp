#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double money = 0;

    if (n <= 50) {
        money = n * 1678;
    } else if (n <= 100) {
        money = 50 * 1678;
        money += (n - 50) * 1734;
    } else if (n <= 200) {
        money = 50 * 1678;
        money += 50 * 1734;
        money += (n - 100) * 2014;
    } else if (n <= 300) {
        money = 50 * 1678;
        money += 50 * 1734;
        money += 100 * 2014;
        money += (n - 200) * 2536;
    } else if (n <= 400) {
        money = 50 * 1678;
        money += 50 * 1734;
        money += 100 * 2014;
        money += 100 * 2536;
        money += (n - 300) * 2834;
    } else {
        money = 50 * 1678;
        money += 50 * 1734;
        money += 100 * 2014;
        money += 100 * 2536;
        money += 100 * 2834;
        money += (n - 400) * 2927;
    }

    money *= 1.1;

    cout << fixed << setprecision(1) << money;

    return 0;
}
    
