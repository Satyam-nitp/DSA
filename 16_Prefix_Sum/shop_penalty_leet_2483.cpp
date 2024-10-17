#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    string s="YYYYYYYYYNNYY";
    cout<<s<<endl<<s.length()<<endl;

    //penalty vector = no. of N before that hour + no. of Y after and at that hour

    //prefix means N
    // vector<int> y(s.length()+1);
    // int pre=0;
    // y[0]=0;
    // for(int i=1;i<=s.length();i++){
    //     if(s[i-1]=='N') pre++;
    //     y[i]=pre;
    // }
    // display(y);
    
    // //sufix means Y
    // int n=s.length();
    // int suf=0;
    // for(int i=n-1;i>=0;i--){
    //     if(s[i]=='Y') suf++;
    //     y[i]+=suf;
    // }
    // cout<<"Penalty Vector is: "<<endl;
    // display(y);

    // // return minimum element index from left
    // int min=y[0];
    // int idx=0;
    // for(int i=1;i<y.size();i++){
    //     if(y[i]<min){
    //         min=y[i];
    //         idx=i;
    //     }
    // }
    // cout<<idx<<endl;
    // return 0;

    vector<int> prefix(s.length()+1);
    int pre=0;
    prefix[0]=pre;
    for(int i=1;i<prefix.size();i++){
        if(s[i-1]=='N') pre++;
        prefix[i]=pre;
    }
    display(prefix);

    // sufix
    int suf=0;
    prefix[s.length()]+=suf;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='Y') suf++;
        prefix[i]+=suf;
    }
    cout<<"Penalty vector is: "<<endl;
    display(prefix);

    int min=prefix[0];
    int idx=0;
    for(int i=1;i<prefix.size();i++){
        if(min>prefix[i]){
            min=prefix[i];
            idx=i;
        }
    }
    cout<<"The Ans is: "<<idx<<endl;
}