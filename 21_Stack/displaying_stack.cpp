#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return;
}

// Reverse using two extra stack
void reverse(stack<int> &st){
    stack<int> t1,t2;
    while(st.size()>0){
        t1.push(st.top());
        st.pop();
    }
    while(t1.size()>0){
        t2.push(t1.top());
        t1.pop();
    }
    while(t2.size()>0){
        st.push(t2.top());
        t2.pop();
    }
}

// Reverse using vector
void reverse2(stack<int> &st){
    vector<int> v;
    while(st.size()>0){
        v.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<v.size();i++) st.push(v[i]);
}

// Reverse using a linked list
void reverse3(stack<int> &st){
    Node *ans=new Node(0);
    Node *a=ans;
    while(st.size()>0){
        Node *t=new Node(st.top());
        a->next=t;
        a=a->next;
        st.pop();
    }
    Node*temp=ans->next;
    while(temp){
        st.push(temp->val);
        temp=temp->next;
    }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<"st Top is: "<<st.top()<<"  "<<"st size is: "<<st.size()<<endl;
    reverse(st);
    display(st);
    cout<<"st Top is: "<<st.top()<<"  "<<"st size is: "<<st.size()<<endl;
    reverse2(st);
    display(st);
    cout<<"st Top is: "<<st.top()<<"  "<<"st size is: "<<st.size()<<endl;
    reverse3(st);
    display(st);
    cout<<"st Top is: "<<st.top()<<"  "<<"st size is: "<<st.size()<<endl;
    return 0;
}