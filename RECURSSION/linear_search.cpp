#include<iostream>
using namespace std;

bool search(int arr[], int n, int ele){
    if(n<1)
        return false;
    else if(arr[n-1]==ele)
        return true;
    else 
        return search(arr,n-1,ele);


}
int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<" element found ? -> "<<search(arr,6,1);
}