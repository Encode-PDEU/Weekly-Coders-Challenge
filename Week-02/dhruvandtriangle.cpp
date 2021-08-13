#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int cnt = 0;

    for (int i = n - 1; i >= 0; i--) {
        int j = 0, k = i - 1;
        while (j < k) {
            int a1 = a[j] + a[k];
            if (a1 > a[i]) {cnt += k - j; k--;}
            else j++;
        }
    }
    cout << cnt << endl;
}
int32_t main() {

    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;

}

