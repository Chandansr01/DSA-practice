#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
    // space complexity given in 1 so we cannot create new vector. we count and update values in the same vector
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);

    int c0=0;
    int c1=0;
    for(int i=0; i<v.size(); i++){
        if(v.at(i)==0)
            c0++;
        if(v.at(i)==1)
            c1++;
    }
    // cout<<"coutn 0 is :"<<c0<<" sfsd"<<c1<<endl;
    int count=0;
    for(int i=0; i<c0; i++){
        v[count]=0;
        count++;
    }
    for(int i=0; i<c1; i++){
        v[count]=1;
        count++;
    }
    for(int i=count; i<v.size(); i++){
        v[i]=2;

    }

    for(auto i:v){
        cout<<i<<" ";

    }

    

    

}