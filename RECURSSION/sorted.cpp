#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n){
    if (n==0 || n==1)
        return true;
    else if(arr[0]>arr[1])
        return false;
    else 
        return checkSorted(arr+1,n-1);
    
}


int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<checkSorted(arr,6);
}