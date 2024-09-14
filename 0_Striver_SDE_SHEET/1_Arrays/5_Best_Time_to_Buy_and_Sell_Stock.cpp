class Solution {
public:
    int maxProfit(vector<int>& prices) {
//   int n = prices.size(),profit = 0,i=1,min_prices = prices[0];
//   while(i<n){
//     if(prices[i]< min_prices){
//         min_prices = prices[i];
//     }
//     else{
//         profit = max(profit, prices[i]-min_prices);
//     }
//     i++;
//   }
//   return profit;

  int n  = prices.size();
  int profit = 0, i=0, min_price = prices[0];
   
   while(i<n){
    if(prices [i] <min_price){
        min_price = prices[i];
    }
    else{
        profit = max(profit, prices[i]-min_price);
    }
    i++;
   }
   return profit;

    }
};
