#include <bits/stdc++.h>
#define ll long long
using namespace std;

void maxSubarraySum() {
    ll N; 
    cin >> N;
    vector<ll> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    ll sum = 0, max_sum = -1e9;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
        max_sum = max(max_sum, sum);
        if (sum < 0) sum = 0;
    }
    cout << max_sum << endl;
}

int main() {
    maxSubarraySum();
}
