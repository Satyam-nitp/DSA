#include<iostream>
using namespace std;
int main(){
    int x=5;
    int y=6;
    int z=12;
    int *p=&x;
    int *p2=&y;
    int *p3=&z;
    cout<<p2<<" "<<*p2<<endl;
    cout<<p3<<" "<<*p3<<endl;
    cout<<p<<endl;
    p=p+1;
    cout<<p<<" "<<*p<<endl;
    p=p+1;
    cout<<p<<" "<<*p<<endl;
}