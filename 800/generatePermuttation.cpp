#include<bits/stdc++.h>
using namespace std;

int main() {

    int tc; cin>>tc;

    while(tc--){
        int n;cin>>n;
        if(n % 2== 0) cout << -1 << "\n";
        else{
            deque<int>d; d.push_back(1);

            for(int i = 2; i <= n; i++){
                if(i % 2 == 0) d.push_back(i);
                else d.push_front(i);
            }
            while(!d.empty()){
                cout << d.front() << " ";
                d.pop_front();

            }
            cout << "\n";
        }
    }



    return 0;
}
