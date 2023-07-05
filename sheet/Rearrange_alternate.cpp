void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int mini =0;
    	int maxi = n-1;
    	int me = arr[n-1] +1;
    	int i =0;
    	while(i<n){
    	    if(i%2==0){
    	        arr[i] = arr[i] + arr[maxi] % me *me;
    	        maxi--;
    	    }else{
    	        arr[i]=arr[i] + arr[mini] % me *me;
    	        mini++;
    	    }
    	    i++;
    	}
    	
    	for(int i=0; i<n; i++){
    	    arr[i]= arr[i]/me;
    	}
    	 
    }