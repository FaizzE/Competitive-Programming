#include<bits/stdc++.h>
using namespace std;

void printMP(unordered_map<int,string> mp) {
    cout << mp.size() << endl;
    for(auto &mpp: mp) {
        cout << mpp.first << " " << mpp.second << "\n";
    }
    cout << endl;
} 
int main() {

    // 1.inbuilt Implementation
    // 2.Time Complexity
    // 3.Valid Keys Datatype
    unordered_map<int,string> m;

    m[1] = "abc"; // T.C = O(1)
    m[4] = "qwe";
    m[3] = "xyz";
    m[5] = "poi";
    m.insert({2,"CPP"});


    // map Name.erase(key) for Delete Particular Value
    m.erase(2); // log(1)

    printMP(m);

     // Find Particular Value in Map
    auto it = m.find(9); // O(1)
    if (it == m.end()) cout << "No Value";
    else cout << (it->first) << " " << (it->second) << endl;

    return 0;
}