#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    Bike(int tyreSize, int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }
    ~Bike(){
        cout<<"Destructure call hua hai"<<endl;
    }
};

int main(){
    Bike tvs(12,100);
    Bike kawasaki(15,150);
    Bike pulser(20,200);
    bool flag=true;
    if(flag==true){
        Bike honda(18,150);
        cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    }
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<kawasaki.tyreSize<<" "<<kawasaki.engineSize<<endl;
    cout<<pulser.tyreSize<<" "<<pulser.engineSize<<endl;
    return 0;
}