class Solution {
  public:
    vector<int> duplicates(vector<long long> arr) {
        // code here
        vector<int>v;
       
        unordered_map<int,int>map;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        for(auto i=map.begin();i!=map.end();i++){
            if(i->second>=2){
                v.push_back(i->first);
            }
        }
        if(v.size()==0){
            v.push_back(-1);
        }
       return v;
    }
};
