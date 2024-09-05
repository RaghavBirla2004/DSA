class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        
     unordered_map<int,int>umap;
     for(int i=0;i<arr.size();i++){
         umap[arr[i]]++;
     }
     int ans = -1;
     
     for(auto i:umap){
         if(i.second > arr.size()/2){
             return ans = i.first;
             break;
     }
     }
     return ans;
     
     
     
    }
};
