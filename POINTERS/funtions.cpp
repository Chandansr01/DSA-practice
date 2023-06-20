#include<iostream>
using namespace std;
void inc(int *pt){
    *pt=*pt+1;
}

int sum(int *ptr, int n){
    int sum1=0;
    for(int i=0; i<n; i++){
        sum1 = sum1 + *(ptr + i);
    }
    return sum1;
}
int main(){
   int n=10;
   int *ptr = &n;
   inc(ptr);
   cout<<*ptr<<endl;
    
   int arr[5]={1,2,3,4,5};
   int *pt = &arr[0];
   cout<<"sum of all elements is : "<<sum(pt,5);
   
}