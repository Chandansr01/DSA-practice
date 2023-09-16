class Solution{
	public:
	
	int solve(int target, vector<int>&dp){
	    if(target == 0){
	        
	        return 0;
	    }
	    
	    if(dp[target]!=-1){
	        return dp[target];
	    }
	    int ans=target;
	    for(int i =1; i*i<=target; i++){
	        ans = min(ans, 1 + solve(target - i*i, dp));
	    }
	    
	    dp[target] = ans;
	    return dp[target];
	       
	}
	
	int solvetab(int target){
	    vector<int> dp(target+1,INT_MAX);
	    dp[0]=0;
	    for(int i=1; i<=target; i++){
	        for(int j=1; j*j<=target; j++){
	            if(i-j*j>=0)
	            dp[i] = min(dp[i], 1+dp[i-j*j]);
	        }
	    }
	    return dp[target];
	}
	int MinSquares(int n)
	{
	    // Code here
	   // vector<int> dp(n+1,-1);
	   // int ans = solve(n,dp);
	    return solvetab(n);
	}
};