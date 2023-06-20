#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<string> s;
    queue<int> a;
    s.push("hello");
    s.push("world");
    cout<<s.top(); 
    s.pop();
    cout<<s.top();


    cout<<"queue//////////////"<<endl;
    a.push(1);
    a.push(2);
    cout<<a.front()<<endl;
}