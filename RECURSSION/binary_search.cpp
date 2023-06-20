#include<iostream>
using namespace std;
bool binarySearch(int arr[], int low,int high, int ele){
    if(low>high)
        return false;
    int mid = low +(high-low)/2;
    if(arr[mid]==ele)
        return true;
    else if (arr[mid]>=ele)
        return binarySearch(arr,low,mid-1,ele);
    else if (arr[mid]<=ele)
        return binarySearch(arr,mid+1,high,ele);
    else 
        return 0;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    if(binarySearch(arr,0,5,30))
        cout<<" FOUND "<<endl;
    else
        cout<<"not found"<<endl;

}