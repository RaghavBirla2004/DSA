class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
        
        //optimised code
        int totalsum = (n*(n+1))/2;
         int arraysum = 0;
        
        for (int i = 0; i < n - 1; i++) {
            arraysum += arr[i];
        }
        
        return totalsum - arraysum;
        
        
        // int j=1;
        // for(int i=0;i<n;i++){
        //     if(arr[i]==j){
        //         j++;
        //     }
        //     else{
        //         return j;
                
        //     }
        // }
    }
};
