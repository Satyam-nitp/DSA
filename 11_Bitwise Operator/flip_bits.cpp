#include<iostream>
using namespace std;
string decimal_to_binary(int x){
    string s="";
    while(x>0){
        if(x%2==0) s="0"+s;
        else s="1"+s;
        x=(x>>1);
    }
    return s;
}
int mx_power2(int x){
    int n=x;
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    return (x^n);
}
int main(){
    int n=32;
    cout<<decimal_to_binary(n)<<endl<<decimal_to_binary(mx_power2(n))<<endl;
    cout<<"n is: "<<n<<endl<<"After flipping bits the no. is: "<<mx_power2(n)<<endl;
    return 0;
}