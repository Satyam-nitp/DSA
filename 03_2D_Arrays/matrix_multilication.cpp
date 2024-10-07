#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<endl<<"_____Array-1_____"<<endl;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of columns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter array elements: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int x,y;
    cout<<"_____Array-2_____"<<endl;
    cout<<"Enter no. of rows: ";
    cin>>x;
    cout<<"Enter no. of columns: ";
    cin>>y;
    int brr[x][y];
    cout<<"Enter array elements: ";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl<<"Array-1 is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Array-2 is: "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    if(n!=x){
        cout<<endl<<".....___ Matrix can't be multiplied ___....."<<endl<<"as the no. of column of 1st matrix is not equal to no. of rows of 2nd matrix";
        return 0;
    }
    int res[m][y];
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            int sum=0;
            for(int k=0;k<n;k++){
                sum+=(arr[i][k]*brr[k][j]);
            }
            res[i][j]=sum;
        }
    }
    cout<<endl<<"Resultant array after multiplication is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}