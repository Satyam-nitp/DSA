#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());  //sorting according to ascii value
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}