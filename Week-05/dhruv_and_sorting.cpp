#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <bits/stdc++.h>

#define inf 0x3f3f3f3f
#define Inf 0x3FFFFFFFFFFFFFFFLL
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Rep(i, n) for (int i = 1; i <= (n); ++i)
#define clr(x, a) memset(x, (a), sizeof x)
using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int a[200200] = {0};
		int b[200200] = {0};
		int s[200200] = {0};
		int n; scanf("%d", &n);
		rep(i, n) {
			scanf("%d", &a[i]);
			a[i + n] = a[i];
		}
		Rep(i, n + n) {
			b[i] = a[i] >= a[i - 1];
			s[i] = s[i - 1] + b[i];
		}
		//Rep(i, n + n) cout << b[i] << "";cout<<endl;
		int ret = -1;
		rep(i, n + 1) {
			if (s[i + n - 1] - s[i] == n - 1) {
				ret = n - i;
			}
		}
		printf("%d\n", ret);
	}
	return 0;
}