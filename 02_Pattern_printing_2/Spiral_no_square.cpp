#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter no. of rows: ";
    cin>>x;
    for(int i=1;i<=(2*x-1);i++){
        for(int j=1;j<=(2*x-1);j++){
            int a=i,b=j;
            if(a>4) a=2*x-a;
            if(b>4) b=2*x-b;
            int c=min(a,b);
            cout<<(x-c+1)<<" ";
        }
        cout<<endl;
    }
}