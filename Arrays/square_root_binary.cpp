#include<iostream>
using namespace std;
int squareRoot(int num){
    int low=0;
    int high=num;
    while(low<high){
    int mid = (low+high)/2;
        if(mid*mid==num){
            return mid;
        }
        else if((mid*mid)>num){
            high=mid-1;
        }
        else if((mid*mid)<num){
            low=mid+1;
        }
    }
}
int main(){
    cout<<squareRoot(25);
}