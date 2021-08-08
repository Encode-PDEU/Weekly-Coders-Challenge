#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int x, y;
    cin >> x >> y;
    if (x % 2 == y % 2) {cout << "DHRUV" << endl;}
    else cout << "AMAN" << endl;
}
int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;

}
