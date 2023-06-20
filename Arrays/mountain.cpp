#include<iostream>
using namespace std;
int mountain(int arr[], int low, int high){
    int m=0;
    int mid = low +(high-low)/2;
    while(low<high){
        if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            high=mid;
        }
        mid = low +(high-low)/2;
    }
            return arr[mid];
}
int main(){
    int arr[]={1,3,5,6,4,2,0};
    cout<<" mountain value is :"<<mountain(arr,0,6);
    
}