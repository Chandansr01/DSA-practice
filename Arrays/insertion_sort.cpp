#include<iostream>
using namespace std;
// using for loop
int main(){
    int arr[]={1,4,6,3,2,5};
    // for(int i=1; i<6; i++){
    //     int ele = arr[i];
    //     int ind=i;
    //     for(int j=i-1; j>=0; j--){
    //         if (arr[j]>ele){
    //             arr[j+1]=arr[j];
    //             ind=j;
    //         }
    //         else
    //             break;
    //     }
    //     arr[ind]=ele;
    // }
    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<" ";
    // }

    //using while loop
    for(int i=1; i<6; i++){
        int pos =i;
        int ele =arr[pos];
        while(pos>=0 && arr[pos-1]>ele){
            arr[pos]=arr[pos-1];
            pos--;
        }
        arr[pos]=ele;
        for(int i=0; i<6; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}