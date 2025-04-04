#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void display(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return;
}

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

int main(){
    stack<int> st;
    st.push(10);
    display(st);
    cout<<"st top is: "<<st.top()<<",   st size is: "<<st.size()<<endl;
    // pushBottom(st,100);
    pushAtIndex(st,0,60);
    display(st);
    pushAtIndex(st,-1,20);
    display(st);
    pushAtIndex(st,2,50);
    display(st);
    pushAtIndex(st,5,100);
    display(st);
    pushAtIndex(st,1,40);
    display(st);
    cout<<"st top is: "<<st.top()<<",   st size is: "<<st.size()<<endl;
    return 0;
}