class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        
        unordered_set<int>s;
        int psum =0;
        for(int i=0;i<n;i++){
            psum = psum +arr[i];
            if(psum == 0){
                return true;
            }
            else if(s.find(psum)!=s.end()){
                return true;
            }
            
            s.insert(psum);
        }
        return false;
    }
};
