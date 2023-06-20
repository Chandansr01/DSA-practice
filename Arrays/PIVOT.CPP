#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,1,2,3};
    int low=0;
    int high=5;
    int mid = low + (high-low)/2;
    while(low<high){
        if(arr[mid]>arr[0]){
            low=mid+1;
        }
        else if(arr[mid]<arr[0]){
            high=mid;
        }
        mid = low + (high-low)/2;

    }
    cout<<mid<<endl;
}