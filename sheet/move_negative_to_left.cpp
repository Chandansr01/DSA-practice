#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,-5,-6,-7};
    int low=0;
    int high=6;
    while(low<high){
        if(arr[low]<0 && arr[high]>=0)
            high--;
        if(arr[low]>=0 && arr[high]<0)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;

        }
        else
            {
                low++;
                high--;
            }

    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

}