#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int *p_x = &x;
    cout << "Addr of x : " << &x << endl;
    cout << "Value of p_x : " << p_x << endl;
    cout << "Value of *p_x : " << *p_x << endl;
    *p_x = 5;

    cout << "Value of x : "<<x << endl;

    cout << "p_x + 1 : " << p_x + 1 << endl;
    




    return 0;
}