#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float cgpa;

    Student(string name,int rno,float cgpa){
        this->name=name;
        this->rno=rno;
        this->cgpa=cgpa;
    }

};

void change(Student *s){
    s->name="Radha";
}

int main(){
    Student *s= new Student("Satyam",172,7.51);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;
    return 0;
}