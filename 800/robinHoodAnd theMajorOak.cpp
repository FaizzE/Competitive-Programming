#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {

    ll tc,n,k;
    cin>>tc;
    while(tc--){
        cin>>n>>k;

        ll x= k/2;

        
        if(n%2 && k%2){
            x++;
        }

        if(x%2 == 0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    } 


    return 0;
}
