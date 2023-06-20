lass Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int count=0;
        int t=n+m;
        vector<int> arr(t,0);
        int ans=0;
        for(int i=0; i<n; i++){
            arr[count]=a[i];
            count++;
        }
        for(int i=0; i<m; i++){
            arr[count]=b[i];
            count++;
        }
        sort(arr.begin(),arr.end());
        for(int i=0; i<n+m; i++){
            if(arr[i]==arr[i+1]){
                cout<<"duplicate"<<endl;
                for(int j=i; j<n+m;j++){
                     arr[j]=arr[j+1];
                    }
                    arr[n+m-1]=0;
            }}
       
        for(int i=0; i<m+n; i++){
            if(arr[i]!=0){
                ans++;
                cout<<"total: "<<ans<<endl;
             }
            }
              cout<<"total numbers: "<<ans;
        }