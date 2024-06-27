class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            map[a[i]]++;
        }
        for(int i=0;i<m;i++){
            map[b[i]]++;
        }
        
        int count = 0;
          for (auto i = map.begin(); i != map.end(); i++) {
              count++;
          }
          return count;
    }
};
