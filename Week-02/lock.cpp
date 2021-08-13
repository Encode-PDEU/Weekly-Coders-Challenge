#include<bits/stdc++.h>
using namespace std;

string rl(string st)
{
    char c = st[0];
    st[0] = st[1];
    st[1] = st[2];
    st[2] = st[3];
    st[3] = c;
    return st;
}

string ru(string st)
{
    char temp = st[4];
    st[4] = st[0];
    st[0] = st[5];
    st[5] = st[2];
    st[2] = temp;
    return st;
}

int main() {

    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/


    int t;
    cin >> t;
    while (t--) {
        string st;
        string temp, bst;
        set<string>v;

        cin >> st;
        sort(st.begin(), st.end());
        do
        {
            temp = st;
            bst = temp;
            for (int iter = 1; iter <= 2000; iter++)
            {
                if (rand() % 2)temp = rl(temp);
                else temp = ru(temp);
                if (bst > temp)bst = temp;
            }
            v.insert(bst);
        }
        while (next_permutation(st.begin(), st.end()));

        cout << v.size() << endl;


    }    return 0;
}