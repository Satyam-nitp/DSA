#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return;
}
void subset(vector<int> &v,vector<int> ans,vector<vector<int>> &answer,int idx){
    // vector<vector<int>> answer;
    if(idx==v.size()){
        answer.push_back(ans);
        return;
    } 
    subset(v,ans,answer,idx+1);
    ans.push_back(v[idx]);
    subset(v,ans,answer,idx+1);
}
int main(){
    vector<vector<int>> answer;
    vector<int> v,ans;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // display(v);
    subset(v,ans,answer,0);
    display(answer);
    return 0;
}