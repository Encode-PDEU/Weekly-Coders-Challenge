#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int total_candies = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            total_candies += arr[i];
        }
        
        if(total_candies % 2 == 0){
            cout << "NO" << "\n";
        }
        else{
            int second = total_candies / 2;
            int first = total_candies - second;
            
            if(first > second && (first - second) <= 1){
                cout <<"YES" <<"\n";
            }
            else{
                cout<<"NO" <<"\n";
            }

        }


    }
    return 0;
}