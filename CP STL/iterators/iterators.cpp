#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {2,3,5,6,7};
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    vector <int> ::iterator it = v.begin();
    // cout << (*(it+1)) << endl;

    vector<int> ::iterator iter = v.begin();
    for( iter = v.begin(); iter != v.end(); iter++) {
        cout << (*iter) << endl;
    }
}