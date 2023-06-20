#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,4,1,10};
    for (int i=0; i<5; i++){
        int min = i;
        for(int j=i+1; j<5; j++){
            if (arr[j]<arr[i])
                min=j;
        }
        swap(arr[i],arr[min]);
    }
    for(int k=0; k<5; k++){
        cout<<arr[k]<<" ";
    }
}