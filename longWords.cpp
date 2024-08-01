#include<bits/stdc++.h>
using namespace std;

void solve(string &word) {
    int cnt = word.size();

        if(cnt > 10){
            cout << word[0] << cnt-2 << word[cnt-1] << endl;;
        }
        else{
            cout << word << endl;
        }
}

int main() {

    int n;
    cin>> n;


    while(n--) {
        string ss;
        cin>> ss;

        solve(ss);
    }

    return 0;
}