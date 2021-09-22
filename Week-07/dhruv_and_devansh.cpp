#include<bits/stdc++.h>
using namespace std;
void solve() {
	int n;
	cin >> n;
	vector<vector<int>> rectangles;
	for (int i = 0; i < n; i++) {
		int w, h;
		cin >> w >> h;
		vector<int> a;
		a.push_back(w);
		a.push_back(h);
		rectangles.push_back(a);
	}
	map<pair<long long, long long>, long long> m;
	for (long long i = 0; i < rectangles.size(); i++) {
		long long g = __gcd(rectangles[i][0], rectangles[i][1]);
		rectangles[i][0] /= g;
		rectangles[i][1] /= g;
		pair<long long, long long> p = make_pair(rectangles[i][0], rectangles[i][1]);
		m[p]++;
	}
	long long cnt = 0;
	for (auto i : m) {
		cnt += i.second * (i.second - 1) / 2;
	}
	cout << cnt << endl;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {
		solve();
	}
	return 0;
}