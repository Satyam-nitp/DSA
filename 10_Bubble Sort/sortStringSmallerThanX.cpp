#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// void display(vector<int> v){
//     for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
//     cout<<endl;
// }
int main(){
    string s="AZYZXBNDLSXY";
    cout<<s<<endl;
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]>='X') str.push_back(s[i]);
    }
    cout<<str<<endl;
    for(int i=0;i<(str.length()-1);i++){
        bool flag=true;
        for(int j=0;j<(str.length()-1-i);j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<str<<endl;
    return 0;
}