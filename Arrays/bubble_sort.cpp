#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    for(int i=0; i<5;i++){
        //opt
        bool swapped= false;
        for(int j=0; j<4-i; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1], arr[j]);
                swapped = true;
            }
        }
        if (swapped ==false)
        break;
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}