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
    string postFix="79+4*8/3-";
    stack<int> s;
    for(int i=0;i<postFix.length();i++){
        int ascii=(int)(postFix[i]);
        if(ascii>=48 && ascii<=57) s.push((postFix[i]-48));
        else{
            int val2=s.top();
            s.pop();
            int val1=s.top();
            s.pop();
            int ans=solve(val1, postFix[i], val2);
            s.push(ans);
        }
    }
    cout<<s.top()<<endl;
    return 0;
}