#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(7);
    v.push_back(8);
    v.push_back(6);
    v.push_back(5);
    v.push_back(2);
    find(v.begin(),v.end(),8);
    // cout<<idx<<endl;
    display(v);
    int ans=v[0];
    for(int i=1;i<v.size();i++) ans^=v[i];
    cout<<"Both no. xor is equal to: "<<ans<<endl;
    int k=0,j=1;
    int temp=ans;
    while(true){
        if((temp & 1)==1) break;
        temp>>=1;
        k++;
    }
    int retval=0;
    for(int i=0;i<v.size();i++){
        int num=v[i];
        if(((num>>k)&1)==1) retval^=num;
    }
    cout<<"1st no. is: "<<retval<<endl;
    cout<<"2nd no. is: "<<(retval^ans)<<endl;
    return 0;
}

// 1001
// 0111