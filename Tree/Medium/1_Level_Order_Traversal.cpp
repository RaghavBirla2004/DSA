// LeetCode
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>>ans;

        queue<TreeNode*>q;
        if(root==NULL){
            return ans;
        }
        q.push(root);

        while(1){
             int size = q.size();
             if(size==0){
                return ans;
             }
             vector<int>data;
             while(size>0){
            TreeNode*temp = q.front();
            q.pop();
            data.push_back(temp->val);

             if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                size--;    
             }
             ans.push_back(data);


            
            
        }
        return ans;
    }
};



// Geeks for geeks
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>q;
      q.push(root);
      if(root==NULL){
          return ans;
      }
      
      while(!q.empty()){
          Node*temp = q.front();
          q.pop();
          
          ans.push_back(temp->data);
          
          if(temp->left!=NULL){
               q.push(temp->left);    
          }
          if (temp->right!=NULL){
              q.push(temp->right);
          }
      }
      return ans;
    }
};
