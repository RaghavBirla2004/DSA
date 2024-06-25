class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        int temp = 0;
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            map[arr1[i]]++;
        }
        for(int i=0;i<n-1;i++){
            map[arr2[i]]++;
        }
        
         for(auto i = map.begin(); i != map.end(); i++) {
        if(i->second == 1) {
            temp = i->first;
            break;
        }
    }

        
         for(int i=0;i<n;i++){
           if(temp==arr1[i]){
               return i;
           }
        }
       
        return 0;
    }
};
