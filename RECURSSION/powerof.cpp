#include<iostream>
using namespace std;

int power(int n, int pow){
    if(pow==0)
        return 1;
    else   
        return n*power(n,pow-1);
}
int main(){
    cout<<" ans => "<<power(5,3);
}