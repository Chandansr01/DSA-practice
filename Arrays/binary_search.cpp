#include<iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int ele){
    int mid = (low+high)/2;
    while(low<high){
        if(arr[mid]==ele)
         return mid;
        else if( arr[mid]<ele){
            return binarySearch(arr,mid+1,high,ele);
        }
        else if( arr[mid]>ele){
            return binarySearch(arr,low,mid-1,ele);
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,55,66};
    int ans= binarySearch(arr,0,5,55);
    cout<<ans<<"...."<<endl;
}