#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
void skip(vector<int> &v,vector<int> &ans,int idx){
    if(idx==v.size()){
        display(ans);
        return;
    }
    int x=v[idx];
    if(x==1) skip(v,ans,idx+1);
    else{
        ans.push_back(x);
        skip(v,ans,idx+1);
    }
}
int main(){
    vector<int> v,ans;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    cout<<"Normal display: "<<endl;
    display(v);
    skip(v,ans,0);
    return 0;
}