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
    int target=6;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    display(v);
    int i=0,j=v.size()-1;
    if(target<=v[i]){
        cout<<"Lower bound not exist";
        return 0;
    }
    if(target==v[j]){
        cout<<v[j-1];
        return 0;
    }
    while(i<j){
        int mid=i+(j-i)/2;
        if(target==v[mid]){
            cout<<v[mid-1];
            return 0;
        }
        else if(target>v[mid]) i=mid+1;
        else j=mid-1;
    }
    cout<<v[i];
    return 0;
}