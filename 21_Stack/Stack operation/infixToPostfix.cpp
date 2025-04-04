#include<iostream>
#include<stack>
#include<string>
using namespace std;
int priority(char ch){
    if(ch=='/' || ch=='*') return 2;
    return 1;
}
int solve(int a, char ch, int b){
    if(ch=='+') return (a+b);
    if(ch=='-') return (a-b);
    if(ch=='*') return (a*b);
    return (a/b);
}
int main(){
    string s="(7+9)*4/8-3";
    stack<string> s1;
    stack<char> s2; 
    for(int i=0;i<s.length();i++){
        int ascii=(int)(s[i]);
        if(ascii>=48 && ascii<=57) s1.push(to_string(s[i]-48));
        else{
            if(s2.size()==0 || s[i]=='(' || s2.top()=='(' || (priority(s[i])>priority(s2.top()))) s2.push(s[i]);
            else if(s[i]==')'){
                while(s2.top()!='('){
                    char ch=s2.top();
                    s2.pop();
                    string val2=s1.top();
                    s1.pop();
                    string val1=s1.top();
                    s1.pop();
                    string postFix=val1+val2+ch;
                    s1.push(postFix);
                }
                s2.pop();
            }
            else{
                while(s2.size()>0 && s2.top()!='(' && priority(s[i])<=priority(s2.top())){
                    char ch=s2.top();
                    s2.pop();
                    string val2=s1.top();
                    s1.pop();
                    string val1=s1.top();
                    s1.pop();
                    string postFix=val1+val2+ch;
                    s1.push(postFix);
                }
                s2.push(s[i]);
            }
        }
    }
    while(s2.size()>0){
        char ch=s2.top();
        s2.pop();
        string val2=s1.top();
        s1.pop();
        string val1=s1.top();
        s1.pop();
        string postFix=val1+val2+ch;
        s1.push(postFix);
    }
    cout<<"Postfix expression of '(7+9)*4/8-3' : "<<s1.top()<<endl;
    return 0;
}