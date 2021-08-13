#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define MAX 105

int32_t main()
{

    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int i = 0;

        while (i < n - 1 && a[i] <= a[i + 1]) {i++;}

        int j = n - 1;

        while (j > 0 && a[j] <= a[j - 1]) {j--;}

        if (i >= j) {cout << "YES\n"; continue;}
        cout << "NO\n";

    }
    return 0;
}