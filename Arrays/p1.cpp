#include<iostream>
#include<vector>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int c1=0;
    int c2=0;
    vector<int> ans;
    while(c1<arr1.size() && c2<arr2.size()){
        if(arr1.at(c1) == arr1.at(c2)){

              ans.push_back(arr1.at(c1));
              c1++;
              c2++;
        }
        // if(arr1.at(c1)<arr2.at(c2)){
        //     c1++;
        // }
        // if(arr2.at(c2)<arr1.at(c1)){
        //     c2++;
        // }
    }
    return(ans);
}

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    // vector<int> res = findArrayIntersection(v1,3,v2,3);
    for(auto i: v1){
        cout<<i<<" ";
    }
}