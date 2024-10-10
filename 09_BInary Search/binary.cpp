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
    int target=9;
    bool flag=false;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);
    v.push_back(15);
    v.push_back(18);
    v.push_back(21);
    display(v);
    int i=0,j=v.size()-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(target==v[mid]){
            flag=true;
            break;
        }
        else if(target>v[mid]) i=mid+1;
        else j=mid-1;
    }
    if(flag==true) cout<<"Element is present";
    else cout<<"Element not present";
    return 0;
}



