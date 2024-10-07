#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no. of rows: ";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int k=1;k<=(2*x-1);k++){
            if(i==1) cout<<k<<" ";
            else if(k<=(x-i+1) || k>=(x+i-1)) cout<<k<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

// int a=0;
        // for(int j=1;j<=(x-i+1);j++) {cout<<"* "; a++;}
        // for(int k=1;k<=(2*i-3);k++) {cout<<"  "; a++;}
        // for(int i=1;i<=(2*x-1-a);i++) cout<<"* ";
        // cout<<endl;