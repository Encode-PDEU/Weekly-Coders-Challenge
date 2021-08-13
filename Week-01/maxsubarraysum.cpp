#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);

    for (auto &a : A)
        cin >> a;

    for (auto &b : B)
        cin >> b;

    int total = 0;

    for (int i = 0; i < N; i++)
        total += A[i] * B[i];

    int best = total;

    for (int center = 0; center < N; center++) {
        int current = total;

        for (int x = center - 1, y = center + 1; x >= 0 && y < N; x--, y++) {
            current -= A[x] * B[x] + A[y] * B[y];
            current += A[x] * B[y] + A[y] * B[x];
            best = max(best, current);
        }
    }

    for (int between = 0; between < N - 1; between++) {
        int current = total;

        for (int x = between, y = between + 1; x >= 0 && y < N; x--, y++) {
            current -= A[x] * B[x] + A[y] * B[y];
            current += A[x] * B[y] + A[y] * B[x];
            best = max(best, current);
        }
    }

    cout << best << '\n';


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
