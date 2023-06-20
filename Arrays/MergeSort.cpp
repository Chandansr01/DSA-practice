#include<iostream>
using namespace std;


void merge(int *arr, int l, int r){
    int mid = l+(r-l)/2;
    int len1 = mid -l +1;
    int len2 = r - mid;
    int *left = new int[len1];
    int *right = new int[len2];
    //checking arrays
    // for(int i=0; i<len1; i++){
    //     cout<<left[i]<<" ";
    // }
    //copying two arrays
    int k =l;
    for(int i=0; i<len1; i++){
        left[i]=arr[k++];
    }
    k =mid+1;
     for(int i=0; i<len2; i++){
        right[i]=arr[k++];
    }

    //merging two arrays in sorted order
    int x=0;
    int y=0;
    k=l;
    while(x<len1 && y<len2){
        if( left[x] < right[y])
        {
            arr[k++]=left[x++];
        }
        else
        {
            arr[k++]=right[y++];
        }

    }
    while(x<len1){
        arr[k++]=left[x++];
    }
     while(x<len1){
        arr[k++]=left[y++];
    }
    
}
void mergeSort(int arr[], int l, int r){
    if(l>=r)
        return;
    int mid = (l+r)/2;
    cout<<" partitioning left from "<<l<<" to "<< mid<<endl;
    mergeSort(arr,l,mid);

    cout<<" partitioning right from "<<mid+1<<" to "<< r<<endl;
    mergeSort(arr,mid+1,r);

    merge(arr,l,r);
}
int main(){
    int arr[]={5,4,3,2,1};
    mergeSort(arr,0,4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
}