#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base :: sync_with_stdio(false),cin.tie(NULL);
#define endl "\n"


//////////////////////////////////////////
//////////////////////////////////////////

const int mod = 1e9 + 7;

//////////////////////////////////////////
//////////////////////////////////////////



void solve() {
	int n;
	cin >> n ;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int dp[n] = {0};
	dp[1] = abs(a[1] - a[0]);
	for (int i = 2; i < n; i++) {
		dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]), dp[i - 2] + abs(a[i] - a[i - 2]));
	}
	cout << dp[n - 1] << endl;
}

int32_t main() {
	fast
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
