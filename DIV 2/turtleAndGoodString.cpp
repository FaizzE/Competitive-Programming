#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    if(s[0] != s[n-1]){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }

}

int main() {

    int tc; cin>>tc;

    while(tc--) {
        solve();
    }


    return 0;
}
