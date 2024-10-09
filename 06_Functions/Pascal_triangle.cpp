#include<iostream>
using namespace std;
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
// int pnc(int n,int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int curr=1;
        for(int j=0;j<=i;j++){
            // cout<<pnc(i,j)<<" ";
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}