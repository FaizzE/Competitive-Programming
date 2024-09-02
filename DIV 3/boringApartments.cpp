#include<bits/stdc++.h>
using namespace std;

void shrink() {
    int x;
    cin >> x;

    int n = x % 10;
    int digits = to_string(x).length();

    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += 10;
    }

    sum += (digits * (digits + 1)) / 2;

    cout << sum << "\n";
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        shrink();
    }

    return 0;
}
