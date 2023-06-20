#include<iostream>
using namespace std;
void linear(int arr[], int n, int ele){
    for(int i=0; i<n; i++){
        if(arr[i]==ele){
            cout<<"found at "<<i<<endl;
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    linear(arr,6,3);
}