#include<iostream>
using namespace std;
int display(int arr[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


bool search(int arr[][3], int ele){
    int low=0;
    int high=8;

    int row=0;
    int col=2;
    // int mid = low + (high-low)/2;
    while(col>=0 && row<=2){
        int el = arr[row][col];
        cout<<el<<" mid ele ment ;"<<endl;
        if(ele==el)
            return true;
        else if(ele<el){
            col--;
        }
        else
            row++;
    }
    return false;
}
int main(){
    int arr[][3]={1,2,3,4,5,6,7,8,9};
    cout<<search(arr,7);
}