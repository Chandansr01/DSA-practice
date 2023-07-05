class Solution {
public:

    int multiply(int x, int res[], int res_size){
        int carry = 0;
        for(int i =0; i<res_size; i++){
            int pro = res[i] * x +carry;
            res[i] = pro%10;
            carry = pro/10;
        }
        
        while(carry!=0){
            res[res_size] = carry%10;
            carry = carry/10;
            res_size++;
        }
        
        return res_size;
    }
    vector<int> factorial(int N){
        // code here
        vector<int> ans;
        int res[500];
        res[0]=1;
        int res_size=1;
        for(int x=2; x<=N; x++){
            res_size = multiply(x,res,res_size);
        }
        for(int i=res_size-1; i>=0; i--){
            int x = res[i];
            ans.push_back(x);
        }
        return ans;
    }
};