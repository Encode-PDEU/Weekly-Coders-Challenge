#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);
int poorRats(int buckets, int minutesToDie, int minutesToTest) {
	int state = minutesToTest / minutesToDie + 1;
	return ceil(log(buckets) / log(state));
}


int32_t main() {
	hamojha
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, y, x;
		cin >> n >> y >> x;
		cout << poorRats(n, y, x) << endl;
	}
	return 0;

}