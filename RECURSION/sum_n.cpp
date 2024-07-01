#include"bits/stdc++.h"
using namespace std;

int sum_n(int n){

    if(n == 0){
        return 0;
    }

    int left_part = sum_n(n-1);
    return left_part + n;
}

int main(){

    cout << sum_n(15);

    return 0;
}