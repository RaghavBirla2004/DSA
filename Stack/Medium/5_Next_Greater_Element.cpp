GFG


class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> nums2, int n){
        // Your code here
        vector<long long>v;
        stack<long long>st;
        
        for(int i=n-1;i>=0;i--){
            long long ele = nums2[i];
            while(!st.empty() && st.top()<=ele){
                st.pop();
            }
            long long res = (st.empty()) ? -1 :st.top();
            v.push_back(res);
            st.push(ele);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
