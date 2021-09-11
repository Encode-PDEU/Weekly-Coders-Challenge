#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base :: sync_with_stdio(false),cin.tie(NULL);
#define endl "\n"

const int mod = 1e9 + 7;


void solve() {
	int WA[105000];
	bool AC[105000];
	int N, M;
	cin >> N >> M;
	int WAnum = 0;
	int ACnum = 0;
	for (int i = 1; i <= N; i++) {
		WA[i] = 0;
		AC[i] = false;
	}
	while (M--) {
		int p;
		string S;
		cin >> p >> S;
		if (AC[p]) continue;
		if (S == "AC") {
			AC[p] = true;
			ACnum++;
			WAnum += WA[p];
		} else if (S == "WA") {
			WA[p]++;
		}
	}
	cout << ACnum << " " << WAnum << endl;
}


int32_t main() {
	fast
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
