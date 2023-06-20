#include<iostream>
using namespace std;

int sumofArray(int arr[], int n){
    if (n<=1)
        return arr[0];
    else 
        return arr[n-1] + sumofArray(arr ,n-1);
}


int main(){
    int arr[]={1,2,3,4,5};
    cout<<"sum of elements is "<<sumofArray(arr,5);
}