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
int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    v.push_back(4);
    v.push_back(9);
    v.push_back(3);
    v.push_back(6);
    display(v);
    int k=3;
    int preSum=0;
    preSum=accumulate(v.begin(),v.begin()+k,preSum);
    int maxSum=preSum;
    int i=1,j=k;
    while(j<v.size()-1){
        preSum+=(v[j]-v[i-1]);
        if(maxSum<preSum) maxSum=preSum;
        preSum=preSum;
        i++;
        j++;
    }
    // RADHA RADHA
    cout<<maxSum<<endl;
    return 0;
}