#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="myself satyam from singh ursuing Btech from NIT Patna. satyam is a good from boy";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
    // cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
    cout<<endl;
    int count=1,max=0;
    for(int i=1;i<v.size();i++){
        if(v[i-1]==v[i]) count++;
        else count=1;
        if(max<count) max=count;
    }
    cout<<max<<endl;
    return 0;
} 