#include<bits/stdc++.h>
using namespace std;

int main() {

    unordered_map<string,int> ump;

    int n;
    cin>>n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ump[s]++;
    }
    int q;
    cin>>q;
    while(q--) {
        string s;
        cin>>s;
        cout << ump[s] << endl;
    }

    return 0;
}