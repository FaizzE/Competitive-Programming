#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x = a * d, y = b * c;
    if (x == y)
        cout << "0\n";
    else if (y != 0 && x % y == 0 || x != 0 && y % x == 0)
        cout << "1\n";
    else
        cout << "2\n";
}
int main() {
   ll tc; cin>>tc;
    while(tc--) {
        solve();
    }
}
