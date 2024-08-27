#include<bits/stdc++.h>
using namespace std;

// How to write Iterators Code in Short in C++ STL?
// Auto and Range based loops

int main() {
    vector<int> v = {2,3,5,6,7};
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    //  above Code Short me Aise Likha Jaata hai
    // auto keyword automatic data type pata kar leta hai
    for(auto &value : v) {
        cout << value << " ";
    }
    cout << endl;

    // without & Sirf Asli Vector ki Copy Aati hai static
    for(int value : v) {
        cout << value << " ";
    }
    cout << endl;

    // ampersand & Use Karne Se Actual Value Aati hai
    // & ke saath hi Jyaada use kiya jaata hai
    // Use According to Your Condition
    for(int &value : v) {
        value++;
        cout << value << " ";
    }
    cout << endl;

    // pairs
    vector<pair<int,int> > v_p = {{1,2},{2,3}};
    for(auto &value :v_p) {
        cout << value.first << " " << value.second << endl;
    }
}