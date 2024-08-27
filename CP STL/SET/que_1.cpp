#include<bits/stdc++.h>
using namespace std;

void printSet(set<string> &s) {
    cout << s.size();
    for(auto value : s) {
        cout << value << endl;
    }
}

int main() {

    set<string> str;

    int n;
    cout << "Enter the No. of String" << endl;
    cin>>n;

    cout << "Enter the String" << endl;
    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;

        str.insert(s);
    }

    // for(auto value :str) {
    //     cout << value << endl;
    // }
    printSet(str);

}