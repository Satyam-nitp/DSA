#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no. of rows: ";
    cin>>x;
    int y=x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            cout<<j;
        }
        y--;
        cout<<endl;
    }
    return 0;
}