//GFG 
class Solution {
  public:
  
  int ans = 0;
 int height(Node*root){
    if(root==NULL){
        return 0;
    }
        int lh = height(root->left);
        int rh = height(root->right);
        ans = max( ans , 1+ lh + rh);
        return max(lh ,rh)  + 1;
    
 }
    int diameter(Node* root) {
        // Your code here
        height(root);
        return ans;
    }
};

//Leet Code


class Solution {
public:
int ans = 0;
 int height(TreeNode*root){
    if(root==NULL){
        return 0;
    }
        int lh = height(root->left);
        int rh = height(root->right);
        ans = max( ans , 1+ lh + rh);
        return max(lh ,rh)  + 1;
    
 }



    int diameterOfBinaryTree(TreeNode* root) {
       height(root);
       return ans-1;
    }
};
