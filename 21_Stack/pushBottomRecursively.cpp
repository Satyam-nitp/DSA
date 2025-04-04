#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void display(stack<int> &st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
    return;
}

void pushBottomRec(stack<int> &st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushBottomRec(st,val);
    st.push(x);
    return;
}

int main(){
    stack<int> st;
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<endl;
    display(st);
    cout<<endl;
    pushBottomRec(st,10);
    display(st);
    cout<<endl;
    return 0;
}