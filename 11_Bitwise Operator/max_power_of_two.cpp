#include<iostream>
using namespace std;
int mx_power2(int n){
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return (n+1)>>1;
}
int main(){
    int n=24,count=0,temp=-1;
    while(n>0){
        temp=n;
        n=n&(n-1);
        count++;
    }
    cout<<"Highest power of two less than n is: "<<temp<<endl;
    cout<<"Highest power of two less than n by using function is: "<<mx_power2(24)<<endl;
    return 0;
}