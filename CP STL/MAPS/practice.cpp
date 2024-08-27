#include<bits/stdc++.h>
using namespace std;

void PrintMap(map<int,string>&mpp){
    cout << mpp.size() << endl;
    for(auto &pr : mpp){  
         cout << pr.first << " " << pr.second << endl;
    }
}

int main(){
    map <int , string> mpp;

    mpp[1] = "abc"; // O(log(n))
    mpp[5] = "qwe";
    mpp[3] = "asd";
    mpp[5] = "ghi" ;
    mpp.insert({4,"zxc"});
    mpp.erase(4);
    auto it = mpp.find(7); // O(log (n))
    if(it != mpp.end())
    mpp.erase(it); // log(n)
    mpp.clear();
    // if(it == mpp.end()){
    //     cout << "No Value";
    // }else{
    //     cout << (*it).first << " " << (*it).second;
    // }

    PrintMap(mpp);
}