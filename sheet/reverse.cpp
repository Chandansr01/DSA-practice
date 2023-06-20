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
    
    int low=0; int high=v.size()-1;
    while(low<high){
        swap(v.at(low), v.at(high));
        high--;
        low++;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }


}