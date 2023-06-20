#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    //prints in sorted order
    s.erase(s.begin()); //deletes begin element
    for(int i:s){
        cout<<i<<endl;
    }
    //check if an element exists or not
    cout<<"is 2 present?"<<s.count(2)<<endl;
}