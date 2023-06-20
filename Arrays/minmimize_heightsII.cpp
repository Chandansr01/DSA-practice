class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        if(n==1) return 0;
        sort(arr, arr+n);
        int ans =  arr[n-1] - arr[0];
        int mi,ma;
        for(int i=1; i<n; i++){
            if(arr[i]-k < 0)continue;
             ma = max(arr[i-1]+k, arr[n-1]-k);
             mi = min(arr[i]-k, arr[0]+k);
            ans = min(ans, ma-mi);
        }
        return ans;
    }
};