#include<iostream>
#include<string>
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
int main(){
    int n=56;
    cout<<decimal_to_binary(n)<<endl;
    string str="1001";
    return 0;
}