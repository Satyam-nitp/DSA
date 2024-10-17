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
    // product of array except self
    vector<int> v;
    v.push_back(-1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(-3);
    v.push_back(0);
    int n=v.size();
    display(v);

    //prefix product vector
    vector<int> pre;
    pre.push_back(1);
    int p=v[0];
    for(int i=1;i<v.size();i++){
        pre.push_back(p);
        p*=v[i];
    }
    display(pre);

    //Sufix product vector
    // vector<int> suf(v.size());
    // suf[n-1]=1;
    int q=v[n-1];
    for(int i=n-2;i>=0;i--){
        pre[i]*=q;
        q*=v[i];
    }
    display(pre);

}