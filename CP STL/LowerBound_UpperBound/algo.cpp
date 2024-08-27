#include<bits/stdc++.h>
using namespace std;

/*
    Lower Bound :- lower bound ya to target ko found karega ya phir
    usse Bade Element Ko . Let suppose Target 8 hai and array me 8 present 
    nhi hai to lowerBound 8 se bade element ke loction ko found kar dega
*/

/*
    Upper Bound :- upper bound hamesha target  se bade element ko return karta hai,
    lets suppose target 8 hai , and array me 8 present bhi hai , phir bhi 
    Upper Bound 8 Se bade element ke location ko return karega
*/

int main() {

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    auto it = upper_bound(a.begin(),a.end(),26);
    if(it == a.end()) {
        cout << "Not found";
        return 0;
    }


    return 0;
}