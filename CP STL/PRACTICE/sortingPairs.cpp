#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string,long long>&p1,pair<string,long long>&p2){
    if(p1.second>p2.second){
        return true;
    }
    else if(p1.second==p2.second){
        if(p1.first<p2.first){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

void solve() {
    long long n;
    cin>>n;
    vector<pair<string,long long>>v;

    for(long long i=0; i<n; i++){
        string name;
        int salary;
        cin>>name>>salary;
        v.push_back({name,salary});
    }
    sort(v.begin(),v.end());
    for(auto it :v){
        cout<<it.first<<" "<<it.second<<"\n";
    }

}

int main() {

    int tc; cin>>tc;
    
    while(tc--){
        solve();
    }

    return 0;
}

