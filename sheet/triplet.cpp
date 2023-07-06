 bool check(int n, int A[], int target, vector<int> triplet){
        if(target==0 && triplet.size()==3){
            return true;
        }
        
        if(n==0 or target<0 or triplet.size()==3){
            return false;
        }
        
        triplet.push_back(n-1);
        
        bool a = check(n-1,A,target-arr[n-1], triplet);
        
        triplet.pop_back();
        
        bool b = check(n-1, A, target, triplet);
        
        return a|b;
        
    }
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        vector<int> triplet;
        bool ans = check(n, A, X, triplet);
        return ans;
    }




    //approch O(n) two pointer approach

    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        int l,r;
        for(int i=0; i<n; i++){
            l = i+1;
            r=n-1;
            
            while(l<r){
                if(A[i] + A[l] + A[r] == X){
                    return true;
                }
                else if(A[i] + A[l] + A[r] < X){
                    l++;
                }
                else{
                    r--;
                }
            }
            
        }
        return false;
    }