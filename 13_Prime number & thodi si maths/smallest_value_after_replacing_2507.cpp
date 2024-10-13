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
vector<int> factor(int n){
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(isprime(i)){
                int m=n;
                while(m%i==0){
                    v.push_back(i);
                    m/=i;
                }
            }
            if(i!=(n/i) && isprime(n/i)) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}
int prime_factor_sum(int n){
    vector<int> v=factor(n);
    int sum=0;
    sum=accumulate(v.begin(),v.end(),sum);
    return sum;
}
int main(){
    int n=72;
    int m=n;
    display(factor(n));
    cout<<prime_factor_sum(n)<<endl;
    while(!isprime(n)){
        n=prime_factor_sum(n);
        if(n==m) break;
    }
    cout<<n<<endl;
    return 0;
}