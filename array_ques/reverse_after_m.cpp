#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int m=3;
    int low=4;
    int high =5;
    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    for(int i=0; i<6; i++){

        cout<<arr[i]<<" ";
    }
}