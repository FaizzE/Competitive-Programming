#include<bits/stdc++.h>
using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;
    while (numTestCases--) {
        int arraySize;
        cin >> arraySize;
        int oddCount = 0;
        for (int i = 0; i < arraySize; i++) {
            int arrElement;
            cin >> arrElement;
            if (arrElement % 2 != 0) {
                oddCount++;
            }
        }
        if (oddCount % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
