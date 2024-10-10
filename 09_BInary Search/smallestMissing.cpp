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
    // int target=21;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(10);
    v.push_back(12);
    v.push_back(15);
    v.push_back(17);
    display(v);
    int i=0,j=v.size()-1;
    int ans=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(v[mid]==mid) i=mid+1;
        else{
            ans=mid;
            j=mid-1;
        }
    }
    cout<<ans;
    return 0;
}