#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no. of rows: ";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=(2*i-1);j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}