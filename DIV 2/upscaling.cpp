#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;

    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            if((i/2)+ (j/2) == 0){
                cout<<'.';
            }
            else{
                cout<<'#';
            }
            cout<<"\n";
        }
    }
}

int main() {

    int tc; cin>>tc;
    while(tc--) {
        solve();
    }


    return 0;
}