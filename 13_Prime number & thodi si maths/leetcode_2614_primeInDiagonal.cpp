#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
bool isprime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void display(vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
    return;
}
int main(){
    vector<vector<int>> o;
    vector<int> i1;
    i1.push_back(101);
    i1.push_back(2);
    i1.push_back(9);
    vector<int> i2;
    i2.push_back(4);
    i2.push_back(107);
    i2.push_back(6);
    vector<int> i3;
    i3.push_back(70);
    i3.push_back(8);
    i3.push_back(97);
    o.push_back(i1);
    o.push_back(i2);
    o.push_back(i3);
    display(o);
    int mx=0;
    for(int i=0;i<o.size();i++){
        if(isprime(o[i][i])) mx=max(mx,o[i][i]);
        if(isprime(o[i][o.size()-i-1])) mx=max(mx,o[i][o.size()-i-1]);
    }
    cout<<"The largest prime number in the diagonal is: "<<mx<<endl;
    return 0;
}