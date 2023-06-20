#include<iostream>
using namespace std;

void merge(int arr[], int low, int high){
    int mid = low + (high-low)/2;
    int len1 = mid-low+1;
    int len2 = high-low;

    // creating arrays 
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    // copying elements
    int k= low;
    for(int i=0; i<len1; i++){
        arr1[i]=arr[k++];
    }
    k= mid+1;
    for(int i=0; i<len2; i++){
        arr2[i]=arr[k++];
    }

    //merging by sorting the elements
    int ind1=0;
    int ind2=0;
    k=low;
    while(ind1<len1 && ind2<len2){
        if(arr1[ind1]<arr2[ind2])
            arr[k++]=arr1[ind1++];
        else
            arr[k++]=arr2[ind2++];
    }

    while(ind1<len1){
        arr[k++]=arr1[ind1++];
    }
    while(ind2<len2){
        arr[k++]=arr2[ind2++];
    }
}


void mergeSort(int arr[], int low, int high){
    if(low>=high)
        return;
    int mid = low + (high-low)/2;
    mergeSort(arr,low, mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high);
}

int main(){
    int arr[]={6,5,4,3,2,1};
    mergeSort(arr,0,5);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}