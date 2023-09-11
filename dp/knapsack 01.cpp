int solve(int *wt, int *val, int index, int capacity,  vector<vector<int>> &dp){
        if(index == 0){
            if(wt[0]<=capacity){
                return val[0];
            }
            else{
                return 0;
            }
        }
        
        if(dp[index][capacity]!=-1){
            return dp[index][capacity];
        }
        int include = 0;
        if(wt[index]<=capacity){
            include =  val[index] + solve(wt, val, index-1, capacity-wt[index],dp);
        }
        int exclude = solve(wt, val, index-1, capacity,dp);
        
        dp[index][capacity] = max(include,exclude);
        return dp[index][capacity];
        
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n, vector<int>(W+1,-1));
       int ans = solve(wt,val,n-1, W,dp);
       return ans;
       
    }