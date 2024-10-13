#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<climits>
#include<numeric>
using namespace std;
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
            v.push_back(i);
            if(i!=(n/i)) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}
int main(){
    int n=33550336;
    vector<int> v=factor(n);
    cout<<"Factors of "<<n<<" is: ";
    display(v);
    int sum=0;
    sum=accumulate(v.begin(),v.end()-1,sum);
    if(n==sum) cout<<n<<" is a perfect number."<<endl;
    else cout<<n<<" is a not perfect number."<<endl;
    return 0;
}