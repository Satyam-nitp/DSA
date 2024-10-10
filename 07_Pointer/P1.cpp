#include <iostream>
using namespace std;
int main()
{
    int u = 5;
    int *p = &u;
    int v = 8;
    int *p2 = &v;
    // cout<<p<<endl<<p2;

    // Dereference operator
    // accessing the values through the pointers

    cout << endl
         << *p; // dereferencing
    cout << endl
         << *p2 << endl;
    *p = 125;
    *p2 = 250;
    cout << endl
         << *p; // dereferencing
    cout << endl
         << *p2 << endl;
    return 0;
}