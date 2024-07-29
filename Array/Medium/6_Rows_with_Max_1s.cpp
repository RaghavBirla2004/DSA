//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > arr) {
        
        // code here
        
        int max_sum = -1;
        int max_index = -1;
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum =0;
            for(int j=0;j<arr[i].size();j++){
                sum += arr[i][j];
            }
            
            if(max_sum < sum){
                max_sum =sum;
                max_index = i;
            }
            
            
        }
        
        if (max_sum == 0) {
            return -1;
        }
        return max_index;
        
//       vector<pair<int,int>>v;
//         int sum = 0;
        
//         for(int i=0;i<arr.size();i++){
//             sum = 0;
//             for(int j=0;j<arr[i].size();j++){
//                  sum = sum + arr[i][j];
//             }
//             v.push_back({i,sum});
//         }
//   int max_sum = -1;
//     int max_index = -1;
//     for (const auto& x : v) {
//         if (x.second > max_sum) {
//             max_sum = x.second;
//             max_index = x.first;
//         }
//     }
//     return max_index;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
