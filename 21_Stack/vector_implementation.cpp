#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Stack{
public:
    vector<int> v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"Stack UnderFlow !!"<<endl;
            return;
        }
        v.pop_back();
    }
    int top(){
        if(v.size()==0){
            cout<<"Stack is Empty !!"<<endl;
            return -1;
        }
        return v.back();
    }
    int size(){
        return v.size();
    }

};

using namespace std;
int main(){
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top()<<endl;
    st.push(50);
    cout<<st.top()<<endl;
    st.push(60);
    cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    return 0;
}