#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    return;
}
// void nextGreater(vector<int> v){
//     stack<int> st;
//     for(int i=0;i<v.size();i++){
//         if(st.size()==0) st.push(v[i]);
//         else{
//             v[i]>
//         }
//     }
// }
int main(){
    // TC: O(n)
    // Using Stack and Reverse traverse
    
    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(7);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    display(v);
    vector<int> ans(v.size());
    display(ans);
    // POP, ANS, PUSH
    ans[v.size()-1]=-1;
    stack<int> st;
    st.push(v[v.size()-1]);
    for(int i=v.size()-2;i>=0;i--){
        // STEP-1: POP
        while(st.size()!=0 && st.top()<=v[i]) st.pop();
        // STEP-2: MARK THE ANS
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        // STEP-3: PUSH
        st.push(v[i]);
    }
    display(ans);
    return 0;
}