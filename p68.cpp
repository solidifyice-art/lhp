#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    int64 H, W;
    cin >> H >> W;

    int64 ans = (1LL << 62);

    auto update = [&](int64 a, int64 b, int64 c) {
        ans = min(ans, max({a, b, c}) - min({a, b, c}));
    };
    for (int64 x = 1; x < W; x++) {
        int64 s1 = H * x;
        int64 s2 = (H / 2) * (W - x);
        int64 s3 = (H - H / 2) * (W - x);
        update(s1, s2, s3);
        s2 = H * ((W - x) / 2);
        s3 = H * ((W - x) - (W - x) / 2);
        update(s1, s2, s3);
    }
    for (int64 y = 1; y < H; y++) {
        int64 s1 = W * y;
        int64 s2 = (W / 2) * (H - y);
        int64 s3 = (W - W / 2) * (H - y);
        update(s1, s2, s3);
        s2 = W * ((H - y) / 2);
        s3 = W * ((H - y) - (H - y) / 2);
        update(s1, s2, s3);
    }

    cout << ans;
    return 0;
}
    
