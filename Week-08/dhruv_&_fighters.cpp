#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) cin >> a[i];
		sort(begin(a), end(a));
		int res = 0, last = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i] - 1 > last) --a[i];
			if (a[i] == last) ++a[i];
			if (a[i] > last) {
				++res;
				last = a[i];
			}
		}
		cout << res << endl;
	}
}