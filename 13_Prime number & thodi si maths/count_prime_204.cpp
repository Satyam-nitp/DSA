#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<climits>
#include<numeric>
using namespace std;
bool isprime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true; 
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    int n=100;
    int a=1;
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<a++<<"st no. is: "<<i<<endl;
        }
    }
    return 0;
}