vector<long long int>dp(1000000,-1);
class Solution {
  public:
    int nthFibonacci(int n){
         int mod = 1e9+7;
        if(dp[n]!=-1){
            return dp[n];
        }
          if(n<=1){
            return dp[n]=n;
        }
      

        return dp[n]=(nthFibonacci(n-1)%mod + nthFibonacci(n-2)%mod)%mod;
    }
};
