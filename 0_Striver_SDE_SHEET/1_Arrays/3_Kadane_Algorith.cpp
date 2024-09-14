class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane Algorithm - o(n)
        
        int sum = 0;
        int maxi = INT_MIN;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            maxi =max(sum,maxi);
            if(sum<0){
                sum = 0;
            }
        }
        return maxi;



 // Brute force - o(n^3)
//         if(nums.size()==1){
//             return nums[0];
//         }
       
//  int sum = 0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 int currentsum = 0;
//                     for(int l=i;l<=j;l++){
//                         currentsum = currentsum + nums[l] ;
//                     }
//                     sum = max(sum, currentsum);
//             }
//         }
//         return sum;
    }
};
