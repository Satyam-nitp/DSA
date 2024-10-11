#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(7);
    v.push_back(8);
    v.push_back(6);
    v.push_back(20);
    // v.push_back(20);
    // v.push_back(20);
    v.push_back(5);
    v.push_back(2);
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);
    // v.push_back(18);
    // v.push_back(18);
    // v.push_back(18);

    display(v);
    int x=INT_MIN;
    int count=0,ans=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            x=v[i];
            count=1;
        }
        else if(v[i]==x) count++;
        // else count=0;
        ans=max(ans,count);
    }
    cout<<ans<<endl;
    return 0;
}

// 1001
// 0111