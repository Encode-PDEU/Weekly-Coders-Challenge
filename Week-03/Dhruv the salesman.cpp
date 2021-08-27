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
		int n, s;
		cin >> s >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		int maxi = (s - a[n - 1] + a[0]);
		for (int i = 1; i < n; i++) {
			//    s+=a[i];
			maxi = max(maxi, a[i] - a[i - 1]);
		} cout << s - maxi << endl;
	}
}