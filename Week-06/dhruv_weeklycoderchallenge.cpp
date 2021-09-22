#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, X, points[100], bonus[100];
    cin >> n >> X;
    for (int i = 0; i < n; ++i) {
        cin >> points[i] >> bonus[i];
    }

    int ans = 1e9;
    for (int mask = 0; mask < (1 << n); ++mask) {
        int s = 0, num = 0, rest_max = -1;
        for (int i = 0; i < n; ++i) {
            if (mask >> i & 1) {
                s += 100 * (i + 1) * points[i] + bonus[i];
                num += points[i];
            } else {
                rest_max = i;
            }
        }
        if (s < X) {
            int s1 = 100 * (rest_max + 1);
            int need = (X - s + s1 - 1) / s1;
            if (need >= points[rest_max]) {
                continue;
            }
            num += need;
        }
        ans = min(ans, num);
    }
    cout << ans << endl;
}
