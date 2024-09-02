class Solution {
public:
    void sortColors(vector<int>& nums) {

        //! Dutch Nation flag algorith
//! First Approach
        // int n = nums.size();
        // int zero=0,one = 0,two = 0;
        // for(int i=0;i<nums.size();i++){
        //   if(nums[i]==0){
        //     zero++;
        //   }
        //   else if(nums[i]==1){
        //     one++;
        //   }
        //   else if(nums[i]==2){
        //     two++;
        //   }
        // }

        // for(int i=0;i<zero;i++){
        //     nums[i] = 0;
        // }
        // for(int i=zero;i<zero+one;i++){
        //     nums[i] = 1;
        // }
        //   for(int i=zero+ one;i<zero+one+two;i++){
        //     nums[i] = 2;
        // }


//! Second Apporach


        // sort(nums.begin(), nums.end());

        //! Third Apporach
        int n = nums.size();

        int l=0,m=0,h=n-1;
        
        while(m<=h){
             if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;
                m++;
             }
             else if(nums[m]==1){
                m++;
             }
             else if(nums[m]==2){
                swap(nums[m],nums[h]);
                h--;
             }
        }
    }
};
