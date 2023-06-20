#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);

    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(8);

    int s = v1.size()-1;
    // cout<<s<<" is the size"<<endl;l
    int s1 = v2.size()-1;
    int i=0;
    int j=0;
    while(i<=s && j<=s1){
        if(v1.at(i)<v2.at(j)){
            v3.push_back(v1.at(i));
            // cout<<v1.at(i)<<",";
            i++;
        }
        else{
            v3.push_back(v2.at(j));
            // cout<<v2.at(j)<<",,";
            j++;
        }
    }
    while(i<s){
        v3.push_back(v1.at(i));
        i++;
    }
    while(j<s1){
        v3.push_back(v1.at(i));
        j++;
    }
    for(int k=0; k<v3.size(); k++){
        cout<<v3.at(k)<<" ";
    }
    
}