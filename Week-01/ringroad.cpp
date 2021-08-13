#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > nex[1010];

int solve(int x, int p) {
	if (x == 1) return 0;
	for (int i = 0; i < nex[x].size(); i++) {
		int y = nex[x][i].first;
		if (y != p) return nex[x][i].second + solve(y, x);
	}
}
int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		memset(nex, 0, sizeof(nex));
		for (int i = 0; i < n; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			nex[a].push_back(make_pair(b, 0));
			nex[b].push_back(make_pair(a, c));
		}
		int r1 = nex[1][0].second + solve(nex[1][0].first, 1);
		int r2 = nex[1][1].second + solve(nex[1][1].first, 1);
		cout << min(r1, r2) << endl;

	}

	return 0;

}
