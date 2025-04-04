#include<iostream>
#include<stack>
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
    string s="2+4*8/2+2+8/4-2";
    stack<int> s1;
    stack<char> s2;
    cout<<"(code ans: )"<<s<<" = ";
    for(int i=0;i<s.length();i++){
        int ascii=(int)(s[i]);
        if(ascii>=48 && ascii<=57) s1.push(s[i]-48);
        else{
            if(s2.size()==0 || (priority(s[i])>priority(s2.top()))) s2.push(s[i]);
            else{
                while(s2.size()>0 && priority(s[i])<=priority(s2.top())){
                    char ch=s2.top();
                    s2.pop();
                    int val2=s1.top();
                    s1.pop();
                    int val1=s1.top();
                    s1.pop();
                    int ans=solve(val1, ch, val2);
                    s1.push(ans);
                }
                s2.push(s[i]);
            }
        }
    }
    while(s2.size()>0){
        char ch=s2.top();
        s2.pop();
        int val2=s1.top();
        s1.pop();
        int val1=s1.top();
        s1.pop();
        int ans=solve(val1, ch, val2);
        s1.push(ans);
    }
    cout<<s1.top()<<endl;
    cout<<"(Mathematical ans: )"<<s<<" = "<<2+4*8/2+2+8/4-2<<endl;
    return 0;
}