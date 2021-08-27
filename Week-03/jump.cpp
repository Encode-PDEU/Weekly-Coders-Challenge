#include <bits/stdc++.h>
using namespace std;

int jump(int* nums, int n) {
    int step = 0, start = 0, end = 0;
    while (end < n - 1) {
        step++;
        int maxend = end + 1;
        for (int i = start; i <= end; i++) {
            if (i + nums[i] >= n - 1) return step;
            maxend = max(maxend, i + nums[i]);
        }
        start = end + 1;
        end = maxend;
    }
    return step;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << jump(a, n) << endl;
    }
}