#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base :: sync_with_stdio(false),cin.tie(NULL);
#define endl "\n"

int main() {
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a < b) {
			for (int i = 0; i < b; i++) cout << a;

		} else {
			for (int i = 0; i < a; i++) cout << b;

		}
		cout << endl;

	}
	return 0;
}