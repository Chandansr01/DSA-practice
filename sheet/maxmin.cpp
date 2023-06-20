#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    int ind=0;
    int max=0;
    int min=1000;
    while(ind<v.size()){
        if(v[ind]<min)
            min=v[ind];
        if(v[ind]>max)
            max=v[ind];
        ind++;
    }
    cout<<"max is :"<<max<<endl;
    cout<<"min is :"<<min<<endl;




}