#include<iostream>
using namespace std;
class player{
public:
    int score;
    int health;
    string name;

};
int main(){
    player Satyam;
    Satyam.score=90;
    Satyam.health=65;
    Satyam.name="Satyam";
    cout<<Satyam.name<<endl;
    cout<<Satyam.score<<endl;
    cout<<Satyam.health<<endl;
    return 0;
}