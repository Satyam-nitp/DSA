#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void skip(string str,string s,int idx){
    if(idx==str.length()){
        cout<<s;
        return;
    }
    char ch=str[idx];
    if(ch=='s') skip(str,s,idx+1);
    else skip(str,s+ch,idx+1);
}
int main(){
    string str="satyam singh";
    skip(str,"",0);
    return 0;
}