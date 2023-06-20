#include<iostream>
using namespace std;
bool search(int arr[][3], int ele){
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]==ele)
                return 1;
        }
    }
    return 0;
}
void spiral(int arr[][3]){
    int startingcol=0;
    int endingcol=2;
    int endingrow=2;
    int startingrow=0;
    int count=0;
    int total = 9;
    while(count<total){
    for(int i=startingcol; i<=endingcol; i++){
        cout<<arr[startingrow][i]<<" ";
        count++;
    }
    startingrow++;
    for(int i=startingrow; i<=endingrow; i++){
        cout<<arr[i][endingcol]<<" ";
        count++;


    }
    endingcol--;
    for(int i=endingcol; i>=startingcol; i--){
        cout<<arr[endingrow][i]<<" ";
        count++;

    }
    endingrow--;
    for(int i=startingrow; i<=endingrow; i++){
        cout<<arr[i][startingcol]<<" ";
        count++;
    }
    startingcol++;
    }
}
void sineWave(int arr[][3]){
    for(int j=0; j<3; j++){
        if(j%2==0){
            for(int i=0; i<3;i++){
                cout<<arr[j][i]<<" ";
            }
            // cout<<endl;
        }
        else{
            for(int i=2; i>=0;i--){
                cout<<arr[j][i]<<" ";
            }
            // cout<<endl;
        }
        
    }
}

void largestrowSum(int arr[][3]){
    int sum=0;
    int largest=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
        // cout<<"sum of "<<i<<" st row is : "<<sum<<endl;
        if(sum>largest){
            largest=sum;
        }
        sum=0;
    }
    cout<<largest;
}

bool binarySearch(int arr[][3], int ele){
    int low=0;
    int mid;
    int high=8; //row x col -1;
    while(low<=high){
        mid=low + (high-low)/2;
        int elm = arr[mid/3][mid%3];
        cout<<"mid is :"<<elm<<endl;
        if(elm==ele)
            return 1;
        else if(elm<ele)
            low=mid+1;
        else 
            high=mid-1;
    }
    return 0;
}
int main(){
    int ele;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<" search...."<<endl;
    // cout<<"enter the element to search"<<endl;
    // cin>>ele;
    // int arr[3][3]={0};
    int res= binarySearch(arr,1);
    // largestrowSum(arr);
    cout<<res;
    // sineWave(arr);
    // spiral(arr);
} 