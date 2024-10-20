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
void change_cg(Student &s){
    s.cgpa=8;
}

int main(){
    Student s("Satyam",172,7.51);
    Student *p=&s;
    cout<<s.name<<endl;
    p->name="Krishna";
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name<<endl<<s.cgpa<<endl;
    change_cg(s);
    cout<<s.cgpa<<endl;
    return 0;
}