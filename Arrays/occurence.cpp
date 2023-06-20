#include<iostream>
using namespace std;
int first(int arr[], int low, int high, int ele){
    int ans=0;
    while(low<high){
    int mid = low + (high - low)/2;
        if(arr[mid]==ele){
            high=mid-1;
            ans=mid;
        }
        else if(arr[mid]>ele){
            high=mid-1;
        }
        else if(arr[mid]<ele){
            low = mid+1;
        }
    }
    return ans;
}


int Right(int arr[], int low, int high, int ele){
    int ans=0;
    while(low<high){
    int mid = low + (high - low)/2;
        if(arr[mid]==ele){
            low=mid+1;
            ans=mid;
        }
        else if(arr[mid]>ele){
            high=mid-1;
        }
        else if(arr[mid]<ele){
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,3,3,6};
    int leftmost=first(arr,0,5,3);
    int Rightmost=Right(arr,0,5,3);
    cout<<leftmost<<" is the leftmost occurence"<<endl;
    cout<<Rightmost<<" is the Rightmost occurence"<<endl;
    cout<<" Total occurence is : "<<Rightmost-leftmost+1<<endl;
}