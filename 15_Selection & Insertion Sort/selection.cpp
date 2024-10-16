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
    int n=5;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    for(int i=0;i<n-1;i++){
        int min=v[i];
        int mindx=-1;
        bool flag=true;
        for(int j=i+1;j<n;j++){
            if(v[j]<min){
                min=v[j];
                mindx=j;
                flag=false;
            }
        }
        if(flag==false) swap(v[i],v[mindx]);
    }
    display(v);
    return 0;
}