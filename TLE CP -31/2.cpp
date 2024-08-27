#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int end = 0;
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        ans = max(ans, v[i]-end);
        end = v[i];
    }
    ans = max(ans,2*(x-end));

    cout<<ans<<"\n";
}
int main() {

    int tc; cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}
