#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int high=5;
    int low=0;
    while(low<=high){
        int temp;
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        temp=0;
        high--;
        low++;
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}