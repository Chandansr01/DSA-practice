#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> ans;
    int arr[]={1,2,3,4,5,6};
    int arr1[]={3,4,5};
    for(int i=0; i<6; i++){
        int ele = arr[i];
        for(int j=0; j<3; j++){
            if(ele==arr1[j])
                cout<<ele;
                // arr1[j]=-121212;
                continue;
        }
    }

}