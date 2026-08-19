#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a + 3);

    cout << a[2];

    return 0;
}
    
/* cach cua thay: #include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }
    cout << c;
    return 0;
}
*/