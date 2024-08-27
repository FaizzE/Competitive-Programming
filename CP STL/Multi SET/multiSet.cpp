#include<bits/stdc++.h>
using namespace std;

void printSet(set<string> &str) {
    cout << str.size();
    for(auto value : str) {
        cout << value << endl;
    }
}

int main() {
    multiset<string> s;
    ss.insert("abc"); // log(n)
    ss.insert("zsdf");
    ss.insert("xyz");
    ss.insert("abc");

    auto it = ss.find("abc"); // log(n)
    printSet(ss);

    if(it != ss.end()) {
        ss.erase(it);
    }

    return 0;
}