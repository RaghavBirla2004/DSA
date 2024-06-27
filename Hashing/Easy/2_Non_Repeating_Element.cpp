class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        map<int,int>map;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        for(auto i=0;i<n;i++){
            auto temp = map.find(arr[i]);
            if(temp->second==1){
                return arr[i];
            }
        }
        return 0;
        
    } 
  
};
