    bool compareInterval( vector<int> i1, vector<int> i2)
{
    return (i1.begin() < i2.begin());
}
    
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>> ans;
         stack<vector<int>> stk;
         int n = intervals.size();
         if(n<=0){
             return ans;
         }
         
         sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
                return a.front() < b.front();
            });
         
         vector<int> temp = intervals.front();
         ans.push_back(temp);
         
         for(int i=1; i<n; i++){
             vector<int> temp1 = ans.back();
             
             if(temp1.back() < intervals[i].front()){
                 ans.push_back(intervals[i]);
             }
             
             else if(temp1.back() < intervals[i].back()){
                 temp1.back() = intervals[i].back();
                //  cout<<"back elem"<<intervals[i].back()<<endl;
                 ans.pop_back();
                 ans.push_back(temp1);
             }
         }
        return ans;
    }