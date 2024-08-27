#include<bits/stdc++.h>
using namespace std;

void shrink(){
    long long n,q;
    cin>>n>>q;
    vector<int>v(n+1);

    for(int i=1;i<=n; i++){
        cin>>v[i];
    }
    vector<int>prefSum(n+1);
    for(int i=1; i<=n; i++){
        prefSum[i] = prefSum[i-1] + v[i];
    }
    while(q--){
        int L,R;
        cin>>L>>R;
        // cout<<accumulate(v.begin() + L, v.begin() + R + 1, 0)<<"\n";
        cout<<prefSum[R] - prefSum[L-1]<<"\n";
    }

}

int main() {
    
    int t = 1;
    // cin>>t;
    while(t--){
        shrink();
    }

    return 0;
}
