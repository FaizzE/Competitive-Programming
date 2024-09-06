#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;

    for(int i = 0; i < s.size(); i++) {
        int cnt = 1;
        for(int j = i + 1; j < s.size(); j++) {
            if(s[i] == s[j]) {
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}
