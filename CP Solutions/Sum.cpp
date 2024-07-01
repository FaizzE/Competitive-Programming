#include<bits/stdc++.h>
using  namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;

    while(n--){
        int a,b;
        cin >> a >> b;
        int x , y;
        cin >> x >> y;

        if((a < b) && (x > y)){
            cout  << "Happy Alex";
        }else{
            cout << "Poor Alex";
        }
    }


    return 0;
}