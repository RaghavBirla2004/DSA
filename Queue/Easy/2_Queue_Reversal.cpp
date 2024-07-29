//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//function Template for C++

//Function to reverse the queue.
class Solution
{
    public:
    void reverse(queue<int>&q){
        if(q.empty()){
            return ;
        }
         int ele =q.front();
        q.pop();
        reverse(q);
        q.push(ele);
        
    }
    queue<int> rev(queue<int> q)
    {
        //Recursion 
        reverse(q);
        return q;
  
        // add code here.
        // queue<int>temp;
        // stack<int>s;
        // while(!q.empty()){
        //     int ele = q.front();
        //     s.push(ele);
        //     q.pop();
        // }
        
        // while(!s.empty()){
        //     int ele = s.top();
        //     temp.push(ele);
        //     s.pop();
        // }
        // return temp;
    }
};


//{ Driver Code Starts.
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends
