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
    // v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    // v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(0);
    display(v);
    int i=0,j=v.size()-2;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(v[mid]>v[mid+1] && v[mid]>v[mid-1]){
            cout<<mid<<" "<<v[mid];
            break;
        }
        else if(v[mid]>v[mid+1]) j=mid-1;
        else i=mid+1;
    }
    return 0;
}