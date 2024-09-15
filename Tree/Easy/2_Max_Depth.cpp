class Solution {
public:
 int maxdepth(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(maxdepth(root->left) , maxdepth(root->right)) + 1;
    }
 }
