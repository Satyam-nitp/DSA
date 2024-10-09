#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="physicswallah";
    vector<int> v(26);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int ascii=int(ch);
        v[ascii-97]++;
    }
    int mx=*max_element(v.begin(),v.end());
    for(int i=0;i<26;i++) if(v[i]==mx){
        cout<<(char)(i+97)<<" "<<mx<<endl;
    }
}