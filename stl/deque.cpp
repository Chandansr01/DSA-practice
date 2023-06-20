#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // d.pop_front();

    // for(int i=0; i<d.size(); i++){
    //     cout<<d.at(i)<<" ";
    // }
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
}