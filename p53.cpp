#include <iostream>
using namespace std;

int main() {
    int m, n;
    
    cin >> m;
    cin >> n;

    int soNgay = 0;

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        soNgay = 31;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        soNgay = 30;
    }

    else if (m == 2) {
        if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {
            soNgay = 29;
        } else {
            soNgay = 28;
        }
    } else {
        return 0;
    }

    cout << soNgay << endl;

    return 0;
}
    
