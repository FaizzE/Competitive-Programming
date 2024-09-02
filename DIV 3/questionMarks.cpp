#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string ss;
    cin>>ss;
    map<char,int>mpp;
    for(auto value :ss) mpp[value]++;

    int ans = 0;
    ans+=min(n,mpp['A']);
    ans+=min(n,mpp['B']);
    ans+=min(n,mpp['C']);
    ans+=min(n,mpp['D']);

    cout << ans << endl;
}

int main() {

    int T;
    cin>>T;
    while(T--){
        solve();
    }

    return 0;
}