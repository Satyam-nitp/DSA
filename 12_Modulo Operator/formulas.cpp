#include<iostream>
using namespace std;
int main(){
    // formula- 1: ( a + b ) % c = ( a % c + b % c ) % c;
    // proof:
    int a=10,b=5,c=3;
    cout<<(a+b)%c<<endl<<(a%c+b%c)%c<<endl;

    // Same formula for multiplication as well
    // proof:
    cout<<(a*b)%c<<endl<<(a%c*b%c)%c<<endl;

    return 0;
}