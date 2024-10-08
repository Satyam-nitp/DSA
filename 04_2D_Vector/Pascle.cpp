#include<iostream>
#include<vector>
using namespace std;
// vector<vector<int>> Pascle(int row){
//     vector<vector<int>> v(row);
//     for(int i=0;i<row;i++){
//         int curr=1;
//         for(int j=0;j<=i;j++){
//             v[i].push_back(curr);
//             curr=curr*(i-j)/(j+1);
//         }
//     }
//     return v;
// }
int main(){
    // cout<<"[ ";
    // for(int i=0;i<Pascle(5).size();i++){
    //     cout<<"[";
    //     for(int j=0;j<Pascle(5)[i].size();j++){
    //         cout<<Pascle(5)[i][j];
    //         if(j!=(Pascle(5)[i].size()-1)) cout<<" ";
    //     }
    //     cout<<"], ";
    // }
    // cout<<"]";
    int n=5;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        vector<int> v1(i+1);
        v[i]=v1;
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) v[i][j]=1;
            else
            v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }
    cout<<"Pascle: "<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}