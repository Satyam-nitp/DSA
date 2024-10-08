#include<iostream>
#include<vector>
using namespace std;
void change(vector<vector<int>> &v){
    v[0][1]=100;
    return;
}
int main(){
    vector<vector<int>> v;
    vector<int> v1,v2,v3;
    v1.push_back(5);
    v1.push_back(14);
    v1.push_back(9);

    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(7);

    v1.push_back(3);
    v1.push_back(18);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][1]<<endl;
    change(v);
    cout<<v[0][1]<<endl;
}