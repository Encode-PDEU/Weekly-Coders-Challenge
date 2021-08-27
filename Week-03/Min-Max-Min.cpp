#include <bits/stdc++.h>
#define MAX

using namespace std;
typedef long long ll;
 
int main(){
 
    ll t;
 
    cin >> t;
 
    while(t--){
        ll n;
 
        cin >> n;
 
        string str;
 
        if(n == 1)
            str = "a";
        else if(n == 2)
            str = "ab";
        else if(n == 3)
            str = "abc";
        else{
            ll a = n / 2, b = a - 1;
 
            for(ll i = 0; i < a; i++)
                str += 'a';
 
            if(n % 2 == 0)
                str += 'b';
            else
                str += "bc";
 
            for(ll i = 0; i < b; i++)
                str += 'a';
        }
 
        cout << str << "\n";
    }
 
    return 0;
}