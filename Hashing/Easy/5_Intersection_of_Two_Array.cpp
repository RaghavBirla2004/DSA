class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        //Another way and  Optimised Code
        
          unordered_set<int>s;
    for(int i=0;i<n;i++)    
        s.insert(a[i]);
    
    int count=0;
    for(int i=0;i<m;i++){
        int key = b[i];
        if(s.find(key)!=s.end()){
            count++;
            s.erase(key);
        }
    }
    return count;
        
        
        // unordered_map<int,int>map;
        
        // for(int i=0;i<n;i++){
        //     map[a[i]]++;
        // }
        // for(int i=0;i<m;i++){
        //     map[b[i]]++;
        // }
        
        // int count = 0;
        //   for (auto i = map.begin(); i != map.end(); i++) {
        //      if(i->second>=2){
        //          count++;
        //      }
        //   }
        //   return count;


    }
};
