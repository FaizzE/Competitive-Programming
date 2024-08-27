#include<bits/stdc++.h>
using namespace std;

void printMP(map<int,string> mp) {
    cout << mp.size() << endl;
    for(auto &mpp: mp) {
        cout << mpp.first << " " << mpp.second << "\n";
    }
    cout << endl;
} 

int main() {

    // Map Keys Are Unique
    // Keys Are in Sorted Manner
    map<int,string> m;

    m[1] = "abc"; // T.C = O(log(n))
    m[4] = "qwe";
    m[3] = "xyz";
    // Also Add Value in Map Like Below
    m.insert({2,"CPP"});

    printMP(m);

    // map Name.erase(key) for Delete Particular Value
    m.erase(2); // log(n)

    printMP(m);

    // Find Particular Value in Map
    auto it = m.find(9); // O(log(n))
    if (it == m.end()) cout << "No Value";
    else cout << (it->first) << " " << (it->second) << endl;


    return 0;
}