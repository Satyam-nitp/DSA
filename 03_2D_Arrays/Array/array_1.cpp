#include<iostream>
using namespace std;
void array(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main(){
    // int arr[]={0,1,1,1,2,3,4,4,5,6,7,7,8};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // // cout<<n<<endl;
    // cout<<arr; // print address
    int arr[]={12,23,34,45,56};
    array(arr);
    return 0;
}