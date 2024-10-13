#include<iostream>
#include<vector>
using namespace std;
void display(vector<long long int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
vector<long long int> factorial(int n){
    vector<long long int> fact(n+1,1);
    int mod=1000000007;
    for(int i=2;i<=n;i++){
        fact[i]= ((i%mod) * (fact[i-1]%mod))%mod;
    }
    return fact;
}
int main(){
    display(factorial(25)); 
    return 0;
}