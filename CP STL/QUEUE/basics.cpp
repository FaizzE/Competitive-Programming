
/*  
    Queue Follow FIFO (First in First Out).

    Stack Follows LIFO (Last in First Out).
*/
#include<bits/stdc++.h>
using namespace std;

int main() {

    queue<string> q;
    q.push("abc");
    q.push("xyz");
    q.push("qwe");
    q.push("asd");
    q.push("jkl");

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }



    return 0;
}