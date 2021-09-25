#include<bits/stdc++.h>
using namespace std;
void solve(int n) {
	if (n % 2020 > (n / 2020)) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int no;
		cin >> no;
		solve(no);
	} return 0;
}
