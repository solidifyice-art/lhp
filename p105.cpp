#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i += 2) {
        if(i+1 < n) {
            swap(a[i], a[i+1]);
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
