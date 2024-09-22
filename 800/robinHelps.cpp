#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc;
    cin >> tc;
    while(tc--){
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }

        ll operations = 0, excess = 0;
        for(ll i = 0; i < n; i++){
            if(arr[i] >= k){
                excess += arr[i];
            }
            else if(arr[i] == 0 && excess > 0){
                excess--;
                operations++;
            }
        }
        cout << operations << "\n";
    }

    return 0;
}
