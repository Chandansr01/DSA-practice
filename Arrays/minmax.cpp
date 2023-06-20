#include<iostream>
using namespace std;
int maxele(int arr[], int n){
    int max=INT_MIN;
    for (int i=0; i<n; i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
int minele(int arr[], int n){
    int min=INT_MAX;
    for (int i=0; i<n; i++){
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}
int main(){
    int arr[6]={1,5,3,3,8,9};
    int size = sizeof(arr)/sizeof(int);
    int maxx=maxele(arr,size);
    int minn=minele(arr,size);

    cout<<maxx<<","<<minn;

}