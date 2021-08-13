#include<bits/stdc++.h>
using namespace std;
#define int long long

#define inf DBL_MAX

void solve() {

    double x, y, vb, vs;
    int n;
    double stops[1005];
    cin >> n >> vb >> vs;

    for (int i = 0; i < n; i++) cin >> stops[i];
    cin >> x >> y;


    int m = 0, l, r, out;
    double ti = inf;

    for (int k = 1; k < n; k++) {
        double tt = (stops[k] - stops[1]) / vb + sqrt( (stops[k] - x) * (stops[k] - x) + y * y ) / vs;

        if ( abs(tt - ti) < 0.0000001) {
            if ( abs(stops[k] - x) < abs(stops[out] - x) )
                out = k;
        }
        else if ( tt < ti) {
            ti = tt;
            out = k;
        }
    }
    printf("%d \n", out + 1);

}

int32_t main() {

    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    */
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;

}

