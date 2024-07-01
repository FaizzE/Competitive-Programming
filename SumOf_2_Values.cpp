#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i]+arr[j] == x){
                cout << i+1 << " " << j+1;
            }
        }
    }
    return 0;

}
