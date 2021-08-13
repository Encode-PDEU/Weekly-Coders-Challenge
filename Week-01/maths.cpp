#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
	int a, b, p;
	cin >> a >> b >> p;
	if (p % 2 == 0) {
		a = abs(a);
		b = abs(b);
	}
	if (a > b) cout << ">" << endl;
	else if (a == b) cout << "=" << endl;
	else cout << "<" << endl;

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
