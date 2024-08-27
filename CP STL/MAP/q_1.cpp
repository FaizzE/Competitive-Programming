#include<bits/stdc++.h>
using namespace std;

int main() {

    map<string,int> mp;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        mp[s] = mp[s]+1;
        // m[s]++;
    }
    cout << endl;
    
    for(auto &mpp:mp){
        cout << mpp.first << " " << mpp.second << endl;
    }
    cout << endl;

    return 0;
}