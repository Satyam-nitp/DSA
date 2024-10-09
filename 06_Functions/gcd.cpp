#include<iostream>
using namespace std;
int gcd(int x,int y){
    for(int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0) return i;
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<gcd(a,b);
} 