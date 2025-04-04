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
    
    vector<int> v;
    v.push_back(100);
    v.push_back(80);
    v.push_back(60);
    v.push_back(81);
    v.push_back(70);
    v.push_back(60);
    v.push_back(75);
    v.push_back(85);
    display(v);
    vector<int> ans(v.size());
    display(ans);
    // POP, ANS, PUSH
    ans[0]=1;
    stack<int> st;
    st.push(0);
    for(int i=1;i<v.size();i++){
        // STEP-1: POP
        while(st.size()!=0 && v[st.top()]<=v[i]) st.pop();
        // STEP-2: MARK THE ANS
        if(st.size()==0) ans[i]=1;
        else ans[i]=(i-st.top());
        // STEP-3: PUSH
        st.push(i);
    }
    display(ans);
    return 0;
}