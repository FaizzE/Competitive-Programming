/*
Given N strings , print unique strings in
lexiographical order with their frequency 
N  <= 10^5
|s| = <= 100
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string ,int> mpp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        mpp[s] = mpp[s] + 1;
    }

    for(auto pr : mpp){
        cout << pr.first << " " << pr.second << endl;
    }
}