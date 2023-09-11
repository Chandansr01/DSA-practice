#include<iostream>
using namespace std;
class car{
    public:
        string fuel;
        int tyres;
};


class sedan: protected car{
    public:
        string name;
        sedan(string name, string fuel, int tyres){
            this->name = name;
            this->fuel = fuel;
            this->tyres = tyres;
        }

        void print(){
            cout<<this->name<<endl;
            cout<<this->fuel<<endl;
            cout<<this->tyres<<endl;

        }
};
int main(){
    sedan car1("city","petrol",4);
    // cout<<car1.fuel<<endl;
    car1.print();
}