class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        // return sqrt(n);
        int low = 1;
       int  high = n;
        int ans = -1;
        
        while(low<=high){
            long long int mid = (low + high) / 2;
            long long int sqr = mid*mid;
            if(sqr==n){
                return mid;
            }
            else if(sqr < n){
              ans = mid;
              low =mid+1;
            }
            else{
                high =mid-1;
            }
            
            
        }
        return ans;
        
    }
};
