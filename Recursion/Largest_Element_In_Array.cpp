class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        if(n==0){
            return 0;
        }
        return max(arr[n-1] ,largest(arr,n-1));
        
        
        
        // int max = arr[0];
        // for(int i=0;i<n;i++){
        //     if(max<arr[i]){
        //         max = arr[i];
        //     }
        // }
        // return max;
        
    }
};
