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
    int n=5;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
    display(v);
    return 0;
}  