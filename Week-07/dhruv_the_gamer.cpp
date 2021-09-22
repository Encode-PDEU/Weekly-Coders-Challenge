#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		int cnt = 0;
		int s = a + b + c;
		int f = 0;
		if (s % 9 == 0) {
			int m = a + b + c;
			m /= 9;
			if (a >= m and b >= m and c >= m) f = 1;

		}
		if (f == 1) cout << "YES";
		else cout << "NO";

		cout << endl;
	}
	return 0;
}