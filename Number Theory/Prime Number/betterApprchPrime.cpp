#include<bits/stdc++.h>
using namespace std;

bool isPrime (int n) {
    if (n==1) return false;

    for(int i = 2; i*i <= 2*n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {

    int a;
    cin>>a;

    cout << isPrime(a);



    return 0;
}