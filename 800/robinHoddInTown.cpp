#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

    ll tc,n;
    cin>>tc;

    while(tc--){
        cin>>n;
        vector<ll>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n <= 2){
            cout<<"-1\n";
            continue;;
        }
        ll sum = accumulate(arr.begin(),arr.end(),0LL);
        sort(arr.begin(),arr.end());
        ll req = arr[n/2] * 2 * n + 1;
        if(sum >= req) {
            cout<<"0\n";
        }else{
            cout<< req - sum <<"\n";
        }
    }



    return 0;
}
