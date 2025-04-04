#include<iostream>
#include<stack>
#include<algorithm>
#include<string>
using namespace std;
void removeDuplicates(string &s){
    stack<char> st;
    st.push(s[0]);
    int a=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==st.top()) continue;
        else{
            st.push(s[i]);
            s[a++]=s[i];
        }
    }
    s.erase(s.begin()+a,s.end());
    return;
}
int main(){
    string s="aaaaaaaaabbzzzzzzzzzzzzzzzzzzz";
    cout<<s<<endl;
    removeDuplicates(s);
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}