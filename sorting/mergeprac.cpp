#include<iostream>
using namespace std;

void merge(int *arr, int low, int high){
    int mid = low + (high-low)/2;
    int len1 = mid-low+1;
    int len2 = high-mid;

    int *left = new int[len1];
    int *right = new int[len2];

    int k=low;
    for(int i=0; i<len1; i++){
        left[i]=arr[k++];
    }

    k=mid+1;
    for(int i=0; i<len2; i++){
        right[i]=arr[k++];
    }

    int x =0;
    int  y=0;
    k=low;
    while(x<len1 && y<len2){
        if(left[x]<right[y]){
            arr[k++] = left[x++];
        }else{
            arr[k++] = right[y++];
        }
    }

    while(x<len1){
        arr[k++]=left[x++];
    }
    while(y<len2){
        arr[k++]=right[y++];
    }



}
void mergeSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int mid = (low +high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr,low,high);
}
int main(){
    int arr[]={4,1,5,2,3};
    mergeSort(arr, 0,4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}