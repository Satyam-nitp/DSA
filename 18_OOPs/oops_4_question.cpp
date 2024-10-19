#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class cricketer{
private:
    string name;
    int age;
    int no_of_matches;
    int average_runs;

public:
    void setName(string name){
        this->name=name;
    }
    void setAge(int age){
        this->age=age;
    }
    void setNo_of_matches(int no_of_matches){
        this->no_of_matches=no_of_matches;
    }
    void setAverrage_runs(int average_runs){
        this->average_runs=average_runs;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getNo_of_matches(){
        return no_of_matches;
    }
    int getAverrage_runs(){
        return average_runs;
    }

};
int main(){
    cricketer virat;
    virat.setAge(40);
    virat.setAverrage_runs(76);
    virat.setName("Virat");
    virat.setNo_of_matches(502);

    cricketer dhoni;
    dhoni.setAge(46);
    dhoni.setAverrage_runs(78);
    dhoni.setName("Dhoni");
    dhoni.setNo_of_matches(550);


    vector<cricketer> v;
    v.push_back(virat);
    v.push_back(dhoni);

    for(int i=0;i<2;i++){
        cout<<v[i].getAge()<<endl;
        cout<<v[i].getAverrage_runs()<<endl;
        cout<<v[i].getName()<<endl;
        cout<<v[i].getNo_of_matches()<<endl;
    }
    return 0;
}