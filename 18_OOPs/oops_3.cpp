#include<iostream>
#include<climits>
using namespace std;

class Gun{
private:
    int ammo;
    int scope;

public:
    void setAmmo(int ammo){
        this->ammo=ammo;
    }
    void setScope(int scope){
        this->scope=scope;
    }
    int getAmmo(){
        return ammo;
    }
    int getScope(){
        return scope;
    }
};

class player{
private:
    class Helmet{
    private:
        int hp;
        int level;

    public:
        void setHp(int hp){
            this->hp=hp;
        }
        void setLevel(int level){
            this->level=level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }

    };

    int score;
    int health;
    string name;
    Gun gun;
    Helmet helmet;


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
    void setGun(Gun gun){
        this->gun=gun;
    }
    void setHelmet(int level){
        Helmet *helmet=new Helmet;
        helmet->setLevel(level);
        int health=0;
        if(level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=75;
        else if(level==4) health=100;
        else cout<<"ERROR, invalid level!!"<<endl;
        helmet->setHp(health);
        this->helmet=*helmet;
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
    Gun getGun(){
        return gun;
    }
    void getHelmet(){
        cout<<"Helmet level is: "<<helmet.getLevel()<<endl;
        cout<<"Helmet hp is: "<<helmet.getHp()<<endl;
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

    // # samajh gaya bracket nhi use hoga thik hai n
    // # samajh gya = use hoga

    Gun akm;
    akm.setAmmo(45);
    akm.setScope(2);

    Gun awm;
    awm.setAmmo(2);
    awm.setScope(8);

    player Satyam;
    Satyam.setscore(95);
    Satyam.sethealth(65);
    Satyam.setname("Satyam");
    Satyam.setGun(akm);
    Satyam.setHelmet(2);

    cout<<endl;

    Gun gun1=Satyam.getGun();
    cout<<"Satyam wale bandook ki goli: "<<gun1.getAmmo()<<endl<<"Satyam wale bandook ka scope: "<<gun1.getScope()<<endl;
    cout<<"Satyam ka score: "<<Satyam.getscore()<<endl<<"Satyam ka health: "<<Satyam.gethealth()<<endl<<"Satyam ka name: "<<Satyam.getname()<<endl;

    // helmet printing
    // Helmet class is private so we can't use it as in main function

    cout<<"Satyam ka helmet---> "<<endl;
    Satyam.getHelmet();

    player Krishna;
    Krishna.setscore(100);
    Krishna.sethealth(INT_MAX);
    Krishna.setname("Banke Bihari Ji");
    Krishna.setGun(awm);
    Krishna.setHelmet(4);

    cout<<endl;

    Gun gun2=Krishna.getGun();
    cout<<"Krishna ji ke bandook ki goli: "<<gun2.getAmmo()<<endl<<"Krishna ji ke bandook ka scope: "<<gun2.getScope()<<endl;
    cout<<"Krishna ji ka score: "<<Krishna.getscore()<<endl<<"Krishna ji ka health: "<<Krishna.gethealth()<<endl<<"Krishan ji ka name: "<<Krishna.getname()<<endl;

    // krishna ji ka helmet printing
    cout<<"Krishna ji ka Helmet---> "<<endl;
    Krishna.getHelmet();

    cout<<endl;
    return 0;
}