#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i =0; i< arr.size(); i++){
        int min = i;
        int temp = min;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]<arr[temp]){
                temp = j;
            }
        }
        swap(arr[temp], arr[min]);

    }
}