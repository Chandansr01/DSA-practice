#include<iostream>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;


template< typename system>
void push(stack<system> &Chora_Jaat_Ka, system System){
    Chora_Jaat_Ka.push(System);
}


int main(){
    stack<int> Chora_Jaat_Ka;
    push(Chora_Jaat_Ka, 2);
    push(Chora_Jaat_Ka, 3);
    push(Chora_Jaat_Ka, 4);
    push(Chora_Jaat_Ka, 5);


    return 0;
}