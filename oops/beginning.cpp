#include<iostream>
using namespace std;

class hero{
    int health;
    char level;

    public:
    string name;
    //constructor
    hero(){
    }
    hero(int health, char level, string name){
        cout<<"called"<<endl;
        this->health = health;
        this->level = level;
        this->name = name;
    }
 
    void setVal(int health, char level, string name){
        this->health = health;
        this->health = level;
        this->name = name;
    }
    void disp(){
        cout<<this->name<<endl;
        cout<<this->health<<endl;
    }
};
int main(){
    hero khufra;
    khufra.setVal(100,20,"khufra");
    khufra.disp();


    hero *sage = new hero;
    (*sage).setVal(20,20,"sage");
    (*sage).disp();

    hero hero1(10,10,"Naruto");
    hero1.disp();
    return 0;
    
}