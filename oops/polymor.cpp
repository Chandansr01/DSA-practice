#include<iostream>
using namespace std;


class A{
    public: 
        int a;
        int b;
        int c;
        A(int a , int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
        void add(int a, int b){
            cout<<a+b<<endl;
        }
        void add(int a, int b, int c){
            cout<<a+b+c<<endl;
        }
        void print()
        {
            cout<<" this is the parent class";
        }
        void operator+ (A &obj2){
            int a = this->a;
            int b = obj2.a;
            cout<<a+b<<endl;

        }
};


class B : public A {
    public: 
        // B(int a , int b, int c){
        //     this->a = a;
        //     this->b = b;
        //     this->c = c;
        // }
        // B(){
        //     cout<<"created oj"<<endl;
        // }
        void print()
        {
            cout<<" this is the child class";
        }

};
class Animal{
    public:
        void print(){
            cout<<"this is parent"<<endl;
        }
};

class cat : public Animal{
    public:
        void print(){
            cout<<"this is child"<<endl;
        }
};
// . and ternary cant be overloaded
int main(){

    A obj1(1,2,3);
    // A obj2(1,2,3);
    B obj3();
    cat c1;
    c1.print();
    // obj1.add(1,2);
    // obj1.add(1,2,3);
    // obj1.print();
    // obj3.print();


    // obj1 + obj2;

    
    return 0;
}