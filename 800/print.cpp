// #include<bits/stdc++.h>
// using namespace std;

// void print(int x) {
    
//     for(int i = 1; i <= x; i++) {
//         cout << i;
//     }
//     cout << endl;
// }

// int main() {

//     int N;
//     cin>>N;

//     print(N);


//     return 0;
// }

#include <iostream>
using namespace std;

void printNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        cout << i;
        if (i < N) {
            cout << " "; 
        }
    }
    cout << endl; 
}

int main() {
    int N;
    cin >> N;

    
    if (N < 1 || N > 1000) {
        cout << "Please enter a number between 1 and 1000." << endl;
        return 1; 
    }

    printNumbers(N); 

    return 0; 
}
