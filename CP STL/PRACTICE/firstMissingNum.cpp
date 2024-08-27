#include<bits/stdc++.h>
using namespace std;

void shrink(){
    long long n,m;
    cin>>n>>m;
    set<long long> st;
    for(int i=0; i<n;i++){
        long long x;
        cin>>x;
        st.insert(x);
    }
    for(long long i =- m; i<m; i++){
        if(st.count(i) == 0){
            cout <<i<<"\n";
            break;
        }
    }
}

int main() {

    shrink();

    return 0;
}
