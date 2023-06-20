// find duplicate element from 1 to n where all element from 1 to n-1 appear atleast once.
// this means last element is always ignored

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4};
    int sum=0;
    int check=0;
    for(int i=0; i<5; i++){
        check+=i;
        sum+=arr[i];
    }
    cout<<sum-check<<" is the duplicate element";
}