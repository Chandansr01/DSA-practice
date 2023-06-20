#include<iostream>
using namespace std;
int gcd(int n, int m){
    if(n==0)
        return m;
    else if(m==0)
        return n;

    while(m!=n){
        if(m>n)
            m=m-n;
        else if(n>m)
            n=n-m;
    }
    return n;
}



int main(){
    int res = gcd(5,10);
    cout<<"gcd of given numbers is :"<<res<<endl;
}