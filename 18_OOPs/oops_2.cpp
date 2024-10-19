#include<iostream>
#include<climits>
using namespace std;
class player{
private:
    int score;
    int health;
    string name;

public:
    void setscore(int score){
        this->score=score;
    }
    void sethealth(int health){
        this->health=health;
    }
    void setname(string name){
        this->name=name;
    }
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
    string getname(){
        return name;     
    }

};
int addscore(player a, player b){
    return a.getscore()+b.getscore();
}
int getMaxScore(player a, player b){
    return max(a.getscore(), b.getscore());
}

// naya cheese
player getMxScorePlayer(player a,player b){
    if(a.getscore()>b.getscore()) return a;
    return b;
}

int main(){
    player Satyam;
    Satyam.setscore(95);
    Satyam.sethealth(65);
    Satyam.setname("Satyam");

    player Krishna;
    Krishna.setscore(100);
    Krishna.sethealth(INT_MAX);
    Krishna.setname("Krishna");

    cout<<addscore(Krishna,Satyam)<<endl;
    cout<<getMaxScore(Krishna,Satyam)<<endl;

    getMxScorePlayer(Krishna,Satyam);
    // this returns a player which can't be directly printed
    // so make a class object and assign it's value to it
    
    player radha=getMxScorePlayer(Krishna,Satyam);
    cout<<radha.getname()<<" "<<radha.getscore()<<endl;

    player *k=new player;
    k->setname("Shree Ji");
    cout<<k->getname()<<endl;
    player balram=*k;
    player lalita=*k;
    balram.setname("Balram");
    lalita.setname("Lalita");
    cout<<balram.getname()<<" "<<lalita.getname()<<endl;

    return 0;
}