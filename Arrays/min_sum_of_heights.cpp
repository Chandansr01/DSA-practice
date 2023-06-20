int getMinDiff(int arr[], int n, int k) {
        int ans = arr[n-1]-arr[0];
        int low = arr[0]+k;
        int high = arr[n-1]-k;
        int h,l;
        for(int i=0; i<n-1; i++){
             l = min(low, arr[i+1]-k);
             h = max(high, arr[i]+k);
            if(l < 0)continue;
            ans = min(ans, h-l);
        }
        return ans;
    }