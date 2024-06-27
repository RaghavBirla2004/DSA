lass Solution{
  public:
    vector<int> PosNegPair(int a[], int n) {
        map<int,int>mp;
        vector<int>v;
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            if(a[i]<0){
                v.push_back(a[i]);
            }
            else{
                mp[a[i]]++;
            }
        }
        
        sort(v.begin(),v.end());
        
        for(int i=(int)v.size()-1;i>=0;i-- ){
          int data = abs(v[i]); 
          if(mp[data]>0){
              ans.push_back(v[i]);
              ans.push_back(data);
              mp[data]-=1;
          }
        }
        
        return ans;
        
    }
};
