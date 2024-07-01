class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Optimsed way
        int left = 0, right =nums.size()-1;
        while(left<right){
              int sum = nums[left] + nums[right];
            if(sum==target){
                return {left,right};
            }
            else if(sum<target){
           left++;
            }
            else{
                right--;
            }
        }
       
    


//    for(int i=0;i<nums.size();i++){
//     for(int j=i+1;j<nums.size();j++){
//         if(target==nums[i]+nums[j]){
//             return {i,j};
//         }
//     }
  
//    }
     return {};
    }
};
