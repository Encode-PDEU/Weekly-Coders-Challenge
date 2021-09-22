#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
 
        int i = 0;
        while (!is_sorted(begin(a), end(a))) {
            for (int j=i%2; j+1<n; j += 2) {
                if (a[j] > a[j+1]) {
                    swap(a[j], a[j+1]);
                }
            }
 
            ++i;
        }
 
        cout << i << endl;
    }
}