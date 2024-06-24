

  //Optimized solution
        
          
        if(2*n < q){
            return 0ll;
        }
        else if(q<=n){
            return q-1;
        }
        else{
            return 2*n-q+1;
        }


//class Solution {
  // public:
  //   long long sumMatrix(long long n, long long q) {
  //       // code here
  //          long long  count =0;
  //       vector<vector<int>>ans;
  //       for(int i=1;i<=n;i++){
  //           vector<int>v;
  //           for(int j=1;j<=n;j++){
  //               v.push_back(i+j);
  //           }
  //           ans.push_back(v);
  //       }
        
  //         for(int i=0;i<n;i++){
            
  //           for(int j=0;j<n;j++){
  //              if(ans[i][j]==q){
  //                  count++;
  //              }
  //           }
            
  //       }
  //       return count;
    }
};
