#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxw = 0, maxh = 0;
        for (int i=0; i<n; i++) {
            int w, h;
            cin >> w >> h;
            maxw = max(maxw, w);
            maxh = max(maxh, h);
        }
        cout << 2 * (maxw + maxh) << "\n";
    }
    return 0;
}
