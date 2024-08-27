/*
Given N string An Q queries, in each queries you are
given a string , print yes if string is present else print
no.
*/


#include<bits/stdc++.h>
using namespace std;

void printSet(set<string> &s) {
    cout << s.size();
    for(auto value : s) {
        cout << value << endl;
    }
}

int main() {

    unordered_set<string> s;

    int n;
    cout << "Enter the No. of String" << endl;
    cin>>n;

    cout << "Enter the String" << endl;
    for(int i = 0; i < n; i++) {
        string str;
        cin>>str;

        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--) {
        string str;
        cin>>str;
        if(s.find(str) == s.end()){
            cout << "no\n";
        }
        else{
            cout << "Yes\n";
        }
    }

    return 0;

}