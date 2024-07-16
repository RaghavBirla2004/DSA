class Solution {
public:

vector<int>previous_smaller(vector<int>& arr, int n){
    stack<int>st;
    vector<int>ans;
    for(int i=0;i<n;i++){
        while(st.empty() ==false && arr[st.top()] >= arr[i]){
            st.pop();
        }
        int ele = (st.empty()) ? -1 : (st.top());
        ans.push_back(ele);
        st.push(i);
    }
    return ans;
        
    
}


vector<int>next_smaller(vector<int>& arr, int n){
    stack<int>st;
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        while(st.empty() ==false && arr[st.top()] >= arr[i]){
            st.pop();
        }
        int ele = (st.empty()) ? n : (st.top());
        ans.push_back(ele);
        st.push(i);
    }
     reverse(ans.begin(), ans.end());
    return ans;
      
    
}
    int largestRectangleArea(vector<int>& arr) {
int result = 0;
int n = arr.size();
vector<int>ps = previous_smaller(arr,n);
vector<int>ns = next_smaller(arr,n);

for(int i=0;i<n;i++){
    int curr = (ns[i] - ps[i] -1)* arr[i];
    result = max(result,curr);
}
return result;


        //Naive solution
        // int res = 0;
        // int n = arr.size();
        // for(int i=0;i<n;i++){
        //     int curr = arr[i];
        //     for(int j=i-1;j>=0;j--){
        //         if(arr[j] > arr[i]){
        //             curr+= arr[i];
        //         }
        //         else{
        //             break;
        //         }
        //     }

        //     for(int l=i+1; l<n;l++){
        //         if(arr[l] >= arr[i]){
        //             curr+= arr[i];
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     res = max(res,curr);
        // }
        // return res;
    }
};
