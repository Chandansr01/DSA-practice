#include<iostream>
using namespace std;

int findPivot(int arr[], int low, int high){
    while(low<high){
    int mid= low+(high-low)/2;
        if(arr[mid]>arr[0]){
            low=mid+1;
        }
        else if(arr[mid]<arr[0]){
            high=mid;
        }
    }
    return low;
}

int binarySearch(int arr[], int low, int high, int el){
    while(low<high){
     int mid=low+(high-low)/2;
     if(arr[mid]==el){
        return mid;
     }
     else if(arr[mid]<el){
        low = mid+1;
     }
     else 
        high =mid-1;
    }
    // return -1;
}


int main(){
    int arr[]={3,4,5,6,1,2};
    int pivot=findPivot(arr,0,5);
    // cout<<arr[pivot];
    int ele=2;
    if(ele>arr[0] && ele<arr[pivot-1]){
        cout<<"here";
        cout<<binarySearch(arr,0,pivot-1,ele);
    }
    else
        cout<<binarySearch(arr,pivot,5,ele);


}