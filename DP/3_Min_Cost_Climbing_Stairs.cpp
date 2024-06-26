// with recursion



class Solution {
public:
int mincost(vector<int>&cost, int n){
    
        if(n<=1 ){
            return  0;
        }
        else if(n==2){
            return min(cost[0],cost[1]);
        }
        return  min(mincost(cost,n-1 ) +  cost[n-1], mincost(cost,n-2)+cost[n-2]);
}
    int minCostClimbingStairs(vector<int>& cost) {
      int n = cost.size();
       return mincost(cost,n);

    }
};

//with DP 

vector<int>dp(1001,-1);

class Solution {
public:
int mincost(vector<int>&cost, int n){
     if(dp[n]!=-1){
        return dp[n];
     }
        if(n<=1 ){
            return dp[n]= 0;
        }
        else if(n==2){
            return dp[n]=min(cost[0],cost[1]);
        }
        return dp[n]= min(mincost(cost,n-1 ) +  cost[n-1], mincost(cost,n-2)+cost[n-2]);
}
    int minCostClimbingStairs(vector<int>& cost) {
      int n = cost.size();
      fill(dp.begin(),dp.end(),-1);
       return mincost(cost,n);

    }
};
