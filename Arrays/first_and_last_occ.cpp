#include <bits/stdc++.h> 

int first(vector<int>& arr, int n, int k){
    int low =0;
    int high = n-1;
    int mid = low +( high -low)/2;
    int ans = -1;
    while(low<=high){
        if(arr[mid]==k){
            ans = mid;
            high = mid -1;
        }
        else if(arr[mid]>=k){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
        mid = low+(high-low)/2;
    }   
    return ans;
}

int last(vector<int> &arr, int n, int k){
    int low =0;
    int high = n-1;
    int mid = low +( high -low)/2;
    int ans = -1;
    while(low<=high){
        if(arr[mid]==k){
            ans = mid;
            low = mid +1;
        }
        else if(arr[mid]>=k){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
        mid = low+(high-low)/2;
    }   
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    
    int left = first(arr,n,k);
    int right = last(arr,n,k);
    pair<int, int> ans =make_pair(left, right);
    return ans;
}

