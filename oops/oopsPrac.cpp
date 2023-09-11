#include<iostream>
#include<string>
#include<string.h>

// #include"hero.cpp"
using namespace std;


class Hero{
    string name;
    int health;
    int level;
    // string *nickname;
    public:
        static int time;
        void getData(){
            cout<<this->health<<endl;
            cout<<this->level<<endl;
            cout<<this->name<<endl;
            // cout<<*(this->nickname)<<endl;

        }
        //self made copy constructor
        Hero(Hero &temp){
            this->name = temp.name;
            this->health = temp.health;
            this->level = temp.level;
            // this->nickname = temp.nickname;


        }
        Hero(string name1,int health1,int level1){
            this->name = name1;
            this->health = health1;
            this->level = level1; 
        }
        // void setnickname(string nickname){
        //     this->nickname= &nickname;
        // }

        static void info(){
            cout<<"tim is: "<<time<<endl;
        }
    
};

// void Demo::set_data(int a) { x = a; }  one way to use scope res operator
int Hero::time =5;

// if we make static member it can be accessed directly with or without object
int main(){

    Hero h1("batman,", 100,12);
    // h1.setnickname("nick");
    //copy constrctor we pass one object inside others constructor.
    Hero h2(h1);
    // h1.setnickname("nicki");
    // h1.getData();
    h2.getData();

// if we make static member it can be accessed directly with or without object
    cout<< Hero::time<<endl;
    h1.info();

}