#include<bits/stdc++.h>
using namespace std;

// bool isPrime (int n) {
//     if (n==1) return false;

//     for(int i = 2; i*i <= 2*n; i++){
//         if(n % i == 0) return false;
//     }
//     return true;
// }

int main() {

    int n;
    cin>>n;

    if (n==1) return false;

    for(int i = 2; i <= n; i++){
        if(n % i == 1) cout << i <<"\n";
    }
    // cout << "Prime Number\n";


    return 0;
}