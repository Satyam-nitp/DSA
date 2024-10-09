#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="myself  satyam      singh";
    cout<<str<<endl;
    stringstream ss(str);
    string temp;
    string ans="";
    while(ss>>temp) ans=temp+" "+ans;
    ans.pop_back();
    cout<<ans<<endl;
    return 0;
}