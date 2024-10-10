#include<iostream>
// #include<vector>
// #include<algorithm>
using namespace std;
// void display(vector<int> v){
//     for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
//     cout<<endl;
// }
int main(){
    int x;
    bool flag=true;
    cin>>x;
    int i=0,j=x;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(mid*mid==x){
            cout<<mid;
            flag=false;
            break;
        }
        else if(mid*mid>x) j=mid-1;
        else i=mid+1;
    }
    if(flag==true) cout<<j;
    return 0;
}