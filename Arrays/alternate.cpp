#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int ele=1;
    while(ele<=5){
        swap(arr[ele], arr[ele-1]);
        ele+=2;
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}