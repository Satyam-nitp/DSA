#include<iostream>
using namespace std;
int main(){
    // Sum using pointer
    cout<<"Enter two numbers: ";
    int x,y;
    int *p1=&x,*p2=&y;
    cin>>*p1>>*p2;
    cout<<"Sum is: "<<*p1+*p2;
    return 0;
}