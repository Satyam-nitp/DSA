#include<iostream>
#include<stack>
using namespace std;
int main(){
    string preFix="-/*+79483";
    stack<string> s;
    for(int i=preFix.length()-1;i>=0;i--){
        int ascii=(int)(preFix[i]);
        if(ascii>=48 && ascii<=57) s.push((to_string(preFix[i]-48)));
        else{
            string val1=s.top();
            s.pop();
            string val2=s.top();
            s.pop();
            string ans=val1+preFix[i]+val2;
            s.push(ans);
        }
    }
    cout<<preFix<<endl;
    cout<<s.top()<<endl;
    cout<<(7+9)*4/8-3<<endl;
    return 0;
}