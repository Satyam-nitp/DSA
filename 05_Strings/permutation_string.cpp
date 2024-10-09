#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<string> v){
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
    return;
}
void permutation(string s, vector<string> &v){
    if(s.length()==1){
        v.push_back(s);
        return;
    }
    char ch=s[0];
    s.erase(s.begin());
    permutation(s,v);
    return;
}
int main(){
    string s="abc";
    vector<string> v;
    permutation(s,v);
    display(v);
}