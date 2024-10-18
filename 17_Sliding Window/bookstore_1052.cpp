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
    vector<int> v,s;
    v.push_back(4);
    v.push_back(10);
    v.push_back(10);
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(7);
    // v.push_back(5);
    display(v);         
    // राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा राधा 
    s.push_back(1);
    s.push_back(1);
    s.push_back(0);
    // s.push_back(1);
    // s.push_back(0);
    // s.push_back(1);
    // s.push_back(0);
    // s.push_back(1);
    display(s);
    int minute=2;
    int sum=0;
    sum=accumulate(v.begin(),v.begin()+minute,sum);
    cout<<"Sum is: "<<sum<<endl;
    int maxSum=sum;
    int idx=-1;
    int i=1,j=minute;
    bool flag=false;
    while(j<v.size()){
        sum+=(v[j]-v[i-1]);
        if(maxSum<sum){
            maxSum=sum;
            idx=i;
        }
        i++;
        j++;
        flag=true;
    }
    cout<<maxSum<<"   "<<idx<<endl;
    for(int i=0;i<s.size();i++){
        if(i>=idx && i<idx+minute && flag==true) continue;
        if(s[i]==0 && flag==true) maxSum+=v[i];
    }
    cout<<maxSum<<endl;
    return 0;
}