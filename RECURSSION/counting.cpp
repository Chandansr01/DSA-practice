#include<iostream>
using namespace std;


int count(int n){
    if (n==1)
        return 1;
    else
        cout<<n<<" "; 
        return count(n-1);
}
int main(){
    int n=5;
    cout<<count(5)<<endl;

}