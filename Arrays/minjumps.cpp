class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        // Your code here
        if(arr[0]==0){
            return -1;
        }
        if(n<=1){
            return 0;
        }
        
        int jump = 1;
        int maxr = arr[0];
        int steps = arr[0];
        
        for(int i=1; i<n; i++){
            if(i==n-1)
                return jump;
            }
            maxr = max(maxr, arr[i] + i);
            steps--;
            if(steps==0){
                jump+=1;
                if(i>=maxr){
                    return -1;
                }
                steps = maxr - i;
            }
        }
        return -1;
    }
};