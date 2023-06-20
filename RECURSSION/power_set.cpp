#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
    if(index >= nums.size()){
        ans.push_back(output);
        for(int i=0; i<output.size(); i++){
             cout<<output[i]<<" ";
            }
            cout<<endl;
        return;
    }

    //exclude an the element 
    solve(nums, output, index+1, ans);

    //or include the element
    int element =nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);
}
int main(){
    
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int>> ans;
    vector<int> output;
    int index =0;
    solve(nums, output, index, ans);
    
}