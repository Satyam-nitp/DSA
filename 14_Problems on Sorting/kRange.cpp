#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
}
float min(float a,float b){
    if(a<=b) return a;
    else return b;
}
float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    // v.push_back(6);
    display(v);
    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);
    bool flag=true; 
    for(int i=0;i<(v.size()-1);i++){
        if(v[i]>=v[i+1]) kmin=max(kmin,((v[i]+v[i+1])/2));
        else kmax=min(kmax,((v[i]+v[i+1])/2));
        if(kmin>kmax){
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else cout<<"Range of k is: "<<"["<<kmin<<", "<<kmax<<"]"<<endl;
    return 0;
}