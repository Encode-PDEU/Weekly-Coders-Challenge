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
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);


//-----------------------------------Debug-----------------------------------//
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fr); cerr << ","; _print(p.sc); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//-----------------------------------Debug-----------------------------------//


int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int fact(int n) {int res = 1; for (int i = 2; i <= n; i++)res = res * i; return res;}
int nCr(int n, int r) {return fact(n) / (fact(r) * fact(n - r));}


void init_code() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif // ONLINE_JUDGE
}

int gcd(int a, int b) {
    if (b == 0) {return a;}
    else {return gcd(b, a % b);}
}

int lcm(int a, int b) {
    return (a * b) / (gcd(a, b));
}

vector<int> parents;
vector<int> visited;
map<int, vector<int>> adj;

int temp, counts;

void dfs(int node, int parent) {
    if (visited[node]) {temp++;}
    visited[node] = 0;

    for (auto itr : adj[node]) {
        if (itr == parent) {continue;}
        dfs(itr, node);
    }
}

void dfs2(int node, int parent) {
    if (visited[node]) {counts++;}
    if (parent == -1) {return;}
    dfs2(parent, parents[parent]);
}

bool slave(int city, int thug) {
    if (!visited[city]) {
        visited[city] = thug;
        return true;
    }
    return false;
}

bool recapture(int city, int thug) {
    if (visited[city] == thug) {
        visited[city] = 0;
        return true;
    }
    return false;
}

bool specialrecapture(int city, int thug) {
    if (visited[city]) {return false;}

    counts = 0;
    temp = 0;

    dfs2(city, parents[city]);

    if (!counts) {
        dfs(city, parents[city]);

        if (temp) {
            visited[city] = thug;
            return true;
        }

    }

    return false;
}

void solve() {
    int n;
    cin >> n;

    parents.clear();
    adj.clear();
    visited.clear();

    visited.resize(n + 1, 0);

    parents.resize(n);
    read(parents, n);

    f(i, 1, n) {
        adj[parents[i]].push_back(i);
        adj[i].push_back(parents[i]);
    }

    int q;
    cin >> q;

    while (q--) {
        string str;
        int city, thug;
        cin >> str >> city >> thug;

        if (str == "slave") {
            if (slave(city, thug)) {cout << "true\n";}
            else {cout << "false\n";}
        }

        else if (str == "recapture") {
            if (recapture(city, thug)) {cout << "true\n";}
            else {cout << "false\n";}
        }

        else if (str == "specialrecapture") {
            if (specialrecapture(city, thug)) {cout << "true\n";}
            else {cout << "false\n";}
        }
    }
}


int32_t main() {
    cin.tie(0);
    cout.tie(0);
    fast_io;

    //init_code();

    int t;
    t = 1;
    // in t;
    while (t--) {
        solve();
    }
}