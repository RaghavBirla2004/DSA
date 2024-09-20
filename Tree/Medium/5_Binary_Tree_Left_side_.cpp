vector<int> leftView(Node *root)
{
   // Your code here
       vector<int> ans;
        queue<Node*>q;
        q.push(root);
        
        if(root == NULL)
            return ans;
        while(1){
            int size = q.size();
            if(size==0)
                return ans;
                
                int count = 0;
        
            while(size>0){
               Node* temp = q.front();
                q.pop();
                if(count==0){
                    ans.push_back(temp->data);
                }
               
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                size--;
                   count++;
            }
          
        }
        return ans;
}
