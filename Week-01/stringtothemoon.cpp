#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
	string S; long long K;
	cin >> S >> K;

	for (int i = 0; i < min((long long)S.size(), K); i++) {
		if (S[i] >= '2') { cout << S[i] << endl; return; }
	}
	cout << '1' << endl;
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
