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
    vector<int> v1,v2,v3,v4;
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);

    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);


    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(0);
    v3.push_back(0);
    v3.push_back(1);

    v4.push_back(0);
    v4.push_back(1);
    v4.push_back(0);
    v4.push_back(0);
    v4.push_back(0);


    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    cout<<endl<<"Before fliping: "<<endl;
    display(v);
    for(int i=0;i<v.size();i++){
        if(v[i][0]==0){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }
    cout<<"Row flip: "<<endl;
    display(v);
    for(int j=1;j<v[0].size();j++){
        int zero=0,one=0;
        for(int i=0;i<v.size();i++){
            if(v[i][j]==0) zero++;
            else one++;
        }
        if(zero>one){
            for(int i=0;i<v.size();i++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }
    cout<<"column flip: "<<endl;
    display(v);
    cout<<"After fliping: "<<endl;
    display(v);
    int Overall_sum=0;
    for(int i=0;i<v.size();i++){
        int sum=0,x=1;
        for(int j=(v[i].size()-1);j>=0;j--){
            sum+=(x*v[i][j]);
            x*=2;
        }
        cout<<i<<"th row sum is: "<<sum<<endl;
        Overall_sum+=sum;
    }
    cout<<endl<<"Overall sum is: "<<Overall_sum<<endl<<endl;
}