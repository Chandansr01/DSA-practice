#include<iostream>
#include<vector>
using namespace std;
int  main(){
    char str[7];
    cin>>str;
    bool flag=true;
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    // cout<<count-1<<endl;
    int low=0;
    int high=count-1;
    while(low<high && flag){
        if(str[low]==str[high]){
            flag=true;
            low++;
            high--;
        }
        else
            flag=false;
    }
    // cout<<flag<<"dd";
    if(flag){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

}