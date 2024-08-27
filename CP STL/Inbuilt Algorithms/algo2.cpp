#include<bits/stdc++.h>
using namespace std;

bool isPositive(int x){
    return x > 0;
}

int main() {

    // LAMBDA FUNCTION  
    // auto sum = [] (int x, int y){return x+y;};
    // cout << sum(2,5);

    vector<int> v = {2,-3,5};
    cout << all_of(v.begin(),v.end(),[](int x){return x > 0;}) << endl;

    cout << all_of(v.begin(),v.end(),isPositive)<< endl;

    cout << any_of(v.begin(),v.end(),[](int x){return x > 0;})<<endl;

    cout << none_of(v.begin(),v.end(),[](int x){return x > 0;})<<endl;

   

    return 0;
}