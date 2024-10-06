#include<iostream>
using namespace std;
int main(){
    int x,y=1;
    cout<<"Enter no. of rows: ";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<y++<<" ";
        }
        cout<<endl;
    }
}