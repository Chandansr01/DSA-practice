#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int cnt=0;
    int piv = arr[s];
    for(int i =s+1; i<e; i++){
        if(arr[i]<piv){
            cnt++;
        }
    }

    int pivotIndex = s+cnt;
    swap(arr[pivotIndex], arr[s]);

    int i =s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<piv){
            i++;
        }

        while(arr[j]>piv){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }

    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }

    int p = partition(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);

}
int main(){
    int arr[] = {4,3,1,5,6};
    quickSort(arr, 0, 4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
}