#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
void reversePart(int i,int j,vector<int> &v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
void reverse(vector<int> &v){
    int i=0,j=v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int> a;
    int n;
    cout<<"Enter vector size: ";
    cin>>n;
    cout<<"Enter vector elements: ";
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        a.push_back(y);
    }
    int k;
    cout<<"Enter no. of steps: ";
    cin>>k;
    if(k>n) k%=n;
    cout<<"Before rotating: ";
    display(a);
    reversePart(0,n-1-k,a);
    reversePart(n-k,n-1,a);
    reverse(a);
    cout<<"Before rotating: ";
    display(a);
    return 0;
}