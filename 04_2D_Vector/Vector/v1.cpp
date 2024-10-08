#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    cout<<"Enter Size: ";
    cin>>x;
    cout<<"Enter vector elements: ";
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }
    cout<<"Vector before reversing: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i=0,j=v.size()-1;
    cout<<"Vector after reversing: ";
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}