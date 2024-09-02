#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s1;
    string s2;
    cin>>s1>>s2;

    swap(s1[0],s2[0]);

    cout << s1 <<" " << s2 << endl;
}

int main() {

    int T;
    cin>>T;

    while(T--) {
        solve();
    }

    return 0;
}