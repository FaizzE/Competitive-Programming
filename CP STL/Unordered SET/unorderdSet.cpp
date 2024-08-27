#include<bits/stdc++.h>
using namespace std;

// Unordered set waha par use karna hai jaha par
// orderring Matter Nhi karti, Sirf ye check kar hai ki
// Koi Value Set Me Present Hai Ki nhi, 

void printSet(set<string> &s) {
    cout << s.size();
    for(auto value : s) {
        cout << value << endl;
    }
}

int main() {

    set<string>ss;

    ss.insert("Hello"); // Set.insert = // O(1)
    ss.insert("World");
    ss.insert("abc");
    ss.insert("xyz");

    auto it = ss.find("world"); // O(1)

    if(it != ss.end()) {
        ss.erase(it);
    }

    ss.erase("abc");
    
    printSet(ss);




    return 0;
}