// 1st method

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y=1;
//     cout<<"Enter no. of rows: ";
//     cin>>x;
//     for(int i=1;i<=x;i++){
//         if(i%2==0) y=0;
//         else y=1;
//         for(int j=1;j<=i;j++){
//             cout<<y<<" ";
//             if(y==1) y=0;
//             else y=1;
//         }
//         cout<<endl;
//     }
// }

// 2nd Method

#include<iostream>
using namespace std;
int main(){
    int x,y=1;
    cout<<"Enter no. of rows: ";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
}