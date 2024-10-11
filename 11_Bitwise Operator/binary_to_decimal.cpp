#include<iostream>
using namespace std;
int binary_to_decimal(string &s){
    int sum=0;
    for(int i=s.length()-1;i>=0;i--){
        char ch=s[i];
        int num=ch-'0';
        sum+=(num*(1<<(s.length()-i-1)));
    }
    return sum;
}
int main(){
    string str="1001";
    cout<<binary_to_decimal(str)<<endl;
    return 0;
}