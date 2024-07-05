class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int n = nums.size();
        int l = 0,r = n-1;
       int result = 0;
        while(l<r){
           int sum = nums[l] + nums[r];
           result = max(result,sum);
             l++;
             r--;
            
        }
        
        return result;
    }
};
