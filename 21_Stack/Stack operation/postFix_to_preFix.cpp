#include<iostream>
#include<stack>
using namespace std;
int main(){
    string postFix="79+4*8/3-";
    stack<string> s;
    for(int i=0;i<postFix.length();i++){
        int ascii=(int)(postFix[i]);
        if(ascii>=48 && ascii<=57) s.push((to_string(postFix[i]-48)));
        else{
            string val2=s.top();
            s.pop();
            string val1=s.top();
            s.pop();
            string ans=postFix[i]+val1+val2;
            s.push(ans);
        }
    }
    cout<<"Postfix expression of '(7+9)*4/8-3' : "<<postFix<<endl;
    cout<<"Prefix expression of '(7+9)*4/8-3' : "<<s.top()<<endl;
    return 0;
}