#include <iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={4,5,6};
    int i=0;
    int j=0;
    while(i<6 && j<3){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;}
        else if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
    }
}