#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no. of rows: ";
    cin>>x;
    for(int i=1;i<=x;i++){
        // int a=1;
        for(int j=1;j<=x;j++){
            if(j<=(x-i)) cout<<"  ";
            else cout<<"* ";
        }
        cout<<endl;
    }
}