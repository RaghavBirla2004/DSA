class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector<int>ans;
      map<int,int>umap;

       for(int i:arr1){
        umap[i]++;
       }
       for(int i=0;i<arr2.size();i++){
        auto temp = umap.find(arr2[i]);
        for(int j=1;j<=temp->second;j++){
            ans.push_back(arr2[i]);
        }
        umap.erase(temp);
       }

         for (auto i = umap.begin(); i != umap.end(); i++) {
            for (int j = 0; j < i->second; j++) {
                ans.push_back(i->first);
            }
        }
       return ans;
    }
};
