class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //Better Approach
        int n= nums.size();
       k = k % n; 
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());


        // for(int i=1;i<=k;i++){
        //     long long ele =nums[nums.size()-1];
        //     nums.pop_back();
        //     nums.insert(nums.begin(),ele);
        // }
    
    }
};
