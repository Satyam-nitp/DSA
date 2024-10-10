#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<string> v){
    for(int i=0;i<v.size();i++){
        cout<<"'"<<v[i]<<"'"<<" ";
    }
    cout<<endl;
    return;
}
void skip(string str,string s,int idx,vector<string> &v){
    if(idx==str.length()){
        v.push_back(s);
        return;
    }
    char ch=str[idx];
    skip(str,s,idx+1,v);
    skip(str,s+ch,idx+1,v);
}
int main(){
    string str="abc";
    vector<string> v;
    skip(str,"",0,v);
    display(v);
    cout<<v.size()<<endl;
    return 0;
}