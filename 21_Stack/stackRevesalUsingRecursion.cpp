#include<iostream>
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

void reverse(stack<int> &st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushBottomRec(st,x);
    return;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<"  "<<st.size()<<endl;
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
    cout<<endl;
    cout<<st.top()<<"  "<<st.size()<<endl;
    return 0;
}