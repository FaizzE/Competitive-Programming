#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    // Minimum element
    int min = *min_element(v.begin(),v.end());
    cout << min << endl;   
    int min1 = *min_element(v.begin()+2,v.end());
    cout << min1 << endl; 

    // Maximum Element  
    int max = *max_element(v.begin(),v.end());
    cout << max << endl;

    // sum
    int sum = accumulate(v.begin(),v.end(),0);
    cout << sum << endl;

    // count element
    int cnt = count(v.begin(),v.end(),3);
    cout << cnt << endl;

    // Find function
    int element = *find(v.begin(),v.end(),2);
    cout << element << endl;
    auto it = find(v.begin(),v.end(),7);
    if(it != v.end())
        cout << *it << endl;
    else
        cout << "Element not found" << endl;

    // reverse
    reverse(v.begin()+2,v.end());
    for(auto val : v){
        cout << val << " ";
    }
    cout << endl;

    





    return 0;
}