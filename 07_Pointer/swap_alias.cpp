#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Before swapping: "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After swapping: "<<x<<" "<<y<<endl;
    return 0;
}