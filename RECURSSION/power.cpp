#include<iostream>
using namespace std;

int power(int n, int m){
    if(m==0)    
        return 1;
    else 
        return n*power(n,m-1);
}
int main(){
    int n=3;
    cout<<power(3,3)<<endl;
}