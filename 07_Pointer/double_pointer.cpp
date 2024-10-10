#include<iostream>
using namespace std;
int main(){
    int x=89;
    int *p=&x;
    int **p2=&p;
    int ***p3=&p2;
    // cout<<x<<" "<<*p<<" "<<**p2;
    cout<<&x<<"  "<<p<<"  "<<*p2<<"  "<<**p3<<endl;
}