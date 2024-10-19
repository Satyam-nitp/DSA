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
};

void print1(){
    int b=10; // memory becomes static;
    cout<<b<<endl;
    b++;
}

void print2(){
    static int b=10; // memory becomes static;
    cout<<b<<endl;
    b++;
}
int main(){
    // Bike tvs(12,100);
    // Bike kawasaki(15,150);
    print1();
    print1();
    print1(); // everytime new b is created

    print2(); // b is static
    print2();
    print2(); 
    return 0;
}