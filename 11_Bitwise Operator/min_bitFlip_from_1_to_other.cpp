#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a=4;
    int b=16;

    // Binary to Decimal
    // string s="10000";
    // int num=0,n=0;
    // for(int i=(s.length()-1);i>=0;i--){
    //     if(s[i]=='1') num+=(1<<n);
    //     n++;
    // }
    // cout<<num<<endl;

    // Decimal to Binary
    // string s="";
    // int c=16;
    // while(c>0){
    //     int n=c%2;
    //     c/=2;
    //     s=to_string(n)+s;
    // }
    // cout<<s<<endl;

    // string str="abc";
    // // cout<<str.find("ac")<<endl;
    // for(int i=0;i<str.length();i++){
    //     char ch=
    // }
    // char ch ='a';
    // size_t found = str.find(ch);
    // cout<<found<<endl;


    cout<<__builtin_popcount(a^b)<<endl;
    return 0;
}

// 010111
// 100000


// 000100
// 110010