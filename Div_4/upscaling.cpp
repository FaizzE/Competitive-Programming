#include<bits/stdc++.h>
using  namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i+j)%2 == 0){
                cout << "##";
            }
            else{
                cout << "..";
            }
        }
        cout << "\n";
        for(int j = 0; j < n; j++){
            if((i+j)%2==0){
                cout << "##";
            }
            else{
                cout << "..";
            }
        }
        cout << "\n";
    }


    return 0;
}