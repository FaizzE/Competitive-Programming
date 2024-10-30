#include <bits/stdc++.h>
using namespace std;

void generateGrayCode(int n) {
    int totalCodes = 1 << n;
    for (int i = 0; i < totalCodes; i++) {
        int gray = i ^ (i >> 1);
        cout << bitset<16>(gray).to_string().substr(16 - n) << endl;
    }
}

int main() {
    int n;
    cin >> n;
    generateGrayCode(n);
    return 0;
}
