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
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    // sort(v.begin(),v.end() , greater<int>());
    // display(v);
    //bubble sort
    int a=0;
    for(int i=0;i<4;i++){
        bool flag=true;
        for(int j=0;j<(4-i);j++){
            cout<<a++<<"\t";
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<endl;
    display(v);
    return 0;
}