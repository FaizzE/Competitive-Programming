#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int , string> m;

    m[1] = "abc";
    m[5] = "qwe";
    m[3] = "asd";
    m.insert({4,"zxc"});

    // map<int , string> :: iterator it;
    // for(int it = m.begin(); it != m.end(); it++){
    //     cout << (*it).first << " " << (*it).second;
    // }

    for(auto &pr :m){
        cout << pr.first << " " << pr.second << endl;
    }

}