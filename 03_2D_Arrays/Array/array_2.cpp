#include<iostream>
using namespace std;
int main(){
    // array and pointer
    int arr[]={11,25,38,74,55,36};
    // int *ptr=arr; correct way
    // int *ptr=&arr; wrong way;
    // int *ptr=arr[0] correct way;
    int *ptr=arr;
    // ptr[0]=8;
    // arr[1]=9;
    // for(int i=0;i<=5;i++){
    //     cout<<ptr[i]<<" ";
    // }
    // accessing the array through only pointer and modifying too
    // *ptr is the pointer pointing to the 1st index of an array
    // cout<<*ptr<<endl;
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    // Modifying the array
    *ptr=8; // modyifying 1st index;
    // ptr++; // now the pointer is at the 2nd element
    *(ptr+1)=9;
    for(int i=0;i<=5;i++){
        cout<<ptr[i]<<" ";
    }

    cout<<endl;
    //Modifying whole array
    for(int i=0;i<=5;i++){
        *(ptr+i)=(i*i+5);
        cout<<ptr[i]<<" ";
    }

    return 0;
}