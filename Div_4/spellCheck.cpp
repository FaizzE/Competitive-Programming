#include<bits/stdc++.h>
using namespace std;

void mayBe() {
    int n; cin>>n;
    string s; cin>>s;

    if((s == "Timur") || (s=="miruT") || (s=="Trumi") || (s=="mriTu")){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}

int main() {

    int tc; cin>>tc;

    while(tc--) {
        mayBe();
    }

    return 0;
}
