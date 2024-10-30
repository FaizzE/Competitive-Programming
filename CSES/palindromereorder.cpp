#include <bits/stdc++.h>
using namespace std;

string canFormPalindrome(string str) {
    unordered_map<char, int> charCount;
    for (char c : str) {
        charCount[c]++;
    }

    string leftHalf = "";
    char middleChar = '\0';
    bool hasOddCount = false;

    for (auto& entry : charCount) {
        if (entry.second % 2 != 0) {
            if (hasOddCount) return "NO SOLUTION";
            hasOddCount = true;
            middleChar = entry.first;
        }
        leftHalf += string(entry.second / 2, entry.first);
    }

    string rightHalf = leftHalf;
    reverse(rightHalf.begin(), rightHalf.end());

    if (middleChar != '\0') {
        return leftHalf + middleChar + rightHalf;
    }
    return leftHalf + rightHalf;
}

int main() {
    string input;
    cin >> input;

    string result = canFormPalindrome(input);
    cout << result << endl;

    return 0;
}
