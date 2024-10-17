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
    cout<<endl;
    vector<int> v,y;
    v.push_back(-2);
    v.push_back(-5);
    v.push_back(-1);
    v.push_back(-5);
    v.push_back(-33);
    v.push_back(-3);
    sort(v.begin(),v.end());
    display(v);
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]<0) idx=i;
        else{
            y.push_back(v[i]);
        }
        
    }
    display(y);
    cout<<idx<<endl;
    // int sum=0;
    // sum=accumulate(v.begin()+idx, v.end(), sum);
    // cout<<sum<<endl;
    while(idx>=0){
        bool flag=false;
        int sum=0;
        sum=accumulate(v.begin()+idx+1, v.end(), sum);
        if(abs(v[idx])<sum){
            flag=true;
            y.insert(y.begin(),v[idx]);
        }
        if(flag==false) break;
        idx--;
    }
    display(y);
    int m=1;
    int s=0;
    for(int i=0;i<y.size();i++){
        s+=(m*y[i]);
        m++;
    }
    cout<<"The Ans is: "<<s<<endl;
    cout<<endl;
    return 0;
}