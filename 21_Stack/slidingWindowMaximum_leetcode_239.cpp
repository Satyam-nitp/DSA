#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<numeric>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    return;
}
int main(){
    vector<int> v;
    v.push_back(-6);
    v.push_back(-10);
    v.push_back(-7);
    v.push_back(-1);
    v.push_back(-9);
    v.push_back(9);
    v.push_back(-8);
    v.push_back(-4);
    v.push_back(10);
    v.push_back(-5);
    v.push_back(2);
    v.push_back(9);
    v.push_back(0);
    v.push_back(-7);
    v.push_back(7);
    v.push_back(4);
    v.push_back(-2);
    v.push_back(-10);
    v.push_back(8);
    v.push_back(7);
    display(v);
    stack<int> st;
    st.push(v.size()-1);
    vector<int> nge(v.size());
    nge[v.size()-1]=v.size();
    for(int i=v.size()-2;i>=0;i--){
        while(st.size()!=0 && v[i]>v[st.top()]) st.pop();
        if(st.size()==0) nge[i]=v.size();
        else nge[i]=st.top();
        st.push(i);
    }
    display(nge);
    int k=7;
    vector<int> ans(v.size()+1-k);
    for(int i=0;i<=v.size()-k;i++){
        for(int j=i;j<i+k;j++){
            if(nge[j]>=j && nge[j]<=(i+k-1)) continue;
            else{
                ans[i]=v[j];
                break;
            }
        }
    }
    display(ans);
    return 0;
}