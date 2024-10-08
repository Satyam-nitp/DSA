#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
    return;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    display(v);
    // dutch flag algorithm
    int n=v.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(v[mid]==2){
            swap(v[mid],v[high]);
            high--;
        }
        if(v[mid]==0){
            swap(v[mid],v[low]);
            mid++;
            low++;
        }
        if(v[mid]==1) mid++;
    }
    display(v);
    return 0;
}