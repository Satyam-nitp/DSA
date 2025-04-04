#include<iostream>
#include<stack>
using namespace std;
int solve(int a, char ch, int b){
    if(ch=='+') return (a+b);
    if(ch=='-') return (a-b);
    if(ch=='*') return (a*b);
    return (a/b);
}
int main(){
    string preFix="-/*+79483";
    stack<int> s;
    for(int i=preFix.length()-1;i>=0;i--){
        int ascii=(int)(preFix[i]);
        if(ascii>=48 && ascii<=57) s.push((preFix[i]-48));
        else{
            int val1=s.top();
            s.pop();
            int val2=s.top();
            s.pop();
            int ans=solve(val1, preFix[i], val2);
            s.push(ans);
        }
    }
    cout<<s.top()<<endl;
    cout<<(7+9)*4/8-3<<endl;
    return 0;
}