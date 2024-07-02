class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;
        vector<int>v;
        for(int i:nums1){
            map[i]++;
        }

        for(int i:nums2){
            if(map[i]>0){
   v.push_back(i);
   map[i]--;
            }
        }
        return v;
    }
};
