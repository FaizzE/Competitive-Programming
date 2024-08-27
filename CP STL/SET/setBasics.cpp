#include<bits/stdc++.h>
using namespace std;

// Set Stores Only Unique Element

void printSet(set<string> &s) {
    cout << s.size();
    for(auto value : s) {
        cout << value << endl;
    }
}

int main() {

    set<string>ss;

    ss.insert("Hello"); // Set.insert = // log(n)
    ss.insert("World");
    ss.insert("abc");
    ss.insert("xyz");

    auto it = ss.find("world"); // log(n)

    if(it != ss.end()) {
        ss.erase(it);
    }

    ss.erase("abc");
    
    printSet(ss);




    return 0;
}