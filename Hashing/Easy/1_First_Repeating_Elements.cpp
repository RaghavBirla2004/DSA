class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
           for(int i=0;i<n;i++){
            int key = arr[i];
            
            auto temp = map.find(key); 
            int val= temp->second;
            if(val >1)
                return i+1;
        }
        
        return -1;
        
    }
};
