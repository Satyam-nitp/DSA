#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
int binary(vector<int> v,int target){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(v[mid]==target) return mid;
        else if(v[mid]>target) j=mid-1;
        else i=mid+1;
    }
    return j;
}
int main(){
    // 469781,45635,628818,324948,343772,713803,452081
    vector<int> n,q;
    n.push_back(469781);
    n.push_back(45635);
    n.push_back(628818);
    n.push_back(324948);
    n.push_back(343772);
    n.push_back(713803);
    n.push_back(452081);
    sort(n.begin(),n.end());
    display(n);
    // 816646,929491
    q.push_back(816646);
    q.push_back(929491);
    display(q);
    for(int i=1;i<n.size();i++) n[i]+=n[i-1];
    display(n);
    for(int i=0;i<q.size();i++){
        int ans=0;
        int lo=0;
        int hi=n.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(n[mid]>q[i]) hi=mid-1;
            else{
                ans=mid+1;
                lo=mid+1;
            }
        }
        q[i]=ans;
    }
    display(q);

    // PREFIX SUM

    return 0;
}