//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        
        // int largest = -1;
        // int slargest = -1;
        
        // for(int i=0;i<arr.size();i++){
        //     if(largest  < arr[i] ){
        //         slargest= largest;
        //       largest = arr[i]; 
        //     }
        //     else if(arr[i] < largest && arr[i] > slargest){
        //         slargest = arr[i];
        //     }
        // }
        // return slargest;
        
        
        
        // int largest = -1;
        // int slargest = -1;
        
        // for(int i=0;i<arr.size();i++){
            
        //     if(largest< arr[i] ){
        //         slargest = largest;
        //         largest = arr[i];
                
        //     }
        //     else if(arr[i] < largest && arr[i] > slargest){
        //         slargest = arr[i];
        // }
        // }
        // return slargest;
        
        
        //Two pass apporach
        
        // int largest = -1;
        // int slargest = -1;
        
        // for(int i=0;i<arr.size();i++){
        //     if(largest< arr[i] ){
        //         largest = arr[i];
        //     }
        // }
        
        //  for(int i=0;i<arr.size();i++){
        //     if(slargest< arr[i] && arr[i]!=largest ){
        //         slargest = arr[i];
        //     }
        // }
        // return slargest;
        
        
        
        //Naive approach 
        
        // int n  = arr.size() ;
        
        // sort(arr.begin(), arr.end());
        
        // for(int i=n-2;i>=0;i--){
        //     if(arr[i] != arr[n-1]){
        //         return arr[i];
        //     }
        // }
        // return -1;
        
        
      
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
