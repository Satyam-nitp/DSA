#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void maximum(vector<int> &v,int idx,int mx){
    if(idx==v.size()){
        cout<<mx<<endl;
        return;
    }
    mx=max(mx,v[idx]);
    maximum(v,idx+1,mx);
}
int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(0);
    v.push_back(36);
    v.push_back(145);
    v.push_back(-9);
    maximum(v,0,INT_MIN);
    return 0;
}