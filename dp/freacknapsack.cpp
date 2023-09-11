 public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(struct Item a, struct Item b){
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1>r2;
        
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double final = 0.0;
        sort(arr, arr+n, cmp);
        
        for(int i =0; i<n; i++){
            if(arr[i].weight<=W){
                final += arr[i].value;
                W-=arr[i].weight;
            }else{
                final += arr[i].value * ((double)W/ (double)arr[i].weight);
                break;
            }
        }
        return final;
    }