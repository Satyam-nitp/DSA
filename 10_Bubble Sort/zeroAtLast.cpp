#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    vector<int> v;
    int n=9;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-1-i);j++){
            if(v[j]==0){
                swap(v[j],v[j+1]);
            }
        }
    }
    display(v);
    return 0;
}