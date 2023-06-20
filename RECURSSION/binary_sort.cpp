#include<iostream>
using namespace std;

void binarySort(int *arr, int n){
    if (n<=1)
        return;
    else{
        for(int i=0; i<n; i++){
                if(arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                }
        }
    binarySort(arr,n-1);
    }
     
}
int main(){
    int arr[]={1,3,2,4,6,5};
    binarySort(arr,6);
    for(int i=0; i<6; i++){
            cout<<arr[i]<<" ";
        }
}