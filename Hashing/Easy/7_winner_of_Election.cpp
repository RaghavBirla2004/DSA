class Solution{
  public:
  
   
    vector<string> winner(string arr[],int n)
    {
   unordered_map<string,int>map;
   for(int i=0;i<n;i++){
       map[arr[i]]++;
   }
       int max = 0;
      string name="";
      
      
   for(auto i = map.begin();i!=map.end();i++){
   
      string key = i->first;
      int val = i->second;
      
      if(val>max){
          max = val;
          name = key;
      }
      
        else if(val == max){
                if(key<name)
                    name = key;
            }
   }
   
    vector<string> ans;
        ans.push_back(name);
        string temp = to_string(max);
        ans.push_back(temp);
   
   
  
   return ans;
   
   
        
        
    }
};
