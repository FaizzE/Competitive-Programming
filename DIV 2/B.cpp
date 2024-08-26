#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;

    vector<long long>v(n);

    for(auto &i :v) cin>>i;
    sort(v.begin(),v.end());
    cout<<v[n/2]<<"\n";

}

int main() {

    int tc; cin>>tc;

    while(tc--) {
        solve();
    }

    return 0;
}

