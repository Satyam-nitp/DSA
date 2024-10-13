#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
vector<int> factor(int n){
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.push_back(i);
            if(i!=(n/i)) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}
int main(){
    display(factor(36));
    return 0;
}