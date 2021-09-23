#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define hamojha ios_base :: sync_with_stdio(false),cin.tie(NULL);

int numMusicPlaylists(int N, int L, int K) {
     const int mod = 1000000007;

     vector<vector<long long>> dp(1 + N, vector<long long>(1 + L, 0LL));
     dp[1][1] = 1;
     for (int i = 2; i <= N; ++i) {
          dp[i][i] = (dp[i - 1][i - 1] * i) % mod;
     }
     for (int n = 1; n <= N; ++n) {
          for (int l = n + 1; l <= L; ++l) {
               dp[n][l] = ((dp[n][l - 1] * ((n - K) > 0 ? (n - K) : 0)) % mod + (dp[n - 1][l - 1] * n) % mod) % mod;
          }
     }

     return dp[N][L];
}


void solve() {
     int x, n, y;
     cin >> x >> n >> y;

     int ans = numMusicPlaylists(n, y, x);
     cout << ans << "\n";
}


int32_t main() {
     hamojha
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