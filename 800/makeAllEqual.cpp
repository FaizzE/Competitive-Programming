#include<bits/stdc++.h>
using namespace std;

int main() {

    int tcase; cin >> tcase;
    while(tcase--){
        int n, freq = 0; cin >> n;

        map<int,int>mp;

        for(int i = 0; i < n; i++){
            int x; cin>> x;
            mp[x]++;
            freq = max(freq,mp[x]);
        }
        cout << n - freq << "\n";
    }


    return 0;
}
