#include<iostream>
#include<vector>
using namespace std;
void display(vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return;
}
int main(){
    vector<vector<int>> v;
    vector<int> v1,v2,v3,v4,v5;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(7);
    v1.push_back(11);
    v1.push_back(15);

    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(8);
    v2.push_back(12);
    v2.push_back(19);


    v3.push_back(3);
    v3.push_back(6);
    v3.push_back(9);
    v3.push_back(16);
    v3.push_back(22);

    v4.push_back(10);
    v4.push_back(13);
    v4.push_back(14);
    v4.push_back(17);
    v4.push_back(24);

    v5.push_back(18);
    v5.push_back(21);
    v5.push_back(23);
    v5.push_back(26);
    v5.push_back(30);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);

    display(v);
    int target;
    cout<<"Enter Target: ";
    cin>>target;
    int i=0,j=v[0].size()-1;
    while(i<v.size() && j>=0){
        if(v[i][j]<target) i++;
        else if(v[i][j]>target) j--;
        else{
            cout<<"Target is present";
            return 0;
        }
    }
    cout<<"Target is not present!!"<<endl;
    return 0;
}