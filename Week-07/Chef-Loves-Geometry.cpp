#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define int long long
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define in cin>>
#define out cout<<
#define fr first
#define sc second
#define VC vector<int>
#define VP vector<pair<int,int>>
#define pb push_back
#define mp make_pair
#define PI 3.1415926535897932384626433832

int gcd(int a, int b) {
    if (b == 0) {return a;}
    else {return gcd(b, a % b);}
}

int lcm(int a, int b) {
    return (a * b) / (gcd(a, b));
}

void solve() {
    int r, x, y, a, b;
    cin >> r >> x >> y >> a >> b;

    double temp = sqrt((x - a)(x - a) * 1.0 + (y - b)(y - b) * 1.0);

    r *= 2;
    int ans = ceil(temp / r);

    cout << ans << "\n";
}


int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
    //in t;
    while (t--) {
        solve();
    }
}