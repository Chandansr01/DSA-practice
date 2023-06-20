#include<iostream>
using namespace std;
int main(){
    int n=10;
    // two variables point at same location
    int &j = n;
    cout<<j<<endl;
}