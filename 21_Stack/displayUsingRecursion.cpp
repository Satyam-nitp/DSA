#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void pushBottom(stack<int> &st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    return;
}

void pushAtIndex(stack<int> &st, int idx, int val){
    if(idx<0 || idx>st.size()){
        cout<<"ERROR!! Index out of bound"<<endl;
        return;
    }
    if(idx==0) st.push(val);
    else if(idx==st.size()) pushBottom(st,val);
    else{
        stack<int> t;
        for(int i=0;i<idx;i++){
            t.push(st.top());
            st.pop();
        }
        st.push(val);
        while(t.size()>0){
            st.push(t.top());
            t.pop();
        }
    }
    return;
}

void displayRec(stack<int> &st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayRec(st);
    st.push(x);
    return;
}

void display(stack<int> &st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
    return;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top()<<endl<<st.size()<<endl;
    displayRec(st);
    cout<<endl;
    cout<<st.top()<<endl<<st.size()<<endl;
    display(st);
    cout<<endl;
    cout<<st.top()<<endl<<st.size()<<endl;
    return 0;
}