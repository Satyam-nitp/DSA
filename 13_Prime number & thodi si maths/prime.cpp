#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    // int n=91;
    // if(n<2){
    //     cout<<"The number is not prime."<<endl;
    //     return 0;
    // }
    // bool flag=true;
    // for(int i=2;i<sqrt(n);i++){
    //     if(n%i==0) flag=false;
    // }
    // if(flag==true) cout<<"The number is prime."<<endl;
    // else cout<<"The number is not prime."<<endl;
    cout<<isprime(9)<<endl<<true<<"  "<<false<<endl;
    return 0;
}