#include <iostream>
using namespace std;
void find(int x, int *p1, int *p2)
{
    *p2 = x % 10;
    while (x > 9)
        x /= 10;
    *p1 = x;
    return;
}
int main()
{
    int n;
    cin >> n;
    int first, last;
    // finding 1st and last digit of a number
    int *p1 = &first;
    int *p2 = &last;
    find(n, p1, p2);
    cout << "First digit is: " << first << endl<< "Last digit is: " << last << endl;
}